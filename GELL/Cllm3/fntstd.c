/* GELL 15.26: source file for the module: "fntstd" */
/*             translation done:           "Wed June 30 93 17:34:40 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "fntstd.h" 

static Ptr GLfntstd_1() {       /* startmodule */
   {    register Ptr aRet;
        {aRet = ((Ptr) GXini_std); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_std() {        /* ini_std */
   {    register Ptr aRet;
        { llrt_inisymb ((Ptr) 4, (Ptr) "true", ((Ptr) GXtrue), (Ptr) &GMtrue, (Ptr) GFtrue);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "false", ((Ptr) GXfalse), (Ptr) &GMfalse, (Ptr) GFfalse);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "not", ((Ptr) GXllnot), (Ptr) &GMllnot, (Ptr) GFllnot);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "null", ((Ptr) GXllnull), (Ptr) &GMllnull, (Ptr) GFllnull);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "atom", ((Ptr) GXatom), (Ptr) &GMatom, (Ptr) GFatom);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "atomp", ((Ptr) GXatomp), (Ptr) &GMatomp, (Ptr) GFatomp);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "symbolp", ((Ptr) GXsymbolp), (Ptr) &GMsymbolp, (Ptr) GFsymbolp);}
        { llrt_inisymb ((Ptr) 9, (Ptr) "variablep", ((Ptr) GXvariablep), (Ptr) &GMvariablep, (Ptr) GFvariablep);}
        { llrt_inisymb ((Ptr) 9, (Ptr) "constantp", ((Ptr) GXconstantp), (Ptr) &GMconstantp, (Ptr) GFconstantp);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "vectorp", ((Ptr) GXvectorp), (Ptr) &GMvectorp, (Ptr) GFvectorp);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "stringp", ((Ptr) GXstringp), (Ptr) &GMstringp, (Ptr) GFstringp);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "listp", ((Ptr) GXlistp), (Ptr) &GMlistp, (Ptr) GFlistp);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "nlistp", ((Ptr) GXnlistp), (Ptr) &GMnlistp, (Ptr) GFnlistp);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "consp", ((Ptr) GXconsp), (Ptr) &GMconsp, (Ptr) GFconsp);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "boundp", ((Ptr) GXboundp), (Ptr) &GMboundp, (Ptr) GFboundp);}
        { llrt_inisymb ((Ptr) 2, (Ptr) "eq", ((Ptr) GXlleq), (Ptr) &GMlleq, (Ptr) GFlleq);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "neq", ((Ptr) GXneq), (Ptr) &GMneq, (Ptr) GFneq);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "equal", ((Ptr) GXequal), (Ptr) &GMequal, (Ptr) GFequal);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "nequal", ((Ptr) GXnequal), (Ptr) &GMnequal, (Ptr) GFnequal);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "memq", ((Ptr) GXmemq), (Ptr) &GMmemq, (Ptr) GFmemq);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "member", ((Ptr) GXmember), (Ptr) &GMmember, (Ptr) GFmember);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "tailp", ((Ptr) GXtailp), (Ptr) &GMtailp, (Ptr) GFtailp);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "last", ((Ptr) GXlast), (Ptr) &GMlast, (Ptr) GFlast);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "nthcdr", ((Ptr) GXnthcdr), (Ptr) &GMnthcdr, (Ptr) GFnthcdr);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "nth", ((Ptr) GXnth), (Ptr) &GMnth, (Ptr) GFnth);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "length", ((Ptr) GXlllength), (Ptr) &GMlllength, (Ptr) GFlllength);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "cons", ((Ptr) GXllcons), (Ptr) &GMllcons, (Ptr) GFllcons);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "xcons", ((Ptr) GXfxcons), (Ptr) &GMfxcons, (Ptr) GFfxcons);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "ncons", ((Ptr) GXfncons), (Ptr) &GMfncons, (Ptr) GFfncons);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "mcons", ((Ptr) GXmcons), (Ptr) &GMmcons, (Ptr) GFmcons);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "list", ((Ptr) GXlist), (Ptr) &GMlist, (Ptr) GFlist);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "evlis", ((Ptr) GXevlis), (Ptr) &GMevlis, (Ptr) GFevlis);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "kwote", ((Ptr) GXkwote), (Ptr) &GMkwote, (Ptr) GFkwote);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "makelist", ((Ptr) GXmakelist), (Ptr) &GMmakelist, (Ptr) GFmakelist);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "reverse", ((Ptr) GXreverse), (Ptr) &GMreverse, (Ptr) GFreverse);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "append", ((Ptr) GXappend), (Ptr) &GMappend, (Ptr) GFappend);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "append1", ((Ptr) GXappnd1), (Ptr) &GMappnd1, (Ptr) GFappnd1);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "remq", ((Ptr) GXremq), (Ptr) &GMremq, (Ptr) GFremq);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "remove", ((Ptr) GXremove), (Ptr) &GMremove, (Ptr) GFremove);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "copy", ((Ptr) GXcopy), (Ptr) &GMcopy, (Ptr) GFcopy);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "copylist", ((Ptr) GXcopylist), (Ptr) &GMcopylist, (Ptr) GFcopylist);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "firstn", ((Ptr) GXfirstn), (Ptr) &GMfirstn, (Ptr) GFfirstn);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "lastn", ((Ptr) GXlastn), (Ptr) &GMlastn, (Ptr) GFlastn);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "subst", ((Ptr) GXsubst), (Ptr) &GMsubst, (Ptr) GFsubst);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "oblist", ((Ptr) GXoblist), (Ptr) &GMoblist, (Ptr) GFoblist);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "boblist", ((Ptr) GXboblist), (Ptr) &GMboblist, (Ptr) GFboblist);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "rplaca", ((Ptr) GXrplaca), (Ptr) &GMrplaca, (Ptr) GFrplaca);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "rplacd", ((Ptr) GXrplacd), (Ptr) &GMrplacd, (Ptr) GFrplacd);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "rplac", ((Ptr) GXrplac), (Ptr) &GMrplac, (Ptr) GFrplac);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "placdl", ((Ptr) GXplacdl), (Ptr) &GMplacdl, (Ptr) GFplacdl);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "displace", ((Ptr) GXdisplace), (Ptr) &GMdisplace, (Ptr) GFdisplace);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "setq", ((Ptr) GXsetq), (Ptr) &GMsetq, (Ptr) GFsetq);}
        { llrt_inisymb ((Ptr) 3, (Ptr) "set", ((Ptr) GXfset), (Ptr) &GMfset, (Ptr) GFfset);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "setqq", ((Ptr) GXsetqq), (Ptr) &GMsetqq, (Ptr) GFsetqq);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "psetq", ((Ptr) GXpsetq), (Ptr) &GMpsetq, (Ptr) GFpsetq);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "deset", ((Ptr) GXdeset), (Ptr) &GMdeset, (Ptr) GFdeset);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "desetq", ((Ptr) GXdesetq), (Ptr) &GMdesetq, (Ptr) GFdesetq);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "cirlist", ((Ptr) GXcirlist), (Ptr) &GMcirlist, (Ptr) GFcirlist);}
        { llrt_inisymb ((Ptr) 8, (Ptr) "nreverse", ((Ptr) GXnreverse), (Ptr) &GMnreverse, (Ptr) GFnreverse);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "nsubst", ((Ptr) GXnsubst), (Ptr) &GMnsubst, (Ptr) GFnsubst);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "delq", ((Ptr) GXdelq), (Ptr) &GMdelq, (Ptr) GFdelq);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "delete", ((Ptr) GXdelete), (Ptr) &GMdelete, (Ptr) GFdelete);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "nreconc", ((Ptr) GXnreconc), (Ptr) &GMnreconc, (Ptr) GFnreconc);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "nextl", ((Ptr) GXnextl), (Ptr) &GMnextl, (Ptr) GFnextl);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "newl", ((Ptr) GXnewl), (Ptr) &GMnewl, (Ptr) GFnewl);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "newr", ((Ptr) GXnewr), (Ptr) &GMnewr, (Ptr) GFnewr);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "nconc", ((Ptr) GXnconc), (Ptr) &GMnconc, (Ptr) GFnconc);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "nconc1", ((Ptr) GXnconc1), (Ptr) &GMnconc1, (Ptr) GFnconc1);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "acons", ((Ptr) GXacons), (Ptr) &GMacons, (Ptr) GFacons);}
        { llrt_inisymb ((Ptr) 7, (Ptr) "pairlis", ((Ptr) GXpairlis), (Ptr) &GMpairlis, (Ptr) GFpairlis);}
        { llrt_inisymb ((Ptr) 4, (Ptr) "assq", ((Ptr) GXassq), (Ptr) &GMassq, (Ptr) GFassq);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "assoc", ((Ptr) GXassoc), (Ptr) &GMassoc, (Ptr) GFassoc);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "cassq", ((Ptr) GXcassq), (Ptr) &GMcassq, (Ptr) GFcassq);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "cassoc", ((Ptr) GXcassoc), (Ptr) &GMcassoc, (Ptr) GFcassoc);}
        { llrt_inisymb ((Ptr) 5, (Ptr) "rassq", ((Ptr) GXrassq), (Ptr) &GMrassq, (Ptr) GFrassq);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "rassoc", ((Ptr) GXrassoc), (Ptr) &GMrassoc, (Ptr) GFrassoc);}
        { llrt_inisymb ((Ptr) 6, (Ptr) "sublis", ((Ptr) GXsublis), (Ptr) &GMsublis, (Ptr) GFsublis);}
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXtrue() {   /* true */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) (GIa4);
        GIa1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXfalse() {  /* false */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp += (Fix) (GIa4);
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXllnull() { /* null */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_llnullt;
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_llnullt:
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXllnot() {  /* not */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_llnott;
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_llnott:
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXatom() {   /* atom */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        goto l_atomt;
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_atomt:
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXatomp() {  /* atomp */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        goto l_atompt;
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_atompt:
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXsymbolp() {        /* symbolp */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((rA1 >= GIbsymb) && (rA1 < GIbcons))        goto l_symbolpt;
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_symbolpt:
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXvariablep() {      /* variablep */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((rA1 >= GIbvar) && (rA1 < GIbcons)) { aRet = (rSp++)->Val; goto lRet;}
        rA1 = GInil;
l_varpret:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXconstantp() {      /* constantp */
   {    register Ptr aRet, rSp, rA1, rBstrg, rBcons;
        rSp = GIsp; rA1 = GIa1; rBstrg = GIbstrg; rBcons = GIbcons;
        if (rA1 < GIbfloat)     goto l_conpt;
        if (llrt_floatp (rA1) != 0) 
        goto l_conpt;
        if ((rA1 >= rBstrg) && (rA1 < GIbsymb)) goto l_conpt;
        if ((rA1 >= GIbvect) && (rA1 < rBstrg)) goto l_conpt;
        if ((long) rA1 >= (long) rBcons)        goto l_conpret;
        if ((rA1 < GIbvar) || (rA1 >= rBcons))  goto l_conpt;
l_conpret:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_conpt:
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXvectorp() {        /* vectorp */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((rA1 >= GIbvect) && (rA1 < GIbstrg))        { aRet = (rSp++)->Val; goto lRet;}
        rA1 = GInil;
l_vectret:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXstringp() {        /* stringp */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((rA1 >= GIbstrg) && (rA1 < GIbsymb))        { aRet = (rSp++)->Val; goto lRet;}
        rA1 = GInil;
l_strgret:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXlistp() {  /* listp */
   {    register Ptr aRet, rSp, rA1, rNil;
        rSp = GIsp; rA1 = GIa1; rNil = GInil;
        if (rA1 == rNil)        goto l_listpt;
        if ((long) rA1 >= (long) GIbcons)       goto l_listpt;
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_listpt:
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXnlistp() { /* nlistp */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((long) GIa1 < (long) GIbcons)       { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GInil;
l_nlistpr:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXconsp() {  /* consp */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if ((long) GIa1 >= (long) GIbcons)      { aRet = (rSp++)->Val; goto lRet;}
        GIa1 = GInil;
l_conspr:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXboundp() { /* boundp */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((rA1 < GIbsymb) || (rA1 >= GIbcons))        goto l_boundp1;
        GIa2 = rA1->Val;
        if (GIa2 != GMundef)    goto l_boundpt;
l_boundp1:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_boundpt:
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXlleq() {   /* eq */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GIa2)        goto l_lleqt;
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_lleqt:
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXneq() {    /* neq */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 != GIa2)        goto l_neqt;
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_neqt:
        rA1 = GMt;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXnequal() { /* nequal */
   {    register Ptr aRet;
        (--GIsp)->Val = ((Ptr) GXllnot);
        {aRet = ((Ptr) GXequal); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXequal() {  /* equal */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = rSp;
        (--rSp)->Val = ((Ptr) GLfntstd_2);
        {aRet = ((Ptr) GLfntstd_3); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_2() {       /* ret_call_equal2_1 */
   {    register Ptr aRet;
        GIa1 = GMt;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_4() {       /* equaln */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        rSp = GIa3;
        GIa1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_5() {       /* equalnt */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp++)->Val;
        if (GIa1 != GInil)      { aRet = (rSp++)->Val; goto lRet;}
        rSp = GIa3;
l_equalntr:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_6() {       /* equal1 */
   {    register Ptr aRet, rSp, rA1, rA2, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
l_GLfntstd_6:
        if ((long) rA2 < (long) rBcons) {aRet = ((Ptr) GLfntstd_4); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = (rA2 + 1)->Val;
        rA2 = rA2->Val;
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_ithard ();}
        if (rA1 != rA2) goto l_equal11;
        rA2 = (rSp++)->Val;
        rA1 = (rSp++)->Val;
        if ((long) rA1 >= (long) rBcons)        goto l_GLfntstd_6;
        {aRet = ((Ptr) GLfntstd_3); goto lRet;}
l_equal11:
        if (rSp < GImstack)     {aRet = ((Ptr) GXerrfs); goto lRet;}
        (--rSp)->Val = ((Ptr) GLfntstd_7);
        {aRet = ((Ptr) GLfntstd_3); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_7() {       /* ret_call_equal2_2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLfntstd_3); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_3() {       /* equal2 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rBfloat, rBvect, rBstrg, rBsymb, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBfloat = GIbfloat; rBvect = GIbvect; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        if (rA1 != rA2) goto l_equal3;
        {aRet = (rSp++)->Val; goto lRet;}
l_equal3:
        if ((long) rA1 >= (long) rBcons)        {aRet = ((Ptr) GLfntstd_6); goto lRet;}
        if ((rA1 >= rBsymb) && (rA1 < rBcons))  {aRet = ((Ptr) GLfntstd_4); goto lRet;}
        if ((rA1 >= rBvect) && (rA1 < rBstrg))  goto l_equal7;
        if ((rA1 >= rBstrg) && (rA1 < rBsymb))  goto l_equal8;
        if (rA2 >= rBfloat)     goto l_equal4;
        if (rA1 < rBfloat)      {aRet = ((Ptr) GLfntstd_4); goto lRet;}
        goto l_equal5;
l_equal4:
        if (llrt_floatp (rA2) == 0) 
        {aRet = ((Ptr) GLfntstd_4); goto lRet;}
l_equal5:
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLfntstd_5);
        {aRet = ((Ptr) GXgaeqn); goto lRet;}
l_equal7:
        if ((rA2 < rBvect) || (rA2 >= rBstrg))  {aRet = ((Ptr) GLfntstd_4); goto lRet;}
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLfntstd_5);
        {aRet = ((Ptr) GXeqvectri); goto lRet;}
l_equal8:
        if ((rA2 < rBstrg) || (rA2 >= rBsymb))  {aRet = ((Ptr) GLfntstd_4); goto lRet;}
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLfntstd_5);
        {aRet = ((Ptr) GXeqstrgi); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_8() {       /* savequal */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa2;
        (--rSp)->Val = GIa3;
        (--rSp)->Val = ((Ptr) GLfntstd_9);
        {aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_9() {       /* ret_call_equal_3 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp++)->Val;
        GIa2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXmemq() {   /* memq */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        goto l_memq2;
l_memq1:
        rA3 = rA2->Val;
        if (rA3 == rA1) goto l_memq3;
        rA2 = (rA2 + 1)->Val;
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; llrt_ithard ();}
l_memq2:
        if ((long) rA2 >= (long) GIbcons)       goto l_memq1;
        rA2 = GInil;
l_memq3:
        rA1 = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXmember() { /* member */
   {    register Ptr aRet;
        if ((long) GIa2 >= (long) GIbcons)      {aRet = ((Ptr) GLfntstd_10); goto lRet;}
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_10() {      /* memb1 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        (--rSp)->Val = rA2;
        (--rSp)->Val = GIa1;
        rA2 = rA2->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_11);
        {aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_11() {      /* ret_call_equal_4 */
   {    register Ptr aRet, rSp, rA1, rA2, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rNil = GInil;
        if (rA1 != rNil)        goto l_memb3;
        rA1 = (rSp++)->Val;
        rA2 = (rSp++)->Val;
        rA2 = (rA2 + 1)->Val;
        if ((long) rA2 >= (long) GIbcons)       {aRet = ((Ptr) GLfntstd_10); goto lRet;}
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
l_memb3:
        rSp += (Fix) 1;
        rA1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXtailp() {  /* tailp */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        goto l_tailp3;
l_tailp2:
        if (rA1 == rA2) { aRet = (rSp++)->Val; goto lRet;}
        rA2 = (rA2 + 1)->Val;
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_ithard ();}
l_tailp3:
        if ((long) rA2 >= (long) GIbcons)       goto l_tailp2;
        rA1 = GInil;
l_tailp9:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXlast() {   /* last */
   {    register Ptr aRet, rSp, rA1, rA2, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) { aRet = (rSp++)->Val; goto lRet;}
l_last1:
        rA2 = (rA1 + 1)->Val;
        if ((long) rA2 < (long) rBcons) { aRet = (rSp++)->Val; goto lRet;}
        rA1 = (rA2 + 1)->Val;
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_ithard ();}
        if ((long) rA1 >= (long) rBcons)        goto l_last1;
        rA1 = rA2;
l_lastret:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXnth() {    /* nth */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 >= GIbfloat)    goto l_ntherr;
        goto l_nth2;
l_nth1:
        rA2 = (rA2 + 1)->Val;
l_nth2:
        if ((long) rA2 < (long) GIbcons)        goto l_nthf;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nth1;}
        rA1 = rA2->Val;
        {aRet = (rSp++)->Val; goto lRet;}
l_nthf:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_ntherr:
        rA2 = GMnth;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXnthcdr() { /* nthcdr */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if (rA1 >= GIbfloat)    goto l_nthcerr;
        goto l_nthc2;
l_nthc1:
        rA2 = (rA2 + 1)->Val;
l_nthc2:
        if ((long) rA2 < (long) GIbcons)        goto l_nthcf;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_nthc1;}
        rA1 = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
l_nthcf:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_nthcerr:
        rA2 = GMnthcdr;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXlllength() {       /* length */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = (Ptr) 0;
        goto l_lengt2;
l_lengt1:
        rA1 = (rA1 + 1)->Val;
        rA2 = (Ptr) ((UFix) ((Fix) (rA2) + (Fix) (1)));
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; llrt_ithard ();}
l_lengt2:
        if ((long) rA1 >= (long) GIbcons)       goto l_lengt1;
        rA1 = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXllcons() { /* cons */
   {    register Ptr aRet;
         GIa1 = llrt_cons (GIa1, GIa2);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfxcons() { /* xcons */
   {    register Ptr aRet;
         GIa1 = llrt_cons (GIa2, GIa1);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfncons() { /* ncons */
   {    register Ptr aRet;
         GIa1 = llrt_cons (GIa1, GInil);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXmcons() {  /* mcons */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if (rA4 == (Ptr) 0)     goto l_mconsf;
        rA1 = (rSp++)->Val;
        goto l_mcons2;
l_mcons1:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_mcons2:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux > 0)    goto l_mcons1;
                else rA4 = (Ptr) 0;}
        {aRet = (rSp++)->Val; goto lRet;}
l_mconsf:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXlist() {   /* list */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA1 = GInil;
        goto l_lists2;
l_lists1:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_lists2:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_lists1;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXevlis() {  /* evlis */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        { aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_12);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_12() {      /* ret_call_evalcar_5 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        (--rSp)->Val = rA1;
        {aRet = ((Ptr) GLfntstd_13); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_13() {      /* list1 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        if ((long) rA3 < (long) GIbcons)        {aRet = ((Ptr) GLfntstd_14); goto lRet;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = (rA3 + 1)->Val;
        GIa1 = rA3->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_15);
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_15() {      /* ret_call_evala1_6 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa3 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        GIa2 = (rSp++)->Val;
        (GIa2 + 1)->Val = rA1;
        {aRet = ((Ptr) GLfntstd_13); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_14() {      /* list2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXkwote() {  /* kwote */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        GIa1 = rA1; rA1 = llrt_cons (rA1, GInil);
        GIa1 = rA1; rA1 = llrt_cons (GMquote, rA1);
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

extern Ptr GXmakelist() {       /* makelist */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        if (rA1 >= GIbfloat)    goto l_makeler;
        rA3 = GInil;
        goto l_makel3;
l_makel2:
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA3 = llrt_cons (rA2, rA3);
l_makel3:
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_makel2;}
        rA1 = rA3;
        {aRet = (rSp++)->Val; goto lRet;}
l_makeler:
        rA2 = GMmakelist;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXreverse() {        /* reverse */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        rA2 = GInil;
        goto l_rev2;
l_rev1:
        rA3 = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA2 = llrt_cons (rA3, rA2);
l_rev2:
        if ((long) rA1 >= (long) GIbcons)       goto l_rev1;
        rA1 = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXappnd1() { /* append1 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (rA2, GInil);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GXappend); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

extern Ptr GXappend() { /* append */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBcons = GIbcons;
        if (rA4 == (Ptr) 0)     goto l_appendf;
        rA1 = (rSp++)->Val;
        goto l_append4;
l_append1:
        rA2 = (rSp++)->Val;
        if ((long) rA2 < (long) rBcons) goto l_append4;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA2->Val, rA1);
        (--rSp)->Val = rA1;
        goto l_append3;
l_append2:
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; (rA1 + 1)->Val = llrt_cons (rA2->Val, (rA1 + 1)->Val);
        rA1 = (rA1 + 1)->Val;
l_append3:
        rA2 = (rA2 + 1)->Val;
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; llrt_ithard ();}
        if ((long) rA2 >= (long) rBcons)        goto l_append2;
        rA1 = (rSp++)->Val;
l_append4:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux > 0)    goto l_append1;
                else rA4 = (Ptr) 0;}
        {aRet = (rSp++)->Val; goto lRet;}
l_appendf:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXremq() {   /* remq */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
l_GXremq:
        if ((long) rA2 >= (long) GIbcons)       goto l_remq6;
        rA1 = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
l_remq6:
        rA3 = rA2->Val;
        rA2 = (rA2 + 1)->Val;
        if (rA3 == rA1) goto l_GXremq;
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; llrt_ithard ();}
        if (rSp < GImstack)     {aRet = ((Ptr) GXerrfs); goto lRet;}
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLfntstd_16);
        goto l_GXremq;
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLfntstd_16() {      /* ret_call_remq_7 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa3 = (rSp++)->Val;
        GIsp = rSp; GIa1 = llrt_cons (GIa3, GIa1);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXremove() { /* remove */
   {    register Ptr aRet;
        GIa3 = GIa2;
        {aRet = ((Ptr) GLfntstd_17); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_17() {      /* remv1 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        if ((long) rA3 >= (long) GIbcons)       goto l_remv4;
        GIa1 = rA3;
        {aRet = (rSp++)->Val; goto lRet;}
l_remv4:
        if (rSp < GImstack)     {aRet = ((Ptr) GXerrfs); goto lRet;}
        (--rSp)->Val = GIa1;
        GIa2 = rA3->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_18);
        {aRet = ((Ptr) GLfntstd_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_18() {      /* ret_call_savequal_8 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = GIa1;
        GIa1 = (rSp++)->Val;
        GIa3 = (GIa3 + 1)->Val;
        if (GIa4 != GInil)      {aRet = ((Ptr) GLfntstd_17); goto lRet;}
        (--rSp)->Val = GIa2;
        (--rSp)->Val = ((Ptr) GLfntstd_19);
        {aRet = ((Ptr) GLfntstd_17); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_19() {      /* ret_call_remv1_9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = llrt_cons (GIa2, GIa1);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcopylist() {       /* copylist */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
l_GXcopylist:
        if ((long) rA1 < (long) GIbcons)        { aRet = (rSp++)->Val; goto lRet;}
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; llrt_ithard ();}
        if (rSp < GImstack)     {aRet = ((Ptr) GXerrfs); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_20);
        goto l_GXcopylist;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_20() {      /* ret_call_copylist_10 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = GIa1;
                GIa1 = aux;}
        (--rSp)->Val = ((Ptr) GLfntstd_21);
        {aRet = ((Ptr) GXcopylist); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_21() {      /* ret_call_copylist_11 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = llrt_cons (GIa2, GIa1);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcopy() {   /* copy */
   {    register Ptr aRet, rSp, rA1, rBcons;
        rSp = GIsp; rA1 = GIa1; rBcons = GIbcons;
l_GXcopy:
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; llrt_ithard ();}
        if (rSp < GImstack)     {aRet = ((Ptr) GXerrfs); goto lRet;}
        if ((long) rA1 < (long) rBcons) {aRet = ((Ptr) GLfntstd_22); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        {register TableElem aux, mask;
                aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
                aux >>= PTR2_SHIFT;
                mask = 1; mask <<= (aux & ELEM_MASK);
                aux >>= ELEM_SHIFT;
                aux = GIbtbin[aux] & mask;
                if (aux != 0)   {aRet = ((Ptr) GLfntstd_23); goto lRet;}}
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_24);
        goto l_GXcopy;
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_24() {      /* ret_call_copy_12 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = GIa1;
                GIa1 = aux;}
        (--rSp)->Val = ((Ptr) GLfntstd_25);
        {aRet = ((Ptr) GXcopy); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_25() {      /* ret_call_copy_13 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = llrt_cons (GIa2, GIa1);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_23() {      /* copy2 */
   {    register Ptr aRet;
        GIa1 = GIa1->Val;
        (--GIsp)->Val = ((Ptr) GLfntstd_26);
        {aRet = ((Ptr) GXcopy); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_26() {      /* ret_call_copy_14 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = GIa1;
                GIa1 = aux;}
        (--rSp)->Val = ((Ptr) GLfntstd_27);
        {aRet = ((Ptr) GXcopy); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_27() {      /* ret_call_copy_15 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; rA1 = llrt_cons (GIa2, rA1);
        {register TableElem aux, mask;
                aux = (TableElem) ((TableElem) rA1 - (TableElem) GIbcons);
                aux >>= PTR2_SHIFT;
                mask = 1; mask <<= (aux & ELEM_MASK);
                aux >>= ELEM_SHIFT;
                GIbtbin[aux] |= mask;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_22() {      /* copy3 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((rA1 < GIbstrg) || (rA1 >= GIbsymb))        {aRet = ((Ptr) GLfntstd_28); goto lRet;}
        (--rSp)->Val = rA1;
        GIa2 = (rA1->Val + 1)->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_29);
        {aRet = ((Ptr) GXstrgallc); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_29() {      /* ret_call_strgallc_16 */
   {    register Ptr aRet, rSp, rA1, rA3;
        rSp = GIsp; rA1 = GIa1; rA3 = GIa3;
        rA3 = (rSp++)->Val;
        (rA1 + 1)->Val = (rA3 + 1)->Val;
        {register char *r1, *r2; register int r3;
                r1 = (char *) (rA3->Val + 2);
                r2 = (char *) (rA1->Val + 2);
                r3 = (Fix) (GIa2);
         while (r3--) *r2++ = *r1++;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLfntstd_28() {      /* copy4 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if ((rA1 < GIbvect) || (rA1 >= GIbstrg))        { aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = rA1;
        rA1 = (rA1->Val + 1)->Val;
        (--rSp)->Val = rA1;
        GIa2 = GInil;
        (--rSp)->Val = ((Ptr) GLfntstd_30);
        {aRet = ((Ptr) GXmakevect); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_30() {      /* ret_call_makevect_17 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        GIa2 = rA1;
        GIa4 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        (rA1 + 1)->Val = (GIa3 + 1)->Val;
        {aRet = ((Ptr) GLfntstd_31); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_32() {      /* copy5 */
   {    register Ptr aRet, rSp, rA3, rA4;
        rSp = GIsp; rA3 = GIa3; rA4 = GIa4;
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA3;
        (--rSp)->Val = GIa2;
        GIa1 = (rA3->Val + 2 + (Fix) (rA4))->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_33);
        {aRet = ((Ptr) GXcopy); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_33() {      /* ret_call_copy_18 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa3 = (rSp++)->Val;
        GIa4 = (rSp++)->Val;
        (GIa2->Val + 2 + (Fix) (GIa4))->Val = GIa1;
        {aRet = ((Ptr) GLfntstd_31); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_31() {      /* copy6 */
   {    register Ptr aRet;
        {register Fix aux;
                aux = (Fix) (GIa4) - 1;
                GIa4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLfntstd_32); goto lRet;}}
        GIa1 = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfirstn() { /* firstn */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        rA4 = GMfirstn;
        if (rA1 >= GIbfloat)    {aRet = ((Ptr) GLfntstd_34); goto lRet;}
        if ((long) rA2 < (long) rBcons) {aRet = ((Ptr) GLfntstd_35); goto lRet;}
        if ((Fix) (rA1) <= (Fix) 0)     goto l_firsf;
        rA3 = rA2->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_cons (rA3, rNil);
        (--rSp)->Val = rA3;
        goto l_firs1;
l_firs0:
        rA2 = (rA2 + 1)->Val;
        if ((long) rA2 < (long) rBcons) goto l_firs3;
        rA3 = rA2->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_cons (rA3, rNil);
        (rA4 + 1)->Val = rA3;
l_firs1:
        rA4 = rA3;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux > 0)    goto l_firs0;
                else rA1 = (Ptr) 0;}
l_firs3:
        rA1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
l_firsf:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfntstd_34() {      /* firserr1 */
   {    register Ptr aRet;
        GIa2 = GIa4;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_35() {      /* firserr2 */
   {    register Ptr aRet;
        GIa1 = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXlastn() {  /* lastn */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        rA4 = GMlastn;
        if (rA1 >= GIbfloat)    {aRet = ((Ptr) GLfntstd_34); goto lRet;}
        if ((long) rA2 < (long) rBcons) {aRet = ((Ptr) GLfntstd_35); goto lRet;}
        if ((Fix) (rA1) <= (Fix) 0)     goto l_lastnf;
        rA3 = rA2;
l_lastn0:
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; llrt_ithard ();}
        rA2 = (rA2 + 1)->Val;
        if ((Ptr) 0 == rA1)     goto l_lastn1;
        {register int aux;
                aux = (int) ((Fix) (rA1) - (Fix) (1));
                rA1 = (Ptr) ((UFix) aux);
        if ((aux > FIX_MAX) || (aux < FIX_MIN)) goto l_lastn2;}
        goto l_lastn2;
l_lastn1:
        rA3 = (rA3 + 1)->Val;
l_lastn2:
        if ((long) rA2 >= (long) rBcons)        goto l_lastn0;
        (--rSp)->Val = rA3;
        rA1 = rNil;
        (--rSp)->Val = rA1;
        rA4 = (Ptr) 2;
        {aRet = ((Ptr) GXappend); goto lRet;}
l_lastnf:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXsubst() {  /* subst */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (rSp < GImstack)     {aRet = ((Ptr) GXerrfs); goto lRet;}
        (--rSp)->Val = GIa1;
        GIa1 = GIa3;
        GIa3 = (rSp++)->Val;
        {aRet = ((Ptr) GLfntstd_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_36() {      /* substt2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLfntstd_37);
        {aRet = ((Ptr) GLfntstd_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_37() {      /* ret_call_savequal_19 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_substt4;
        rA1 = (rSp++)->Val;
        rA1 = GIa3;
l_substt3:
        {aRet = (rSp++)->Val; goto lRet;}
l_substt4:
        rA1 = (rSp++)->Val;
        if ((long) rA1 < (long) GIbcons)        { aRet = (rSp++)->Val; goto lRet;}
        (--rSp)->Val = rA1;
        (--rSp)->Val = (rA1 + 1)->Val;
        rA1 = rA1->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_38);
        {aRet = ((Ptr) GLfntstd_36); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_38() {      /* ret_call_substt2_20 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = GIa1;
                GIa1 = aux;}
        (--rSp)->Val = ((Ptr) GLfntstd_39);
        {aRet = ((Ptr) GLfntstd_36); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_39() {      /* ret_call_substt2_21 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = rA2;
                rA2 = aux;}
        if (rA2->Val != rA4)    goto l_substt8;
        if ((rA2 + 1)->Val != rA1)      goto l_substt8;
        rA1 = rA2;
        rA2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
l_substt8:
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; rA1 = llrt_cons (rA4, rA1);
        rA2 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXoblist() { /* oblist */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBstrg, rBsymb, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBstrg = GIbstrg; rBsymb = GIbsymb; rBcons = GIbcons;
        rA1 = rNil;
        rA2 = rNil;
        if (rA4 == (Ptr) 0)     goto l_oblist0;
        rA2 = (rSp++)->Val;
        if (rA4 == (Ptr) 1)     goto l_oblist0;
        rA3 = (rSp++)->Val;
        if (rA4 == (Ptr) 2)     goto l_oblisp0;
        rA1 = (Ptr) 2;
        rA2 = GMoblist;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
l_oblist0:
        if ((rA2 < rBsymb) || (rA2 >= rBcons))  goto l_obliser1;
        rA4 = (GIhashtab->Val + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) - (Fix) (1)));
l_oblist1:
        rA4 = (GIhashtab->Val + 2 + (Fix) (rA4))->Val;
        goto l_oblist8;
l_oblist2:
        rA3 = rA4;
        if (((rA4 + 7)->Val >= rBstrg) && ((rA4 + 7)->Val < rBsymb))    goto l_oblist5;
l_oblist3:
        rA4 = (rA4 + 7)->Val;
l_oblist5:
        if (rA2 == rNil)        goto l_oblist6;
        if ((rA4 + 3)->Val != rA2)      goto l_oblist7;
l_oblist6:
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA4, rA1);
l_oblist7:
        if (rA4 != rA3) goto l_oblist3;
        rA4 = (rA4 + 5)->Val;
l_oblist8:
        if ((rA4 >= rBsymb) && (rA4 < rBcons))  goto l_oblist2;
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_oblist1;}
        {aRet = (rSp++)->Val; goto lRet;}
l_oblisp0:
        if ((rA2 < rBsymb) || (rA2 >= rBcons))  goto l_obliser1;
        if ((rA3 < rBsymb) || (rA3 >= rBcons))  goto l_obliser2;
        rA4 = rA2;
        if (((rA4 + 7)->Val >= rBstrg) && ((rA4 + 7)->Val < rBsymb))    goto l_oblisp3;
l_oblisp2:
        rA4 = (rA4 + 7)->Val;
l_oblisp3:
        if (rA3 == rNil)        goto l_oblisp4;
        if ((rA4 + 3)->Val != rA3)      goto l_oblisp5;
l_oblisp4:
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA4, rA1);
l_oblisp5:
        if (rA4 != rA2) goto l_oblisp2;
        {aRet = (rSp++)->Val; goto lRet;}
l_obliser1:
        rA1 = rA2;
        goto l_obliser3;
l_obliser2:
        rA1 = rA3;
l_obliser3:
        rA2 = GMoblist;
        {aRet = ((Ptr) GXerrsym); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXboblist() {        /* boblist */
   {    register Ptr aRet, rA4;
        rA4 = GIa4;
        if (rA4 == (Ptr) 1)     {aRet = ((Ptr) GLfntstd_40); goto lRet;}
        if (rA4 == (Ptr) 0)     goto l_boblis1;
        GIa1 = (Ptr) 1;
        GIa2 = GMboblist;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
l_boblis1:
        rA4 = GInil;
        GIa1 = (GIhashtab->Val + 1)->Val;
        {aRet = ((Ptr) GLfntstd_41); goto lRet;}
  lRet: GIa4 = rA4; return (aRet);}}

static Ptr GLfntstd_42() {      /* boblis2 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        (--rSp)->Val = ((Ptr) GLfntstd_43);
        {aRet = ((Ptr) GLfntstd_44); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_43() {      /* ret_call_boblon2_22 */
   {    register Ptr aRet;
         GIa4 = llrt_cons (GIa1, GIa4);
        GIa1 = (GIsp++)->Val;
        {aRet = ((Ptr) GLfntstd_41); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_41() {      /* boblis9 */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        {register Fix aux;
                aux = (Fix) (rA1) - 1;
                rA1 = (Ptr) ((UFix) aux);
                if (aux >= 0)   {aRet = ((Ptr) GLfntstd_42); goto lRet;}}
        rA1 = GIa4;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_40() {      /* boblon */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA1 = (rSp++)->Val;
        if (rA1 < GIbfloat)     goto l_boblon1;
l_bobloer:
        rA2 = GMboblist;
        {aRet = ((Ptr) GXerrnia); goto lRet;}
l_bobloer2:
        rA2 = GMboblist;
        {aRet = ((Ptr) GXerroob); goto lRet;}
l_boblon1:
        if ((Fix) (rA1) < (Fix) 0)      goto l_bobloer2;
        rA2 = (GIhashtab->Val + 1)->Val;
        if ((Fix) (rA1) >= (Fix) (rA2)) goto l_bobloer2;
        {aRet = ((Ptr) GLfntstd_44); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_44() {      /* boblon2 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBsymb;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBsymb = GIbsymb;
        rA2 = (GIhashtab->Val + 2 + (Fix) (rA1))->Val;
        rA1 = rNil;
        goto l_boblon8;
l_boblon3:
        if (rA2 == GMundef)     goto l_boblon7;
        if (((rA2 + 7)->Val >= GIbstrg) && ((rA2 + 7)->Val < rBsymb))   goto l_boblon6;
        (--rSp)->Val = rA4;
        rA4 = rNil;
        rA3 = rA2;
l_boblon4:
        rA3 = (rA3 + 7)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA4 = llrt_cons (rA3, rA4);
        if (rA3 != rA2) goto l_boblon4;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA4, rA1);
        rA4 = (rSp++)->Val;
        goto l_boblon7;
l_boblon6:
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_boblon7:
        rA2 = (rA2 + 5)->Val;
l_boblon8:
        if ((rA2 >= rBsymb) && (rA2 < GIbcons)) goto l_boblon3;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXrplaca() { /* rplaca */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        goto l_rplaca1;
        rA1->Val = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
l_rplaca1:
        GIa2 = GMrplaca;
        {aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXrplacd() { /* rplacd */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        goto l_rplacd1;
        (rA1 + 1)->Val = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
l_rplacd1:
        GIa2 = GMrplacd;
        {aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXrplac() {  /* rplac */
   {    register Ptr aRet, rA1;
        rA1 = GIa1;
        if ((long) rA1 < (long) GIbcons)        goto l_rplac1;
        rA1->Val = GIa2;
        (rA1 + 1)->Val = GIa3;
        {aRet = (GIsp++)->Val; goto lRet;}
l_rplac1:
        GIa2 = GMrplac;
        {aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXdisplace() {       /* displace */
   {    register Ptr aRet, rSp, rA1, rA2, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rBcons = GIbcons;
        if ((long) rA1 < (long) rBcons) goto l_displ2;
        if ((long) rA2 >= (long) rBcons)        goto l_displ1;
        rA1->Val = GMprogn;
        GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (rA2, GInil);
        (rA1 + 1)->Val = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
l_displ1:
        rA1->Val = rA2->Val;
        (rA1 + 1)->Val = (rA2 + 1)->Val;
        {register TableElem aux, mask;
                aux = (TableElem) ((TableElem) rA2 - (TableElem) rBcons);
                aux >>= PTR2_SHIFT;
                mask = 1; mask <<= (aux & ELEM_MASK);
                aux >>= ELEM_SHIFT;
                aux = GIbtbin[aux] & mask;
                if (aux == 0)   { aRet = (rSp++)->Val; goto lRet;}}
        {register TableElem aux, mask;
                aux = (TableElem) ((TableElem) rA1 - (TableElem) rBcons);
                aux >>= PTR2_SHIFT;
                mask = 1; mask <<= (aux & ELEM_MASK);
                aux >>= ELEM_SHIFT;
                GIbtbin[aux] |= mask;}
l_displret:
        {aRet = (rSp++)->Val; goto lRet;}
l_displ2:
        rA2 = GMdisplace;
        {aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

extern Ptr GXplacdl() { /* placdl */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        if ((long) rA1 < (long) GIbcons)        goto l_placd1;
        GIa1 = rA1; GIa2 = rA2; rA2 = llrt_cons (rA2, GInil);
        (rA1 + 1)->Val = rA2;
        rA1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
l_placd1:
        rA2 = GMplacdl;
        {aRet = ((Ptr) GXerrnla); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXsetq() {   /* setq */
   {    register Ptr aRet;
        GIa2 = GIa1;
        if ((long) GIa2 >= (long) GIbcons)      {aRet = ((Ptr) GLfntstd_45); goto lRet;}
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_45() {      /* setq1 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = GIa2;
        (--rSp)->Val = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) GIbcons)        {aRet = ((Ptr) GLfntstd_46); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_47);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_47() {      /* ret_call_evalcar_23 */
   {    register Ptr aRet, rSp, rA2, rA3, rBcons;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3; rBcons = GIbcons;
        rA2 = (rSp++)->Val;
        rA3 = (rSp++)->Val;
        if ((rA3 < GIbvar) || (rA3 >= rBcons))  goto l_setqer1;
        rA3->Val = GIa1;
        if ((long) rA2 >= (long) rBcons)        {aRet = ((Ptr) GLfntstd_45); goto lRet;}
        {aRet = (rSp++)->Val; goto lRet;}
l_setqer1:
        GIa1 = rA3;
        rA2 = GMsetq;
        {aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLfntstd_46() {      /* setqer2 */
   {    register Ptr aRet;
        GIa1 = (Ptr) 2;
        GIa2 = GMsetq;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXfset() {   /* set */
   {    register Ptr aRet, rA1, rA2;
        rA1 = GIa1; rA2 = GIa2;
        if ((rA1 < GIbvar) || (rA1 >= GIbcons)) goto l_seterr;
        rA1->Val = rA2;
        rA1 = rA2;
        {aRet = (GIsp++)->Val; goto lRet;}
l_seterr:
        rA2 = GMfset;
        {aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet: GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXsetqq() {  /* setqq */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBcons = GIbcons;
        rA3 = GInil;
        goto l_setqq3;
l_setqq1:
        rA2 = rA1->Val;
        if ((rA2 < GIbvar) || (rA2 >= rBcons))  goto l_setqqer1;
        rA1 = (rA1 + 1)->Val;
        if ((long) rA1 < (long) rBcons) goto l_setqqer2;
        rA3 = rA1->Val;
        rA2->Val = rA3;
        rA1 = (rA1 + 1)->Val;
l_setqq3:
        if ((long) rA1 >= (long) rBcons)        goto l_setqq1;
        rA1 = rA3;
        {aRet = (rSp++)->Val; goto lRet;}
l_setqqer1:
        rA1 = rA2;
        rA2 = GMsetqq;
        {aRet = ((Ptr) GXerrnva); goto lRet;}
l_setqqer2:
        rA1 = (Ptr) 2;
        rA2 = GMsetqq;
        {aRet = ((Ptr) GXerrwna); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXpsetq() {  /* psetq */
   {    register Ptr aRet;
        GIa4 = (Ptr) 0;
        {aRet = ((Ptr) GLfntstd_48); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_49() {      /* psetq2 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1->Val;
        if ((rA2 < GIbvar) || (rA2 >= GIbcons)) {aRet = ((Ptr) GLfntstd_50); goto lRet;}
        (--rSp)->Val = rA2;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = rA1;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLfntstd_51);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_51() {      /* ret_call_evalcar_24 */
   {    register Ptr aRet, rSp, rA1, rA4;
        rSp = GIsp; rA1 = GIa1; rA4 = GIa4;
        rA4 = (rSp++)->Val;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = rA1;
                rA1 = aux;}
        rA1 = (rA1 + 1)->Val;
        rA4 = (Ptr) ((UFix) ((Fix) (rA4) + (Fix) (1)));
        {aRet = ((Ptr) GLfntstd_48); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa4 = rA4; return (aRet);}}

static Ptr GLfntstd_48() {      /* psetq5 */
   {    register Ptr aRet, rSp, rA1, rA2, rA4;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4;
        if ((long) rA1 >= (long) GIbcons)       {aRet = ((Ptr) GLfntstd_49); goto lRet;}
        goto l_psetq4;
l_psetq3:
        rA1 = (rSp++)->Val;
        rA2 = (rSp++)->Val;
        rA2->Val = rA1;
l_psetq4:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux >= 0)   goto l_psetq3;}
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

static Ptr GLfntstd_50() {      /* psetqerr */
   {    register Ptr aRet;
        GIa1 = GIa2;
        GIa2 = GMpsetq;
        {aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXdeset() {  /* deset */
   {    register Ptr aRet;
        GIa4 = GMdeset;
        {aRet = ((Ptr) GLfntstd_52); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_52() {      /* deset0 */
   {    register Ptr aRet;
        GIsavea4 = GIa4;
        (--GIsp)->Val = ((Ptr) GLfntstd_53);
        {aRet = ((Ptr) GLfntstd_54); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_53() {      /* ret_call_deset4_25 */
   {    register Ptr aRet;
        GIa1 = GMt;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_55() {      /* deset2 */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        if ((long) rA2 < (long) GIbcons)        {aRet = ((Ptr) GLfntstd_56); goto lRet;}
        (--rSp)->Val = (rA1 + 1)->Val;
        (--rSp)->Val = (rA2 + 1)->Val;
        rA1 = rA1->Val;
        rA2 = rA2->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_57);
        {aRet = ((Ptr) GLfntstd_58); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_57() {      /* ret_call_deset5_26 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLfntstd_54); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_54() {      /* deset4 */
   {    register Ptr aRet;
        if (GIa1 == GInil)      { aRet = (GIsp++)->Val; goto lRet;}
        {aRet = ((Ptr) GLfntstd_58); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_58() {      /* deset5 */
   {    register Ptr aRet, rA1, rBcons;
        rA1 = GIa1; rBcons = GIbcons;
        if ((long) rA1 >= (long) rBcons)        {aRet = ((Ptr) GLfntstd_55); goto lRet;}
        if ((rA1 >= GIbvar) && (rA1 < rBcons))  {aRet = ((Ptr) GLfntstd_59); goto lRet;}
        GIa2 = GIsavea4;
        {aRet = ((Ptr) GXerrbpa); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_56() {      /* deset6 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        GIa2 = rA2; rA2 = llrt_cons (rA2, GInil);
        GIa2 = rA2; GIa1 = llrt_cons (GIa1, rA2);
        rA2 = GIsavea4;
        {aRet = ((Ptr) GXerrilb); goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_59() {      /* deset8 */
   {    register Ptr aRet;
        GIa1->Val = GIa2;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXdesetq() { /* desetq */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_60);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_60() {      /* ret_call_evalcar_27 */
   {    register Ptr aRet;
        GIa2 = GIa1;
        GIa1 = (GIsp++)->Val;
        GIa4 = GMdesetq;
        {aRet = ((Ptr) GLfntstd_52); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXcirlist() {        /* cirlist */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil;
        if (rA4 == (Ptr) 0)     goto l_cirlistf;
        rA1 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, rNil);
        rA3 = rA1;
        goto l_cirlist3;
l_cirlist2:
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA2, rA1);
l_cirlist3:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux > 0)    goto l_cirlist2;
                else rA4 = (Ptr) 0;}
        (rA3 + 1)->Val = rA1;
        {aRet = (rSp++)->Val; goto lRet;}
l_cirlistf:
        rA1 = rNil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXnreconc() {        /* nreconc */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBcons = GIbcons;
        goto l_frev2;
l_frev1:
        rA3 = (rA1 + 1)->Val;
        (rA1 + 1)->Val = rA2;
        if ((long) rA3 < (long) rBcons) { aRet = (rSp++)->Val; goto lRet;}
        rA2 = (rA3 + 1)->Val;
        (rA3 + 1)->Val = rA1;
        if ((long) rA2 < (long) rBcons) goto l_frev9;
        rA1 = (rA2 + 1)->Val;
        (rA2 + 1)->Val = rA3;
l_frev2:
        if ((long) rA1 >= (long) rBcons)        goto l_frev1;
        rA1 = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
l_frev9:
        rA1 = rA3;
l_frevret:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXnsubst() { /* nsubst */
   {    register Ptr aRet;
        GIa4 = GIa1;
        {aRet = ((Ptr) GLfntstd_61); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_61() {      /* nsloop */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        if (rSp < GImstack)     {aRet = ((Ptr) GXerrfs); goto lRet;}
        (--rSp)->Val = rA3;
        GIa1 = rA3;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLfntstd_62);
        {aRet = ((Ptr) GLfntstd_8); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_62() {      /* ret_call_savequal_28 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa4 = (rSp++)->Val;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLfntstd_63); goto lRet;}
        GIa1 = GIa4;
        GIa3 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_64() {      /* nsub2 */
   {    register Ptr aRet;
        GIa3 = (GIa3 + 1)->Val;
        if (GIitcount != 0) { llrt_ithard ();}
        {aRet = ((Ptr) GLfntstd_63); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_63() {      /* nsub0 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        if ((long) rA3 < (long) GIbcons)        {aRet = ((Ptr) GLfntstd_65); goto lRet;}
        (--rSp)->Val = rA3;
        rA3 = rA3->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_66);
        {aRet = ((Ptr) GLfntstd_61); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLfntstd_66() {      /* ret_call_nsloop_29 */
   {    register Ptr aRet, rSp, rA3;
        rSp = GIsp; rA3 = GIa3;
        rA3 = (rSp++)->Val;
        rA3->Val = GIa1;
l_nsub1:
        GIa1 = (rA3 + 1)->Val;
        (--rSp)->Val = GIa4;
        (--rSp)->Val = ((Ptr) GLfntstd_67);
        {aRet = ((Ptr) GLfntstd_8); goto lRet;}
  lRet: GIsp = rSp; GIa3 = rA3; return (aRet);}}

static Ptr GLfntstd_67() {      /* ret_call_savequal_30 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLfntstd_64); goto lRet;}
l_nsub3:
        (GIa3 + 1)->Val = GIa4;
        {aRet = ((Ptr) GLfntstd_65); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_65() {      /* nsubret */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXdelq() {   /* delq */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
l_delq0:
        if ((long) rA2 < (long) rBcons) goto l_delqret;
        if (rA2->Val != rA1)    goto l_delq1;
        rA2 = (rA2 + 1)->Val;
        goto l_delq0;
l_delq1:
        rA4 = rA2;
l_delq2:
        rA3 = rA4;
l_delq3:
        rA4 = (rA4 + 1)->Val;
        if ((long) rA4 < (long) rBcons) goto l_delqret;
        if (rA4->Val != rA1)    goto l_delq2;
        (rA3 + 1)->Val = (rA4 + 1)->Val;
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; llrt_ithard ();}
        goto l_delq3;
l_delqret:
        rA1 = rA2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXdelete() { /* delete */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLfntstd_68); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_69() {      /* dele0 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        (--rSp)->Val = GIa1;
        GIa2 = GIa2->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_70);
        {aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_70() {      /* ret_call_equal_31 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLfntstd_71); goto lRet;}
        GIa1 = (rSp++)->Val;
        rA2 = (rSp++)->Val;
        rA2 = (rA2 + 1)->Val;
        {aRet = ((Ptr) GLfntstd_68); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_68() {      /* dele4 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        (--GIsp)->Val = rA2;
        if ((long) rA2 >= (long) GIbcons)       {aRet = ((Ptr) GLfntstd_69); goto lRet;}
        {aRet = ((Ptr) GLfntstd_72); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_72() {      /* deleret */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_71() {      /* dele1 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa2 = (rSp++)->Val;
        GIa4 = rSp->Val;
        {aRet = ((Ptr) GLfntstd_73); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_73() {      /* dele2 */
   {    register Ptr aRet;
        GIa3 = GIa4;
        {aRet = ((Ptr) GLfntstd_74); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_74() {      /* dele3 */
   {    register Ptr aRet, rSp, rA4;
        rSp = GIsp; rA4 = GIa4;
        rA4 = (rA4 + 1)->Val;
        if ((long) rA4 < (long) GIbcons)        {aRet = ((Ptr) GLfntstd_72); goto lRet;}
        GIa1 = rA4->Val;
        (--rSp)->Val = rA4;
        (--rSp)->Val = ((Ptr) GLfntstd_75);
        {aRet = ((Ptr) GLfntstd_8); goto lRet;}
  lRet: GIsp = rSp; GIa4 = rA4; return (aRet);}}

static Ptr GLfntstd_75() {      /* ret_call_savequal_32 */
   {    register Ptr aRet;
        GIa4 = (GIsp++)->Val;
        if (GIa1 == GInil)      {aRet = ((Ptr) GLfntstd_73); goto lRet;}
        (GIa3 + 1)->Val = (GIa4 + 1)->Val;
        if (GIitcount != 0) { llrt_ithard ();}
        {aRet = ((Ptr) GLfntstd_74); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXnreverse() {       /* nreverse */
   {    register Ptr aRet;
        GIa2 = GInil;
        {aRet = ((Ptr) GXnreconc); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXnextl() {  /* nextl */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rBcons = GIbcons;
        rA2 = rA1->Val;
        if ((rA2 < GIbvar) || (rA2 >= rBcons))  goto l_nextlerr;
        (--rSp)->Val = (rA1 + 1)->Val;
        rA3 = rA2->Val;
        if ((long) rA3 >= (long) rBcons)        goto l_nextl4;
        if (rA3 == GInil)       goto l_nextl4;
        rA1 = rA2;
        rA2 = GMnextl;
        {aRet = ((Ptr) GXerrnla); goto lRet;}
l_nextl4:
        rA1 = rA3->Val;
        rA3 = (rA3 + 1)->Val;
        rA2->Val = rA3;
        rA2 = (rSp++)->Val;
        if ((long) rA2 < (long) rBcons) { aRet = (rSp++)->Val; goto lRet;}
        rA2 = rA2->Val;
        if ((rA2 < GIbvar) || (rA2 >= rBcons))  goto l_nextlerr;
        rA2->Val = rA1;
l_nextl9:
        {aRet = (rSp++)->Val; goto lRet;}
l_nextlerr:
        rA1 = rA2;
        rA2 = GMnextl;
        {aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXnewl() {   /* newl */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        (--rSp)->Val = rA1->Val;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_76);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_76() {      /* ret_call_evalcar_33 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        rA2 = (rSp++)->Val;
        if ((rA2 < GIbvar) || (rA2 >= GIbcons)) goto l_newlerr;
        rA3 = rA2->Val;
        if (rA3 == GMundef)     goto l_newlerr1;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_cons (rA1, rA3);
        rA2->Val = rA1;
        {aRet = (rSp++)->Val; goto lRet;}
l_newlerr:
        rA1 = rA2;
        rA2 = GMnewl;
        {aRet = ((Ptr) GXerrnva); goto lRet;}
l_newlerr1:
        rA1 = rA2;
        rA2 = GMnewl;
        {aRet = ((Ptr) GXerrudv); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

extern Ptr GXnewr() {   /* newr */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        rA2 = rA1->Val;
        if ((rA2 < GIbvar) || (rA2 >= GIbcons)) {aRet = ((Ptr) GLfntstd_77); goto lRet;}
        (--rSp)->Val = rA2;
        rA1 = (rA1 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_78);
        rA1 = rA1->Val;
        if (GIevalst != GInil)  {aRet = ((Ptr) GXevalt); goto lRet;}
        {aRet = ((Ptr) GXevalan); goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_78() {      /* ret_call_evalcar_34 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        rA2 = (rSp++)->Val;
        rA3 = rA2->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA1 = llrt_cons (rA1, GInil);
        if ((long) rA3 >= (long) rBcons)        goto l_newr3;
        rA2->Val = rA1;
        { aRet = (rSp++)->Val; goto lRet;}
l_newr3:
        (--rSp)->Val = rA3;
        goto l_newr6;
l_newr4:
        rA3 = rA4;
l_newr6:
        rA4 = (rA3 + 1)->Val;
        if ((long) rA4 >= (long) rBcons)        goto l_newr4;
        (rA3 + 1)->Val = rA1;
        rA1 = (rSp++)->Val;
l_newr9:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

static Ptr GLfntstd_77() {      /* newrerr */
   {    register Ptr aRet;
        GIa1 = GIa2;
        GIa2 = GMnewr;
        {aRet = ((Ptr) GXerrnva); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXnconc1() { /* nconc1 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        GIsp = rSp; GIa2 = rA2; rA2 = llrt_cons (rA2, GInil);
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        GIa4 = (Ptr) 2;
        {aRet = ((Ptr) GXnconc); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

extern Ptr GXnconc() {  /* nconc */
   {    register Ptr aRet, rSp, rA1, rA2, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA4 = GIa4; rBcons = GIbcons;
        if (rA4 == (Ptr) 0)     goto l_fnconcf;
        rA1 = (rSp++)->Val;
        goto l_fnconc4;
l_fnconc1:
        rA2 = rSp->Val;
        if ((long) rA2 >= (long) rBcons)        goto l_fnconc3;
        rA2 = (rSp++)->Val;
        goto l_fnconc4;
l_fnconc2:
        rA2 = (rA2 + 1)->Val;
        if (GIitcount != 0) {GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; llrt_ithard ();}
l_fnconc3:
        if ((long) (rA2 + 1)->Val >= (long) rBcons)     goto l_fnconc2;
        (rA2 + 1)->Val = rA1;
        rA1 = (rSp++)->Val;
l_fnconc4:
        {register Fix aux;
                aux = (Fix) (rA4) - 1;
                rA4 = (Ptr) ((UFix) aux);
                if (aux > 0)    goto l_fnconc1;
                else rA4 = (Ptr) 0;}
        {aRet = (rSp++)->Val; goto lRet;}
l_fnconcf:
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa4 = rA4; return (aRet);}}

extern Ptr GXacons() {  /* acons */
   {    register Ptr aRet, rSp, rA1, rA2;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2;
        (--rSp)->Val = GIa3;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        rA2 = (rSp++)->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; rA1 = llrt_cons (rA1, rA2);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; return (aRet);}}

extern Ptr GXpairlis() {        /* pairlis */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rNil, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rNil = GInil; rBcons = GIbcons;
        rA4 = rNil;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA4 = llrt_cons (rA4, rNil);
        (--rSp)->Val = rA4;
        (--rSp)->Val = rA3;
        goto l_pairlis5;
l_pairlis2:
        rA3 = rA2->Val;
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_cons (rA1->Val, rA3);
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; rA3 = llrt_cons (rA3, rNil);
        (rA4 + 1)->Val = rA3;
        rA4 = rA3;
        rA1 = (rA1 + 1)->Val;
        rA2 = (rA2 + 1)->Val;
l_pairlis5:
        if ((long) rA1 < (long) rBcons) goto l_pairlis8;
        if ((long) rA2 >= (long) rBcons)        goto l_pairlis2;
        if (rA2 == rNil)        goto l_pairlis2;
        rA1 = rA2;
        rA2 = GMpairlis;
        {aRet = ((Ptr) GXerrnla); goto lRet;}
l_pairlis8:
        rA1 = (rSp++)->Val;
        (rA4 + 1)->Val = rA1;
        rA1 = (rSp++)->Val;
        rA1 = (rA1 + 1)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXassq() {   /* assq */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) rA2 < (long) rBcons) goto l_assq3;
        rA3 = rA1;
l_assq1:
        rA1 = rA2->Val;
        if ((long) rA1 < (long) rBcons) goto l_assq2;
        rA4 = rA1->Val;
        if (rA4 == rA3) { aRet = (rSp++)->Val; goto lRet;}
l_assq2:
        rA2 = (rA2 + 1)->Val;
        if ((long) rA2 >= (long) rBcons)        goto l_assq1;
l_assq3:
        rA1 = GInil;
l_assqret:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXassoc() {  /* assoc */
   {    register Ptr aRet;
        if ((long) GIa2 >= (long) GIbcons)      {aRet = ((Ptr) GLfntstd_79); goto lRet;}
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_79() {      /* asso1 */
   {    register Ptr aRet, rSp, rA2, rA3;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
        rA3 = rA2->Val;
        if ((long) rA3 < (long) GIbcons)        {aRet = ((Ptr) GLfntstd_80); goto lRet;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        rA2 = rA3->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLfntstd_81);
        {aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLfntstd_81() {      /* ret_call_equal_35 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLfntstd_82); goto lRet;}
        rSp += (Fix) 1;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLfntstd_80); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_80() {      /* asso5 */
   {    register Ptr aRet, rA2;
        rA2 = GIa2;
        rA2 = (rA2 + 1)->Val;
        if ((long) rA2 >= (long) GIbcons)       {aRet = ((Ptr) GLfntstd_79); goto lRet;}
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet: GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_82() {      /* asso9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXcassq() {  /* cassq */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        goto l_cassq3;
l_cassq1:
        rA3 = rA2->Val;
        if ((long) rA3 < (long) rBcons) goto l_cassq2;
        rA4 = rA3->Val;
        if (rA4 == rA1) goto l_cassq4;
l_cassq2:
        rA2 = (rA2 + 1)->Val;
l_cassq3:
        if ((long) rA2 >= (long) rBcons)        goto l_cassq1;
        rA1 = GInil;
        {aRet = (rSp++)->Val; goto lRet;}
l_cassq4:
        rA1 = (rA3 + 1)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXcassoc() { /* cassoc */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLfntstd_83); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_84() {      /* casso1 */
   {    register Ptr aRet, rSp, rA2, rA3;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
        rA3 = rA2->Val;
        if ((long) rA3 < (long) GIbcons)        {aRet = ((Ptr) GLfntstd_85); goto lRet;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        rA2 = rA3->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLfntstd_86);
        {aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLfntstd_86() {      /* ret_call_equal_36 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLfntstd_87); goto lRet;}
        rSp += (Fix) 1;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLfntstd_85); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_85() {      /* casso5 */
   {    register Ptr aRet;
        GIa2 = (GIa2 + 1)->Val;
        {aRet = ((Ptr) GLfntstd_83); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_83() {      /* casso8 */
   {    register Ptr aRet;
        if ((long) GIa2 >= (long) GIbcons)      {aRet = ((Ptr) GLfntstd_84); goto lRet;}
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_87() {      /* casso9 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        rA1 = (rSp++)->Val;
        rA1 = (rA1 + 1)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

extern Ptr GXrassq() {  /* rassq */
   {    register Ptr aRet, rSp, rA1, rA2, rA3, rA4, rBcons;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3; rA4 = GIa4; rBcons = GIbcons;
        if ((long) rA2 < (long) rBcons) goto l_rassq3;
        rA3 = rA1;
l_rassq1:
        rA1 = rA2->Val;
        if ((long) rA1 < (long) rBcons) goto l_rassq2;
        rA4 = (rA1 + 1)->Val;
        if (rA4 == rA3) { aRet = (rSp++)->Val; goto lRet;}
l_rassq2:
        rA2 = (rA2 + 1)->Val;
        if ((long) rA2 >= (long) rBcons)        goto l_rassq1;
l_rassq3:
        rA1 = GInil;
l_rassqret:
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; GIa4 = rA4; return (aRet);}}

extern Ptr GXrassoc() { /* rassoc */
   {    register Ptr aRet;
        {aRet = ((Ptr) GLfntstd_88); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_89() {      /* rasso1 */
   {    register Ptr aRet, rSp, rA2, rA3;
        rSp = GIsp; rA2 = GIa2; rA3 = GIa3;
        rA3 = rA2->Val;
        if ((long) rA3 < (long) GIbcons)        {aRet = ((Ptr) GLfntstd_90); goto lRet;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        rA2 = (rA3 + 1)->Val;
        (--rSp)->Val = rA3;
        (--rSp)->Val = ((Ptr) GLfntstd_91);
        {aRet = ((Ptr) GXequal); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GLfntstd_91() {      /* ret_call_equal_37 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        if (GIa1 != GInil)      {aRet = ((Ptr) GLfntstd_92); goto lRet;}
        rSp += (Fix) 1;
        GIa2 = (rSp++)->Val;
        GIa1 = (rSp++)->Val;
        {aRet = ((Ptr) GLfntstd_90); goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

static Ptr GLfntstd_90() {      /* rasso5 */
   {    register Ptr aRet;
        GIa2 = (GIa2 + 1)->Val;
        {aRet = ((Ptr) GLfntstd_88); goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_88() {      /* rasso8 */
   {    register Ptr aRet;
        if ((long) GIa2 >= (long) GIbcons)      {aRet = ((Ptr) GLfntstd_89); goto lRet;}
        GIa1 = GInil;
        {aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

static Ptr GLfntstd_92() {      /* rasso9 */
   {    register Ptr aRet, rSp;
        rSp = GIsp;
        GIa1 = (rSp++)->Val;
        rSp += (Fix) 2;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; return (aRet);}}

extern Ptr GXsublis() { /* sublis */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        if ((long) rA2 >= (long) GIbcons)       {aRet = ((Ptr) GLfntstd_93); goto lRet;}
        (--rSp)->Val = rA2;
        rA2 = GIa1;
        GIa1 = rSp->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_94);
        {aRet = ((Ptr) GXassq); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_94() {      /* ret_call_assq_38 */
   {    register Ptr aRet, rSp, rA1;
        rSp = GIsp; rA1 = GIa1;
        if (rA1 == GInil)       goto l_sublis2;
        GIa2 = (rSp++)->Val;
        rA1 = (rA1 + 1)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
l_sublis2:
        rA1 = (rSp++)->Val;
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; return (aRet);}}

static Ptr GLfntstd_93() {      /* sublis5 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        if (GIitcount != 0) {GIsp = rSp; GIa2 = rA2; llrt_ithard ();}
        if (rSp < GImstack)     {aRet = ((Ptr) GXerrfs); goto lRet;}
        (--rSp)->Val = GIa1;
        (--rSp)->Val = rA2;
        rA2 = rA2->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_95);
        {aRet = ((Ptr) GXsublis); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_95() {      /* ret_call_sublis_39 */
   {    register Ptr aRet, rSp, rA2;
        rSp = GIsp; rA2 = GIa2;
        rA2 = (rSp++)->Val;
        {register Ptr aux;
                aux = rSp->Val;
                rSp->Val = GIa1;
                GIa1 = aux;}
        (--rSp)->Val = rA2;
        rA2 = (rA2 + 1)->Val;
        (--rSp)->Val = ((Ptr) GLfntstd_96);
        {aRet = ((Ptr) GXsublis); goto lRet;}
  lRet: GIsp = rSp; GIa2 = rA2; return (aRet);}}

static Ptr GLfntstd_96() {      /* ret_call_sublis_40 */
   {    register Ptr aRet, rSp, rA1, rA2, rA3;
        rSp = GIsp; rA1 = GIa1; rA2 = GIa2; rA3 = GIa3;
        rA3 = (rSp++)->Val;
        rA2 = (rSp++)->Val;
        if (rA1 != (rA3 + 1)->Val)      goto l_sublis8;
        if (rA2 != rA3->Val)    goto l_sublis8;
        rA1 = rA3;
        {aRet = (rSp++)->Val; goto lRet;}
l_sublis8:
        GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; rA1 = llrt_cons (rA2, rA1);
        {aRet = (rSp++)->Val; goto lRet;}
  lRet: GIsp = rSp; GIa1 = rA1; GIa2 = rA2; GIa3 = rA3; return (aRet);}}

static Ptr GDfntstd_97() {      /* trace true */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,0,1,2);
  lRet:  return (aRet);}}

static Ptr GDfntstd_98() {      /* trace false */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,3,1,2);
  lRet:  return (aRet);}}

static Ptr GDfntstd_99() {      /* trace null */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,4,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_100() {     /* trace not */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,6,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_101() {     /* trace atom */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,7,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_102() {     /* trace atomp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,8,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_103() {     /* trace symbolp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,9,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_104() {     /* trace variablep */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,10,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_105() {     /* trace constantp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,11,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_106() {     /* trace vectorp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,12,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_107() {     /* trace stringp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,13,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_108() {     /* trace listp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,14,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_109() {     /* trace nlistp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,15,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_110() {     /* trace consp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,16,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_111() {     /* trace boundp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,17,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_112() {     /* trace eq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,18,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_113() {     /* trace neq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,20,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_114() {     /* trace nequal */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,21,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_115() {     /* trace equal */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,22,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_116() {     /* trace memq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,23,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_117() {     /* trace member */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,24,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_118() {     /* trace tailp */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,25,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_119() {     /* trace last */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,26,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_120() {     /* trace nth */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,27,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_121() {     /* trace nthcdr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,28,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_122() {     /* trace length */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,29,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_123() {     /* trace cons */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,30,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_124() {     /* trace xcons */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,31,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_125() {     /* trace ncons */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,32,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_126() {     /* trace mcons */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,33,1,2);
  lRet:  return (aRet);}}

static Ptr GDfntstd_127() {     /* trace list */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,34,1,2);
  lRet:  return (aRet);}}

static Ptr GDfntstd_128() {     /* trace evlis */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,35,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_129() {     /* trace kwote */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,36,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_130() {     /* trace makelist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,37,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_131() {     /* trace reverse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,38,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_132() {     /* trace append1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,39,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_133() {     /* trace append */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,40,1,2);
  lRet:  return (aRet);}}

static Ptr GDfntstd_134() {     /* trace remq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,41,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_135() {     /* trace remove */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,42,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_136() {     /* trace copylist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,43,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_137() {     /* trace copy */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,44,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_138() {     /* trace firstn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,45,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_139() {     /* trace lastn */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,46,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_140() {     /* trace subst */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,47,1,48);
  lRet:  return (aRet);}}

static Ptr GDfntstd_141() {     /* trace oblist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,49,1,2);
  lRet:  return (aRet);}}

static Ptr GDfntstd_142() {     /* trace boblist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,50,1,2);
  lRet:  return (aRet);}}

static Ptr GDfntstd_143() {     /* trace rplaca */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,51,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_144() {     /* trace rplacd */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,52,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_145() {     /* trace rplac */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,53,1,48);
  lRet:  return (aRet);}}

static Ptr GDfntstd_146() {     /* trace displace */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,54,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_147() {     /* trace placdl */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,55,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_148() {     /* trace setq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,56,1,57);
  lRet:  return (aRet);}}

static Ptr GDfntstd_149() {     /* trace set */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,58,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_150() {     /* trace setqq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,59,1,57);
  lRet:  return (aRet);}}

static Ptr GDfntstd_151() {     /* trace psetq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,60,1,57);
  lRet:  return (aRet);}}

static Ptr GDfntstd_152() {     /* trace deset */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,61,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_153() {     /* trace desetq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,62,1,57);
  lRet:  return (aRet);}}

static Ptr GDfntstd_154() {     /* trace cirlist */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,63,1,2);
  lRet:  return (aRet);}}

static Ptr GDfntstd_155() {     /* trace nreconc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,64,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_156() {     /* trace nsubst */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,65,1,48);
  lRet:  return (aRet);}}

static Ptr GDfntstd_157() {     /* trace delq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,66,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_158() {     /* trace delete */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,67,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_159() {     /* trace nreverse */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,68,1,5);
  lRet:  return (aRet);}}

static Ptr GDfntstd_160() {     /* trace nextl */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,69,1,57);
  lRet:  return (aRet);}}

static Ptr GDfntstd_161() {     /* trace newl */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,70,1,57);
  lRet:  return (aRet);}}

static Ptr GDfntstd_162() {     /* trace newr */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,71,1,57);
  lRet:  return (aRet);}}

static Ptr GDfntstd_163() {     /* trace nconc1 */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,72,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_164() {     /* trace nconc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,73,1,2);
  lRet:  return (aRet);}}

static Ptr GDfntstd_165() {     /* trace acons */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,74,1,48);
  lRet:  return (aRet);}}

static Ptr GDfntstd_166() {     /* trace pairlis */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,75,1,48);
  lRet:  return (aRet);}}

static Ptr GDfntstd_167() {     /* trace assq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,76,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_168() {     /* trace assoc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,77,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_169() {     /* trace cassq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,78,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_170() {     /* trace cassoc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,79,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_171() {     /* trace rassq */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,80,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_172() {     /* trace rassoc */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,81,1,19);
  lRet:  return (aRet);}}

static Ptr GDfntstd_173() {     /* trace sublis */
   {    register Ptr aRet;
        aRet = llrt_jmpd (GYfntstd,82,1,19);
  lRet:  return (aRet);}}

