/********************************************************/
/*                                                      */
/*              Le-Lisp getglobal on SOLARIS386         */
/*                                                      */
/********************************************************/

/* includes */

#include "Machine.h"
#include "lelisp.h"

/* defined in lelisp.c */
extern char lelispbin[];

/* getgloba
   =========
   return symbol value in symbol table of the Le-lisp process
*/

#if     defined( _OLD_A_OUT )

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

#endif /* _OLD_A_OUT */

/* max length of a name in symbol table */
#define MAX_LENGTH_NAME 256

/* pointer on find name in symbol table */
char *tname;

/* prefixe char on SOLARIS386 */
#define PREFIXE_C '_'

/* doing true C name */
char *llprefixe(s)
char *s;
{
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

int getgloba (strg)
char *strg;
{
        int res;
        char *s;
        char buf[ MAX_LENGTH_NAME ];

        /* try with user name */

        res=igetgloba(strg,lelispbin);

        if ( res == 0 )
                if ( strg[0] == '_' ) {
                        /* if user name with '_', try without '_' */

                        res=igetgloba(&strg[1],lelispbin);

                } else {
                        /* if user name without '_', try with '_' */

                        strcpy( buf, "_" );
                        strcat( buf, strg );
                        res=igetgloba(buf,lelispbin);

                }

        return res;
}

int llgetinlib (strg, lib, vect, args)
char *strg;
char *lib;
void *vect;
int   args;
{
        int res;
        char *s;

        res=igetgloba(strg,lib);

        if ( res == 0 )
                if ( strg[0] == '_' ) {

                        res=igetgloba(++strg,lib);

                }
        return res;
}

#if     defined( _OLD_A_OUT )
int igetgloba (strg,lib)
char *strg, *lib;
{
        NLISTNAME(elem, 0, strg);

        NLISTNAME(elem, 1, NULL);
        elem[0].n_value = 0;
        nlist(lib, elem);
        return(elem[0].n_value);
}
#else
static  void *dlhandle = RTLD_SELF; // (void *)NULL;

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

int igetgloba (strg,lib)
char *strg, *lib;
{
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

        return( (int)dlsym( dlhandle, strg ) );
}
#endif

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
llmgetglo (list, nil)
    struct lisp_cons *list, *nil; {
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
llmgetglo (list, nil)
    struct lisp_cons *list, *nil; {
    int length, i;
    struct lisp_cons *courant;
    struct nlist *elems;
    char *name;
    length = 0;

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

long ll_get_lispcall()
{
        return ((long)lispcall);
}

long ll_get_getsym()
{
        return ((long)getsym);
}

long ll_get_pusharg()
{
        return((long)pusharg);
}

long ll_get_pushargd()
{
        return((long)pushargd);
}

long ll_get_lfix_to_cfix()
{
        return ((long)lfix_to_cfix);
}

long ll_get_cfix_to_lfix()
{
        return((long)cfix_to_lfix);
}

long ll_get_lfloat_to_cfloat()
{
        return ((long)lfloat_to_cfloat);
}

long ll_get_cfloat_to_lfloat()
{
        return ((long)cfloat_to_lfloat);
}

long llunixgetinlib (strg, handle, lib)
char *strg;
void *handle;
char *lib;
{
        long adr;
        adr = (long)dlsym(handle, strg);
        if (!adr) {
                if ( strg[0] == '_' )
                        adr = (long)dlsym(handle, ++strg);
        }
        return adr;
}

long ll_add_shared_lib (lib)
char *lib;
{
        long adr;
        adr = (long)dlopen(lib, RTLD_LAZY );
        return adr;
}

long ll_rem_shared_lib (handle)
void *handle;
{
        long adr;
        adr = (long)dlclose(handle);
        return adr;
}
