/********************************************************/
/*                                                      */
/*              Le-Lisp getglobal on SOLARIS            */
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

/* macro NLISTNAME set the n_name filed of one
   element in symbol table
   macro GET_NLISTNAME get this n_name filed
   machine-dependent ... */

struct nlist elem[2];

/* le defaut */
#ifndef NLISTNAME
#define NLISTNAME(e,i,s) e[i].n_name = s
#endif /* NLISTNAME */
#ifndef GET_NLISTNAME
#define GET_NLISTNAME(e,i) e[i].n_name
#endif /* GET_NLISTNAME */

/* case of '_' always in some Lisp files:
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

        /* try with user name */
        res=igetgloba(strg,lelispbin);

        if (res == 0)
                if (strg[0] == '_') {
                        /* if user name with '_', try without '_' */
                        res=igetgloba(++strg,lelispbin);
                }

        return res;
}

int
llgetinlib(char *strg, char *lib) {
        int res;

        res=igetgloba(strg,lib);

        if (res == 0)
                if (strg[0] == '_') {
                        res=igetgloba(++strg,lib);
                }
        return res;
}

int
igetgloba(char *strg, char *lib) {
        NLISTNAME(elem, 0, strg);

        NLISTNAME(elem, 1, "");
        nlist(lib, elem);
        return(elem[0].n_value);

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
    int length, i;
    struct lisp_cons *courant;
    struct nlist *elems;
    char *name;
    length = 0;
    for (courant = list;
         courant != nil;
         courant = (struct lisp_cons *)courant->cdr )
            length++;

    elems = (struct nlist *) malloc ((length+1) * sizeof(struct nlist));
    i = 0;
    for (courant = list;
         courant != nil;
         courant = (struct lisp_cons *) courant->cdr ) {
            name = &((*(courant->car))->chars);

            NLISTNAME(elems, i, name);

            i++;

    }

    NLISTNAME(elems, i, "");

    nlist (lelispbin, elems);

    i = 0;
    for (courant = list;
         courant != nil;
         courant = (struct lisp_cons *) courant->cdr ) {

            courant->car = (struct lisp_string **) elems[i].n_value;

            i++;
    }

    free(elems);
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

long
ll_get_pushargd(void) {
        return((long)pushargd);
}

long
ll_get_lfix_to_cfix(void) {
        return ((long)lfix_to_cfix);
}

long
ll_get_cfix_to_lfix(void) {
        return((long)cfix_to_lfix);
}

long
ll_get_lfloat_to_cfloat(void) {
        return ((long)lfloat_to_cfloat);
}

long
ll_get_cfloat_to_lfloat(void) {
        return ((long)cfloat_to_lfloat);
}

long
llunixgetinlib(char *strg, void *handle, char *lib) {
        long adr;
        adr = (long)dlsym(handle, strg);
        if (!adr) {
                if ( strg[0] == '_' )
                        adr = (long)dlsym(handle, ++strg);
        }
        return adr;
}

long
ll_add_shared_lib(char *lib) {
        long adr;
        adr = (long)dlopen(lib, RTLD_LAZY );
        return adr;
}

long
ll_rem_shared_lib(void *handle) {
        long adr;
        adr = (long)dlclose(handle);
        return adr;
}
