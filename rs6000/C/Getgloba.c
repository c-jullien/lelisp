/********************************************************/
/*	 					        */
/*		Le-Lisp getglobal on RS6000             */
/*	 					        */
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

/* macro NLISTNAME set the n_name filed of one
   element in symbol table
   macro GET_NLISTNAME get this n_name filed
   machine-dependent ... */

struct nlist elem[3];

#define NLISTNAME(e,i,s) e[i]._n._n_name = s
#define GET_NLISTNAME(e,i) e[i]._n._n_name

/* le defaut */
#ifndef NLISTNAME
#define NLISTNAME(e,i,s) e[i].n_name = s
#endif /* NLISTNAME */
#ifndef GET_NLISTNAME
#define GET_NLISTNAME(e,i) e[i].n_name
#endif /* GET_NLISTNAME */

int begin_text = 0;
extern ll_break();

/* ajust symbols adress */
begin_text_init() {
	begin_text = *((int *)ll_break) - getgloba("ll_break");
}

/* max length of a name in symbol table */
#define MAX_LENGTH_NAME 256

/* a tempo string for nlist */
static char strgtempo[MAX_LENGTH_NAME];

/* pointer on find name in symbol table */
char *tname;

/* prefixe char on RS6000 */
#define PREFIXE_C '.'

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

	( '.' in first char of symbol )

	- then try again if necessary without '_' from user

	- at the end, we try with nothing

	so, priority is,
	     (defextern foo ...)
	     (defextern _foo ...)

	Second try, In C for simple GETGLOBAL.
        Second try, In lisp for MULTIPLE-GETGLOBAL (cf callext.ll).

	third try only if simple GETGLOBAL.

*/

int getgloba (strg)
char *strg;
{
	int res;
	char *s;

     	/* try with user name + C prefix */
	s = llprefixe (strg);
	res = igetgloba (s,lelispbin);
	free(s);

	if ( res == 0 )
		if ( strg[0] == '_' ) {
			/* if user name with '_', try without '_' */

		        /* and why dont forget C prefix */
			s = llprefixe (++strg);
			res = igetgloba (s,lelispbin);
			free(s);

		}

	if ( res == 0 )
		/* if not find, try whith user name without C prefix */
		res = igetgloba(strg,lelispbin);

	return res;
}

int llgetinlib (strg, lib)
char *strg, *lib;
{
	int res;
	char *s;

	s = llprefixe (strg);
	res = igetgloba (s,lib);
	free(s);

	if ( res == 0 )
		if ( strg[0] == '_' ) {

			s = llprefixe (++strg);
			res = igetgloba (s,lib);
			free(s);

		}
	return res;
}

int igetgloba (strg,lib)
char *strg, *lib;
{

	strcpy(strgtempo , strg);
	strgtempo[strlen(strgtempo) - 1] = 255;
	NLISTNAME(elem, 0, strgtempo);
	NLISTNAME(elem, 1, strg);
	NLISTNAME(elem, 2, "");
        nlist(lib, elem);
	if (elem[1].n_value == 0)
		return 0;
	else

		return(elem[1].n_value + begin_text);

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

	    i++;

    }

    NLISTNAME(elems, i, "");

    nlist (lelispbin, elems);

    i = 0;
    for (courant = list;
	 courant != nil;
         courant = (struct lisp_cons *) courant->cdr ) {

	    if (elems[i].n_value == 0)
		    courant->car = 0;
	    else
		    courant->car = (struct lisp_string **)
			    (elems[i].n_value + begin_text);

	    free( GET_NLISTNAME(elems,i) );

	    i++;
    }

    free(elems);
    return 0;
}

LL_OBJECT *Clispcall (type, narg, symbol)
long type, narg;
struct LL_SYMBOL *symbol;
{
	return ( LL_OBJECT *)(lispcall (type, narg, symbol));
}

struct LL_SYMBOL *Cgetsym(pname)
char *pname;
{
	return (getsym(pname));
}

void Cpusharg(type, arg)
long type;
char *arg;
{
	pusharg(type,arg);
}

void Cpushargd(type, arg)
long type;
double arg;
{
	pushargd(type,arg);
}

double Clfloat_to_cfloat(lfloat)
LL_OBJECT lfloat;
{
	double fret;
	fret = lfloat_to_cfloat(lfloat);
 	return (fret);
}

LL_OBJECT Ccfloat_to_lfloat(cfloat)
double cfloat;
{
	LL_OBJECT ret;
	ret = cfloat_to_lfloat(cfloat);
	return (ret);
}

long ll_get_lispcall()
{
	return ((long)Clispcall);
}

long ll_get_getsym()
{
	return ((long)Cgetsym);
}

long ll_get_pusharg()
{
	return((long)Cpusharg);
}

long ll_get_pushargd()
{
	return((long)Cpushargd);
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
	return ((long)Clfloat_to_cfloat);
}

long ll_get_cfloat_to_lfloat()
{
	return ((long)Ccfloat_to_lfloat);
}

void InvokeIndirectFunction(adr,
			    a1, a2, a3, a4 , a5, a6, a7, a8, a9,
			    a10, a11, a12, a13, a14, a15, a16, a17, a18,
			    a19, a20, a21, a22, a23, a24, a25, a26, a27,
			    a28, a29, a30, a31, a32,
			    a33, a34, a35, a36, a37, a38, a39, a40, a41,
			    a42, a43, a44, a45, a46, a47, a48, a49, a50,
			    a51, a52, a53, a54, a55, a56, a57, a58, a59,
			    a60, a61, a62, a63, a64)
long (*adr) ();
char *a1, *a2, *a3, *a4 , *a5, *a6, *a7, *a8, *a9;
char *a10, *a11, *a12, *a13, *a14, *a15, *a16, *a17, *a18;
char *a19, *a20, *a21, *a22, *a23, *a24, *a25, *a26, *a27;
char *a28, *a29, *a30, *a31, *a32;
char *a33, *a34, *a35, *a36, *a37, *a38, *a39, *a40, *a41;
char *a42, *a43, *a44, *a45, *a46, *a47, *a48, *a49, *a50;
char *a51, *a52, *a53, *a54, *a55, *a56, *a57, *a58, *a59;
char *a60, *a61, *a62, *a63, *a64;
{
	(adr)(a1, a2, a3, a4 , a5, a6, a7, a8, a9,
		 a10, a11, a12, a13, a14, a15, a16, a17, a18,
		 a19, a20, a21, a22, a23, a24, a25, a26, a27,
		 a28, a29, a30, a31, a32,
		 a33, a34, a35, a36, a37, a38, a39, a40, a41,
		 a42, a43, a44, a45, a46, a47, a48, a49, a50,
		 a51, a52, a53, a54, a55, a56, a57, a58, a59,
		 a60, a61, a62, a63, a64);
}

typedef  struct nlist  n_list;

typedef struct
{
	long handle;
	long entry;
} _handle_entry;

static ll_free_entries = 256;

static _handle_entry  handle_entry[256];

static long ll_put_entry(handle,entry,lib)
long handle, entry;
char *lib;
{
	long i;
	i = 0;
	while ( i < 256) {
		if (handle_entry[i].handle == 0) {
			handle_entry[i].handle = handle;
			handle_entry[i].entry  = entry;
			ll_free_entries--;
			i = 256 + 1;
		}
		i++;
	}
	if (i == 256) {
		fprintf(stderr,
			"%s: too much libraries (max = %d) %s\r\n",
			LLSYSNAME, 256, lib);
		return(-1);
	}
	return(entry);
}

static long ll_get_entry(handle)
long handle;
{
	long i;
	long entry;
	i = 0;
	entry = 0;
	while ( i < 256) {
		if (handle_entry[i].handle == handle) {
			entry = handle_entry[i].entry;
			i = 256 + 1;
		}
		i++;
	}
	return(entry);
}

static long ll_del_entry(handle)
long handle;
{
	long i;
	i = 0;
	while ( i < 256) {
		if (handle_entry[i].handle == handle) {
			handle_entry[i].entry = 0;
			handle_entry[i].handle = 0;
			ll_free_entries++;
			return(handle);
		}
		i++;
	}
	return(0);
}

static long ll_shared_entry(lib, handle)
char *lib;
long handle;
{

	n_list *nlptr;
	struct filehdr f;
	struct aouthdr a;
	struct scnhdr  s;
	struct ldsym   d;
	struct ldhdr  hh;
	long fd;
        long i ;
	long entry;

	entry = ll_get_entry(handle);
	if ( entry != 0) {
		return (entry);
	}
	fd=open(lib, 0);
	/* point at 0 */
	lseek(fd,0,0);
	/* read filehd struct */
	read(fd, &f, sizeof (struct filehdr));
	/* point on aouthdr struct */
	lseek(fd , sizeof (struct filehdr),0);
        /* read aouthd structure */
	read(fd, &a, sizeof (struct aouthdr));
	/* point on loader section */
	i = 0;
	while ( i < f.f_nscns) {
		read (fd, &s, sizeof(struct scnhdr));
		if (!(strcmp (s.s_name, ".loader")))
			i = f.f_nscns;
		i++;
	}
	lseek(fd , s.s_scnptr, 0);
        /* read ldhdr struct */
	read(fd, &hh, sizeof (struct ldhdr));
	i = 0;
	while ( i < hh.l_nsyms) {
		read (fd, &d, sizeof (struct ldsym));
		if (d.l_value == a.entry)
			i = hh.l_nsyms;
		i++;
	}
	nlptr = (n_list *) calloc(2, sizeof (n_list));
	nlptr[0]._n._n_name = d.l_name;
	nlptr[1]._n._n_name = "";
	if (nlist (lib, nlptr) == -1) {
		perror("nlist");
		return(0);
	}
	entry = nlptr[0].n_value;
	close(fd);
	free(nlptr);
	entry = ll_put_entry(handle, entry, lib);
	return (entry);
}

long llunixgetinlib (strg, handle, lib)
char *strg;
long handle;
char *lib;
{
	int (*code)();
	long adr;
	long entry_offset;
	strcpy(strgtempo , strg);
	strgtempo[strlen(strgtempo) - 1] = 255;
	adr = 0;
	NLISTNAME(elem, 0, strgtempo);
	NLISTNAME(elem, 1, strg);
	NLISTNAME(elem, 2, "");
	if (nlist (lib, elem) == -1) {
		perror("nlist");
		return(0);
	}
	if ((elem[1].n_value == 0) && (strg[0] == '_')) {
		NLISTNAME(elem, 0, &strgtempo[1]);
		NLISTNAME(elem, 1, ++strg);
		NLISTNAME(elem, 2, "");
		if (nlist (lib, elem) == -1) {
			perror("nlist");
			return(0);
		}
	}
	if (elem[1].n_value == 0)
		return (0);
	adr = handle;
	entry_offset = ll_shared_entry(lib, handle);
        adr -= entry_offset;
	adr += elem[1].n_value;
	code = (int (*)())adr;
	if (entry_offset == -1)
		return ((long) 0);
	return ((long)code);
}

long ll_add_shared_lib (lib)
char *lib;
{
	long handle;
	if (ll_free_entries == 0) {
		fprintf(stderr,
			"%s: too much libraries (max = %d) %s\r\n",
			LLSYSNAME, 256, lib);
		return(0);
	}
	handle = (long)load(lib, 0 , "" );
	if (handle) ll_shared_entry(lib, handle);
	return handle;
}

long ll_rem_shared_lib (handle)
void *handle;
{
	long adr;
	adr = (long)unload(handle);
	ll_del_entry(handle);
	return adr;
}

