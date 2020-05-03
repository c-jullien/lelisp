/********************************************************/
/*                                                      */
/*              Le-Lisp getglobal on FreeBSD            */
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
char *tname;

/* prefixe char on LINUX */
#define PREFIXE_C '_'

/* doing true C name */
char *llprefixe(char *s) {
        /* symbols came from LL with their true C name */
        tname=(char *)malloc(MAX_LENGTH_NAME);
        tname[0] = PREFIXE_C;
        strcpy((char *)&(tname[1]), s);
        return tname;
}

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
        char buf[ MAX_LENGTH_NAME ];

        /* try with user name */

        res=igetgloba(strg,lelispbin);

        if (res == 0) {
                if ( strg[0] == '_' ) {
                        /* if user name with '_', try without '_' */

                        res=igetgloba(&strg[1],lelispbin);

                } else {
                        /* if user name without '_', try with '_' */

                        strcpy( buf, "_" );
                        strcat( buf, strg );
                        res=igetgloba(buf,lelispbin);

                }
        }

        return res;
}

int
llgetinlib (char *strg, char *lib, void *vect, int args) {
        int res;
        (void)vect;
        (void)args;

        res = igetgloba(strg,lib);

        if (res == 0)
                if (strg[0] == '_') {
                        res=igetgloba(++strg,lib);

                }
        return res;
}

static  void *dlhandle = (void *)NULL;

#if     defined( _FIND_ANY_LIB )
/*
 *      A  NULL  dlhandle means the main program so it's no necessary
 *      to find a dummy library to do the job.
 */

void    *
findanylib()
{
        DIR             *dirp;
        struct  dirent  *dp;

        if( !(dirp = opendir( "/usr/lib" )) && !(dirp = opendir( "/lib" )) )
                return( NULL );

        while( (dp = readdir( dirp )) != NULL )
                if( !strncmp(dp->d_name,"lib",3) && strstr(dp->d_name,".so") )
                        if( (dlhandle = (void*)dlopen(dp->d_name,RTLD_NOW)) ) {
                                (void)closedir( dirp );
                                return( dlhandle );
                        }
        (void)closedir( dirp );
        return( NULL );
}
#endif

int
igetgloba(char *strg, char *lib) {
#if     defined( _FIND_A_LIB )
        if( !dlhandle ) {
                dlhandle = findanylib();

                if( !dlhandle ) {
                    fprintf( stderr,
                             "Le-Lisp: getglobal cannot open core\n\r" );
                    return( 0 );
                  }
        }
#endif

        (void)lib;
        return( (int)dlsym( dlhandle, strg ) );
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

#if defined( _NO_NLIST_BUG )
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
            name = llprefixe(name);

            NLISTNAME(elems, i, name);
            elem[i].n_value = 0;
            i++;

    }

    NLISTNAME(elems, i, NULL);
    elem[i].n_value = 0;

    nlist (lelispbin, elems);

    i = 0;
    for (courant = list;
         courant != nil;
         courant = (struct lisp_cons *) courant->cdr ) {
            courant->car = (struct lisp_string **) elems[i].n_value;
            free( GET_NLISTNAME(elems,i) );
            i++;
    }

    free(elems);
    return 0;
}
#else
int
llmgetglo(struct lisp_cons *list, struct lisp_cons *nil) {
    int i;
    struct lisp_cons *courant;
    char *name;

    i = 0;

    for (courant = list;
         courant != nil;
         courant = (struct lisp_cons *) courant->cdr ) {
            name = &((*(courant->car))->chars);
            courant->car = (struct lisp_string **)getgloba(name);
            i++;
    }

    return 0;
}
#endif

long
ll_get_lispcall(void) {
        return ((long)lispcall);
}

long
ll_get_getsym(void) {
        return ((long)getsym);
}

long
ll_get_pushargvoid(void) {
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
        (void)lib;

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
