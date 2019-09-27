/* GELL 15.26: source file for the module: "extend" */
/*             translation done:           "Sat Oct   7 17 20:53:57 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "extend.h" 

static Ptr GLextend_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_ext); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_ext(void) {	/* ini_ext */
   {	register Ptr aRet;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

