/********************************************************/
/*                                                      */
/*              Le-Lisp getglobal                       */
/*                                                      */
/********************************************************/

/* includes */

#include "Machine.h"
#include "lelisp.h"

/* defined in lelisp.c */
extern char lelispbin[];
extern int igetgloba(char *strg, char *lib);

/* getgloba
   =========
   return symbol value in symbol table of the Le-lisp process
*/

/* max length of a name in symbol table */
#define MAX_LENGTH_NAME 256

/* pointer on find name in symbol table */
static char *tname;

#define PREFIXE_C '_'

/* doing true C name */
char *
llprefixe(char *s) {
        /* symbols came from LL with their true C name */
        tname = (char *)malloc(MAX_LENGTH_NAME);
        tname[0] = PREFIXE_C;
        (void)strcpy((char *)&(tname[1]), s);
        return tname;
}

/*
  case of '_' always in some Lisp files:
        - we try the C Compiler Protocole ;

        - then try again if necessary without '_' from user

        so, priority is,
             (defextern foo ...)
             (defextern _foo ...)

        Second try, In C for simple GETGLOBAL.
        Second try, In lisp for MULTIPLE-GETGLOBAL (cf callext.ll).

*/

int
getgloba(char *strg) {
        int res;
        char buf[ MAX_LENGTH_NAME ];

        /* try with user name */

        res = igetgloba(strg, lelispbin);

        if (res == 0) {
                if (strg[0] == '_') {
                        /* if user name with '_', try without '_' */
                        res = igetgloba(&strg[1], lelispbin);
                } else {
                        /* if user name without '_', try with '_' */
                        (void)strcpy(buf, "_");
                        (void)strcat(buf, strg);
                        res = igetgloba(buf, lelispbin);
                }
        }

        return res;
}

int
llgetinlib(char *strg, char *lib, void *vect, int args) {
        int res;

        res = igetgloba(strg, lib);

        if (res == 0) {
                if (strg[0] == '_') {
                        res = igetgloba(++strg, lib);
                }
        }

        return res;
}

#if defined(RTLD_DEFAULT)
static  void *dlhandle = RTLD_DEFAULT;
#else
static  void *dlhandle = (void *)NULL;
#endif

int
igetgloba(char *strg, char *lib) {
        return((int)(size_t)dlsym(dlhandle, strg));
}

/* multiple getglobal */
struct lisp_string {
       char *pad1;
       char *pad2;
       char chars;
};

struct lisp_cons {
       struct lisp_string **car;
       struct lisp_cons *cdr;
};

int
llmgetglo(struct lisp_cons *list, struct lisp_cons *nil) {
    int i;
    struct lisp_cons *courant;
    char *name;

    i = 0;

    for (courant = list;
         courant != nil;
         courant = (struct lisp_cons *) (size_t)courant->cdr) {
            name = &((*(courant->car))->chars);
            courant->car = (struct lisp_string **)(size_t)getgloba(name);
            i++;
    }

    return 0;
}

long
ll_get_lispcall(void) {
        return ((long)lispcall);
}

long
ll_get_getsym(void) {
        return ((long)getsym);
}

long
ll_get_pusharg(void) {
        return((long)pusharg);
}

/* BPS ou est pushargd ?? et qui utilise ll_get_pushargd ??
long ll_get_pushargd(void) {
        return((long)pushargd);
}
*/

long
ll_get_lfix_to_cfix(void) {
        return ((long)lfix_to_cfix);
}

long
ll_get_cfix_to_lfix(void) {
        return((long)cfix_to_lfix);
}

/* BPS ou est lfloat_to_cfloat ?? et qui utilise ll_get_lfloat_to_cfloat ??
long
ll_get_lfloat_to_cfloat(void)
{
        return ((long)lfloat_to_cfloat);
}

long ll_get_cfloat_to_lfloat(void)
{
        return ((long)cfloat_to_lfloat);
}
*/

long
llunixgetinlib(char *strg, void *handle, char *lib) {
        long adr;
        adr = (long)dlsym(handle, strg);
        if (!adr) {
                if (strg[0] == '_')
                        adr = (long)dlsym(handle, ++strg);
        }
        return adr;
}

long
ll_add_shared_lib(char *lib) {
        long adr;
        adr = (long)dlopen(lib, RTLD_LAZY);
        return adr;
}

long
ll_rem_shared_lib (void *handle) {
        long adr;
        adr = (long)dlclose(handle);
        return adr;
}
