#if     !defined(lint)
static  char *sccsid = "@(#)getglobal.c (c) ELIGIS, C. Jullien 2003/05/25";
#endif

/*
 *      getglobal.c :   
 */


/****************************************************/
/*                                                  */
/*              le getglobal Le-Lisp sur MSDOS      */
/*                                                  */
/****************************************************/

/* les includes */
#include "Machine.h"
#include "lelisp.h"

/* points d entree definis dans lelisp.c */
extern char lelispbin[];

struct  nlist {/* pour getglobal */
        long int        adr;
        char            *n_name;
};

/* getgloba
   =========
   retourne la valeur associee a un symbole
   dans la table des symboles de l image Le-Lisp.
*/

extern struct nlist elem[];

/* cas particulier du _ qui reste present dans
        de nombreux fichiers Lisp:
        - on a essaye d abord en respectant le protocole du Compilo C;

        (c est a dire en ajoutant systematiquement '_'
          devant le symbole)

        - puis on reessaye si necessaire, sans
          l eventuel _ qu'aurait ajouter l'utilisateur;

        - puis on essaye finalement sans rien ajouter du tout!

        priorite est donc donnee aux
             (defextern foo ...) sur les
             (defextern _foo ...)

        On realise ce 2eme essai, en C, le cas du GETGLOBAL simple,
        alors que le 2eme essai dans le cas  du GETGLOBAL-MULTIPLE
        est traite en lisp (cf callext.ll).

        le 3eme essai n est traite que dans le cas du GETGLOBAL simple.

*/

long
getgloba(char *name) {
        int     i;

        /* Cas du (defextern foo ...) */
        for (i = 0; elem[i].n_name != NULL ; i++) {
                if ((*(elem[i].n_name) == '_') &&
                    !strcmp((elem[i].n_name) + 1, name))
                        return(elem[i].adr);
        }


        /* Cas du (defextern _foo ...) */
        if (name[0] == '_')
                for (i = 0; elem[i].n_name != NULL ; i++)
                        if (!strcmp(elem[i].n_name, &name[1]))
                                return(elem[i].adr);

        /* On essaie tel quel. */
        for (i = 0; elem[i].n_name != NULL ; i++)
                if (!strcmp(elem[i].n_name, name))
                        return(elem[i].adr);

        return(0L);
}

/* le getglobal multiple */
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
        int              length;
        struct lisp_cons *courant;
        struct nlist     *elems;
        char             *name;

        length = 0;
        for (courant = list;
             courant != nil;
             courant = (struct lisp_cons *)courant->cdr)
                length++;
        elems = (struct nlist *)malloc((length+1) * sizeof(struct nlist));

        for (courant = list;
             courant != nil;
             courant = (struct lisp_cons *)courant->cdr) {
                name = &((*(courant->car))->chars);
                courant->car = (struct lisp_string **)(size_t)getgloba(name);
        }

        free(elems);
        return(0);
}

long
ll_get_lispcall(void) {
        return ((long)(size_t)lispcall);
}

long
ll_get_getsym(void) {
        return ((long)(size_t)getsym);
}

long
ll_get_pusharg(void) {
        return ((long)(size_t)pusharg);
}

long
ll_get_pushargd(void) {
        return ((long)(size_t)pushargd);
}

long
ll_get_lfix_to_cfix(void) {
        return ((long)(size_t)lfix_to_cfix);
}

long
ll_get_cfix_to_lfix(void) {
        return ((long)(size_t)cfix_to_lfix);
}

long
ll_get_lfloat_to_cfloat(void) {
        return ((long)(size_t)lfloat_to_cfloat);
}

long
ll_get_cfloat_to_lfloat(void) {
        return ((long)(size_t)cfloat_to_lfloat);
}

long
llunixgetinlib(char *strg, void *handle, char *lib) {
        (void)strg;
        (void)lib;
        (void)handle;
        return(0L);
}

long
ll_add_shared_lib(char *lib) {
        (void)lib;
        return(0L);
}

long
ll_rem_shared_lib(void *handle) {
        (void)handle;
        return(0L);
}
