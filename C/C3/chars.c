/* GELL 15.26: source file for the module: "chars" */
/*             translation done:           "Sat Oct   7 17 20:53:57 " */
/*             peephole-optimize-p:        t */
/*             optimize-local-labels-p:    t */

#include "lelispc.h" 
#include "chars.h" 

static Ptr GLchars_1(void) {	/* startmodule */
   {	register Ptr aRet;
	{aRet = ((Ptr) GXini_chr); goto lRet;}
  lRet:  return (aRet);}}

extern Ptr GXini_chr(void) {	/* ini_chr */
   {	register Ptr aRet;
	{aRet = (GIsp++)->Val; goto lRet;}
  lRet:  return (aRet);}}

