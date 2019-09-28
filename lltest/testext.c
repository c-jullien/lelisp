#include <math.h>
#include "../common/lelisp.h"
#include "Machine.h"

#if defined( TEXTLIB )
struct LL_SYMBOL *(*dgetsym)(char *);
void (*dpusharg)(long, ...);
void (*dpushargd)(long, double);
LL_OBJECT (*dlispcall)(long, long, struct LL_SYMBOL *);
long (*dlfix_to_cfix)(LL_OBJECT);
LL_OBJECT (*dcfix_to_lfix)(long);
double (*dlfloat_to_cfloat)(LL_OBJECT);
LL_OBJECT (*dcfloat_to_lfloat)(double);

#define getsym(a) (dgetsym)(a)
#define pusharg(a , b) (dpusharg)(a, b)
#define pushargd(a, b) (dpushargd)(a, b)
#define lispcall(a, b, c) (dlispcall)(a, b, c)
#define lfix_to_cfix(a) (dlfix_to_cfix)(a)
#define cfix_to_lfix(a) (dcfix_to_lfix)( a)
#define lfloat_to_cfloat(a) (dlfloat_to_cfloat)(a)
#define cfloat_to_lfloat(a) (dcfloat_to_lfloat)(a)

void extern_init_lispcall (pgetsym,ppusharg,ppushargd,plispcall,
                           plfix_to_cfix,pcfix_to_lfix,
                           plfloat_to_cfloat,pcfloat_to_lfloat)

struct LL_SYMBOL *(*pgetsym)();
void (*ppusharg)(),(*ppushargd)();
LL_OBJECT (*plispcall)();
long (*plfix_to_cfix)();
LL_OBJECT (*pcfix_to_lfix)();
double (*plfloat_to_cfloat)();
LL_OBJECT (*pcfloat_to_lfloat)();
{
        dgetsym = (struct LL_SYMBOL * (*)(char *))pgetsym;
        dpusharg = (void (*)(long, ...))ppusharg;
        dpushargd = (void (*)(long, double))ppushargd;
        dlispcall = (LL_OBJECT (*)(long, long, struct LL_SYMBOL *))plispcall;
        dlfix_to_cfix = (long (*)(LL_OBJECT))plfix_to_cfix;
        dcfix_to_lfix = (LL_OBJECT (*)(long))pcfix_to_lfix;
        dlfloat_to_cfloat = (double (*)(LL_OBJECT))plfloat_to_cfloat;
        dcfloat_to_lfloat = (LL_OBJECT (*)(double))pcfloat_to_lfloat;
}
#else

void extern_init_lispcall (pgetsym,ppusharg,ppushargd,plispcall,
                           plfix_to_cfix,pcfix_to_lfix,
                           plfloat_to_cfloat,pcfloat_to_lfloat)
int *pgetsym,*ppusharg,*ppushargd,*plispcall;
int *plfix_to_cfix,*pcfix_to_lfix,*plfloat_to_cfloat,*pcfloat_to_lfloat;
{}

#endif /* TESTLIB */

long
tlno () {
        return 0;
}

long 
tlfix (x) long x; {
        return x + x;
}

long
tlfloat (x) double x; {
        return x + 1.;
}

long
tlfloat_ (x) double x; {
        return x - 1.;
}

long
tlfloat_1 (x) double x; {
        return x + x;
}

long
tlfloat_2 (x,y) double x,y; {
        return x + y;
}

long
tlfloat_3 (x,y,z) double x,y,z; {
        return x + y +z;
}


long
tlfloat_4 (x,y,z,f) double x,y,z,f; {
        return x + y +z+f;
}

long
tlstring (x) char *x; {
        if (*x) *x = 'C';
        return strlen(x);
}

long
tlstring3 (x, y, z) char *x,*y,*z; {
        return strlen(x)+strlen(y)+strlen(z);
}

long
tlvector (x, l) long x[], l; {
        if (l >= 3) x[2] = x[1];
        return x[0];
}

long
tlt (x) char **x; {
        return (long) *x;
}

long
tlexternal (x) char **x; {
        return (long) *x;
}

long tlfix_cfix(x) LL_OBJECT x; {
        return (long)(lfix_to_cfix(x) + 1);
}

char *tcfix_lfix(x) long x; {
        return (char *)(cfix_to_lfix(x + 1));
}

/* Verify that functions with many arguments pass the right values
   in the right order */
long
tlnadic (a,b,c,d,e,f,g,h,i,j,k) long a, b, c, d, e, f, g, h, i, j, k; {
        if (k >= a)
                return(a+b+c+d+e+f+g+h+i+j+k);
        else
                return(-1);
}
/* Verification du nbre maxi d'arguments */
tnbmaxi (a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af)
long a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af;
{
        return af;
}

tnbsmaxi (a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af)
long a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af;
{
        return a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+aa+ab+ac+ad+ae+af;
}

tnbmaxf (a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af)
double a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af;
{
        return (long)af;
}

tnbsmaxf (a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af)
double a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af;
{
        return(long)(a+b+c+d+e+f+g+h+i+j+k+l+m+n+o+p+q+r+s+t+u+v+w+x+y+z+aa+ab+ac+ad+ae+af);
}

tnbmaxri(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af)
long a[],b[],c[],d[],e[],f[],g[],h[],i[],j[],k[],l[],m[],n[],o[],p[],q[];
long r[],s[],t[],u[],v[],w[],x[],y[],z[],aa[],ab[],ac[],ad[],ae[],af[];
{
        return af[0];
}

tnbsmaxri(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af)
long a[],b[],c[],d[],e[],f[],g[],h[],i[],j[],k[],l[],m[],n[],o[],p[],q[];
long r[],s[],t[],u[],v[],w[],x[],y[],z[],aa[],ab[],ac[],ad[],ae[],af[];
{
        return a[0]+b[0]+c[0]+d[0]+e[0]+f[0]+g[0]+h[0]+i[0]+j[0]+k[0]+l[0]+m[0]+n[0]+o[0]+p[0]+q[0]+r[0]+s[0]+t[0]+u[0]+v[0]+w[0]+x[0]+y[0]+z[0]+aa[0]+ab[0]+ac[0]+ad[0]+ae[0]+af[0];
}

tnbmaxrf(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af)
double *a,*b,*c,*d,*e,*f,*g,*h,*i,*j,*k,*l,*m,*n,*o,*p,*q;
double *r,*s,*t,*u,*v,*w,*x,*y,*z,*aa,*ab,*ac,*ad,*ae,*af;
{
        return (long)af[0];
}

tnbsmaxrf
(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,aa,ab,ac,ad,ae,af)
double *a,*b,*c,*d,*e,*f,*g,*h,*i,*j,*k,*l,*m,*n,*o,*p,*q;
double *r,*s,*t,*u,*v,*w,*x,*y,*z,*aa,*ab,*ac,*ad,*ae,*af;
{
double res;
/* ne passe pas sur certain compilo (sco386)
        return (long)(a[0]+b[0]+c[0]+d[0]+e[0]+f[0]+g[0]+h[0]+i[0]+j[0]+k[0]+l[0]+m[0]+n[0]+o[0]+p[0]+q[0]+r[0]+s[0]+t[0]+u[0]+v[0]+w[0]+x[0]+y[0]+z[0]+aa[0]+ab[0]+ac[0]+ad[0]+ae[0]+af[0]);
*/
        res=(a[0]+b[0]+c[0]+d[0]+e[0]+f[0]+g[0]+h[0]+i[0]+j[0]+k[0]+l[0]+m[0]+n[0]+o[0]+p[0]+q[0]+r[0]+s[0]+t[0]+u[0]+v[0]+w[0]+x[0]+y[0]+z[0]+aa[0]+ab[0]+ac[0]+ad[0]+ae[0]+af[0]);
        return (long)res;
}

double
tcfloat (x) long x; {
        return x + x;
}

double
toto (x) long x; {
        return x + x;
}

double
tcfloat2 (x, y) double x, y; {
        return (x * y) + (sin(x) * cos(y));
}

float single_float=2.3;
double f_s_to_d () {
       return (single_float);
}


static char *chaines[] = {"a", "ab", "abc", "abcd", ""};

char *
tcstring (x) long x; {
        if ((x >= 0) && (x < 5))
                return chaines[x];
        else
                return "abcdefghijklmnopqrstuvwxyz";
}

char *tc_string(l)
long l;
{
        char *str;
        int i;
        str=(char *)malloc(l+1);
        for (i=0;i<l;i++) str[i]='a';
        str[l]='\0';
        return str;
}

char *
conv1_tcstring (x) char *x; {
static char fltbuf[50];
float fltpar1 = 200.15;
float fltpar2 = 550.30;
        sprintf(fltbuf,"%.5f - %.5f",fltpar1,fltpar2);
        return(fltbuf);
}

char *
conv2_tcstring (x,y) char *x, *y; {
static char fltbuf[50];
float fltpar1 = 200.15;
float fltpar2 = 550.30;
        sprintf(fltbuf,"%.5f - %.5f",fltpar1,fltpar2);
        return(fltbuf);
}

char ** 
tct (x) long x; {
        return ((char **) C_LL_FIX(x));
}

char **
tcexternal (x) long x; {
        return ((char **) C_LL_FIX(x));
}

/* pour affecter une structure GLOBALE de C et la recuperer en lisp */
struct sfoo {
  long a;
  float b;
  char *c;
};

struct sfoo *struct_un (x,y,z)
long x; float y; char *z; {
  static struct sfoo foo;
  foo.a = x;
  foo.b = y;
  foo.c = z;
  return &foo;
}

long
tltout (i, f, s, v, l) long i, l; double f; char *s, **v; {
        return (i * ((long) f) * strlen(s) * ((long) v[0])) + l;
}

char *
tlmalloc (x) long x; {
        return (char *) malloc (x);
}

/* les fonctions qui testent le lispcaller */

struct LL_CONS *
cons_en_c (a, b) LL_OBJECT a, b; {
        struct LL_SYMBOL *lisp_cons;

        lisp_cons = getsym("cons");

        pusharg(LLT_T, a);
        pusharg(LLT_T, b);

        return (struct LL_CONS *) lispcall(LLT_T, 2, lisp_cons);
}

#define NOSYMB (struct LL_SYMBOL *) 0

struct LL_SYMBOL *lisp_list = NOSYMB;

struct LL_CONS *
vect_to_list (v, l) long v[], l; {
        long i;

        if (lisp_list == NOSYMB) lisp_list = getsym ("list");

        for (i = 0; i < l; i++) pusharg(LLT_T, v[i]);

        return (struct LL_CONS *) lispcall(LLT_T, l, lisp_list);
}


struct LL_SYMBOL *lisp_fib;

init_fib(){
        lisp_fib = getsym("fib");
        return 0;
}

long
cfib (n) long n; {
    long x;
        if (n == 1) return 1;
        if (n == 2) return 1;

        pusharg(LLT_FIX, n-1);
        x = (long) lispcall (LLT_FIX, 1, lisp_fib);

        pusharg(LLT_FIX, n-2);

        return x + (long) lispcall (LLT_FIX, 1, lisp_fib);
}

char *tpafloat() {
     pushargd(LLT_FLOAT, 1.2);
     return (char *)(lispcall(LLT_T, 1, getsym("identity")));
}

struct LL_CONS *tpamultifloat(f2) double f2; {
     double f1=1.1;
     pushargd(LLT_FLOAT, f1);
     pushargd(LLT_FLOAT, f2);
     pushargd(LLT_FLOAT, 3.1);
     return (struct LL_CONS *)(lispcall(LLT_T, 3, getsym("list")));
}

/*
double tlcfloat (i) long i; {
        pusharg (LLT_FIX, i);
        return (double)(lispcall(LLT_FLOAT, 1, getsym("float")));
}
*/

long tpastring () {
        pusharg(LLT_FIX, 0);
        pusharg(LLT_STRING, "Cat");
        return (long) (lispcall(LLT_FIX, 2, getsym("chrnth")));
}

char * tlcstring () {
        pusharg(LLT_T, getsym("concat"));
        return (char *) (lispcall(LLT_STRING, 1,getsym("string")));
}

struct LL_CONS * tpamultistrg (s2) char *s2;{
        char *s1="a";
        pusharg(LLT_STRING, s1);
        pusharg(LLT_STRING, s2);
        pusharg(LLT_STRING, "c");
        return (struct LL_CONS *) (lispcall(LLT_T, 3,getsym("list")));
}       

/* Pour tester les entiers et flottants par reference */
/* les fix sont sur 32 bits et les float sur 64bits */
long trfix (rfix)
long *rfix;
{
        long a;
        a=rfix[0];
        return a+a;
}

double trfloat (rfloat)
double *rfloat;
{
        double a;
        a=rfloat[0];
        return a*a;
}

double trfloat1 (rfloat)
double *rfloat;
{
        double a;
        a=rfloat[0];
        return a-1.;
}

double trfixrfloat (fix, flt)
long *fix;
double *flt;
{
        return (double)(flt[0] + fix[0]);
}

/* Pour tester les vecteur d'entiers & flottants, avec modifications
 du tableau re-comprises par Lisp */
long ttabint (size, tabi)
long size;
long tabi[];
{
        long i;
        for (i=0; i<size; i++)
                tabi[i] = tabi[i] * 2;
        return size;
}

long t_tabintonly (tabi)
long tabi[];
{
        long i;
        tabi[0] = tabi[0] * 2;
        return tabi[0];
}


long ttabflt (size, tabf)
long size;
#ifdef LLPTR64
double tabf[];
#else /* LLPTR64 */
float tabf[];
#endif /* LLPTR64 */
{
        long i;
        for (i=0; i<size; i++) {
                tabf[i] = tabf[i] * tabf[i];
        }
        return size;
}

/* Pour tester FLOATVECTOR + un LISPCALL */
long tflt_lispcall (size, tabf)
long size;
#ifdef LLPTR64
double tabf[];
#else /* LLPTR64 */
float tabf[];
#endif /* LLPTR64 */
{
        long i;
        lispcall( LLT_T,0,getsym("print"));
        for (i=0; i<size; i++)
                tabf[i] = tabf[i] + tabf[i];
        return size;
}

/* Pour tester FLOATVECTOR + un GETSYM */
long tflt_getsym (size, tabf)
long size;
#ifdef LLPTR64
double tabf[];
#else /* LLPTR64 */
float tabf[];
#endif /* LLPTR64 */
{
        long i;
        lispcall (LLT_T,0,getsym("print"));
        for (i=0; i<size; i++)
                tabf[i] = tabf[i] * 2.;
        return size;
}

/* Pour tester les tableaux melanges avec
   d'autres parametres (teste le CALLG)*/
long ttabother (i1, siz1, tab1, flt1, flt2, i2, tab2, tab3, siz3, siz2)
long i1,i2,siz1,siz2,siz3;
long tab1[], tab3[];
double flt1, flt2;
#ifdef LLPTR64
double tab2[];
#else  /* LLPTR64 */
float tab2[];
#endif /* LLPTR64 */
{
        long j,a;
        for (j=0; j<siz1; j++) {
                a=tab1[j];
                tab1[j]=tab3[j]+i1;
                tab3[j]=a+i2;
        }
        for (j=0; j<siz2; j++) {
                tab2[j]=tab2[j] + flt1 * flt2;
        }
        return siz2;
}

/* pour tester un declanchement de GC pendant les phase de LISPCALL */
/* pendant un PUSHARG */
long crac (n) long n; {
        long i;
        struct LL_SYMBOL *LL_FOO;
        char *arg_string = "Hello World";
        LL_FOO = getsym("llcrac");
        for (i=0; i<n; i++) {
                pusharg(LLT_STRING, arg_string);
                lispcall(LLT_T,1,LL_FOO);
        }
        return 0;
}

/* pendant deux PUSHARG */
long crac2 (n) long n; {
        long i;
        struct LL_SYMBOL *LL_FOO;
        char *arg1_string = "Hello";
        char *arg2_string = "World";
        LL_FOO = getsym("llcrac2");
        for (i=0; i<n; i++) {
                pusharg(LLT_STRING, arg1_string);
                pusharg(LLT_STRING, arg2_string);
                lispcall(LLT_T,2,LL_FOO);
        }
        return 0;
}

/* pendant un GETSYM */
long croc(n) long n; {
        long i;
        struct LL_SYMBOL *LL_FOO;
        for (i=0; i<n; i++) {
                LL_FOO = getsym("llcroc");
                lispcall(LLT_T,0,LL_FOO);
        }
        return ( 0);
}

/* pendant un LISPCALL */
long cric(n) long n; {
        long i;
        struct LL_SYMBOL *LL_FOO;
        LL_FOO = getsym("llcric");
        for (i=0; i<n; i++) {
                lispcall(LLT_T,0,LL_FOO);
        }
        return ( 0);
}

/* Test des floatvectors emboites */

long c_f1 (ll_float, lg)
#ifdef LLPTR64
  double *ll_float;
#else /* LLPTR64 */
  float *ll_float;
#endif /* LLPTR64 */
  long lg;
{
        long i;

        for (i=0;i<lg;i++) 
                ll_float[i]=ll_float[i]*2.;

        pusharg(LLT_T, ll_float);
        pusharg(LLT_FIX, lg);
        lispcall(LLT_T,2,getsym("ll_f2"));

        return (0);
}
long c_f2 (ll_float_c, ll_float_ll, c_float, lg, strg)
#ifdef LLPTR64
  double *ll_float_c, *c_float;
#else /* LLPTR64 */
  float *ll_float_c, *c_float;
#endif /* LLPTR64 */
  char *ll_float_ll;
  long lg;
  char *strg;
{
        long i;

        for (i=0;i<lg;i++) 
                ll_float_c[i]=c_float[i]*3.;

        pusharg(LLT_T, ll_float_ll);
        pusharg(LLT_STRING,strg);
        lispcall(LLT_T,2,getsym("ll_f3"));

        return (0);
}

/* Test des fixvectors emboites */

long c_i1 (ll_int, lg)
  long *ll_int;
  long lg;
{
        long i;

        for (i=0;i<lg;i++) 
                ll_int[i]=ll_int[i]*2;

        pusharg(LLT_T, ll_int);
        pusharg(LLT_FIX, lg);
        lispcall(LLT_T,2,getsym("ll_i2"));

        return (0);
}

long c_i2 (ll_int_c, ll_int_ll, c_int, lg, strg)
  long *ll_int_c, *c_int;
  char *ll_int_ll;
  long lg;
  char *strg;
{
        long i;

        for (i=0;i<lg;i++) 
                ll_int_c[i]=c_int[i]*3;

        pusharg(LLT_T, ll_int_ll);
        pusharg(LLT_STRING, strg);
        lispcall(LLT_T,2,getsym("ll_i3"));

        return (0);
}


LL_OBJECT test_float_lispcall ()
{
        LL_OBJECT result;
        struct LL_SYMBOL *lisp_list;
        lisp_list = getsym ("list");
        pushargd(LLT_FLOAT,1.1) ;
        pushargd(LLT_FLOAT,1.2) ;
        pushargd(LLT_FLOAT,1.3) ;
        result = lispcall(LLT_T,3,lisp_list);
        return result;
}

LL_OBJECT test_lispcall_div(x,y)
long x,y;
{
        LL_OBJECT result;
        struct LL_SYMBOL *lisp_div;
        lisp_div = getsym ("/");
        pusharg(LLT_FIX,x) ;
        pusharg(LLT_FIX,y) ;
        result = lispcall(LLT_T,2,lisp_div);
        return result;
}
        

/* Pour tester la plupart des fonction C appele'es directement par LLM3 */
/* * en C *        * correspondance en LL *
   ttyin           #:tty:tyi
   ttys            #:tty:tys
   ttyinstr        #:tty:tystring
   ttyout          #:tty:tycn (utilise' par readcn)
   ttycrlf         #:tty:tynewline
   infile          openi
   oufile          openo
   apfile          opena
   inbf            read sur un fichier
   inbfb           read sur un fichier binaire
   outf            eof
   outfl           flush
   fclos           close
   fdele           deletefile
   frena           renamefile
   fcopy           copyfile
   fprobe          probefile
   corest          restore-core
   cline           comline
   runtime         runtime
   dtosc           callextern (float);runtime
   csleep          sleep (31bitfloat)
   cdleep          sleep (64bitfloat)
   cdate           date
   setalarm        clockalarm
   stodc           retour callextern (float)
   inton           a chaque signal trape' par LL (^C, clockalarm)
   getenvrn        getenv
   sfloatc         float(31bitfloat)
   sfixc           fix(31bitfloat)
   cvstoa          string(31bitfloat)
   cvatos          version(31bitfloat)
   getgloba        getglobal
   splus           fadd (31bitfloat)
   sdiff           fsub (31bitfloat)
   stimes          fmul (31bitfloat)
   squo            fdiv (31bitfloat)
   ssin            sin (31bitfloat)
   scos            cos (31bitfloat)
   sasin           asin (31bitfloat)
   sacos           acos (31bitfloat)
   satan           atan (31bitfloat)
   sexp            exp (31bitfloat)
   slog            log (31bitfloat)
   slog10          log10 (31bitfloat)
   spower          power (31bitfloat)
   ssqrt           sqrt (31bitfloat)
   csbeq           feqn (31bitfloat)
   csbne           fneqn (31bitfloat)
   csble           fle (31bitfloat)
   csblt           flt (31bitfloat)
   csbge           fge (31bitfloat)
   csbgt           fgt (31bitfloat)

   floatc          float(64bitfloat)
   fixc            fix(64bitfloat)
   cvftoa          string(64bitfloat)
   cvatof          version(64bitfloat);read
   fplus           fadd (64bitfloat)
   fdiff           fsub (64bitfloat)
   ftimes          fmul (64bitfloat)
   fquo            fdiv (64bitfloat)
   fsin            sin (64bitfloat)
   fcos            cos (64bitfloat)
   fasin           asin (64bitfloat)
   facos           acos (64bitfloat)
   fatan           atan (64bitfloat)
   fexp            exp (64bitfloat)
   flog            log (64bitfloat)
   flog10          log10 (64bitfloat)
   fpower          power (64bitfloat)
   fsqrt           sqrt (64bitfloat)
   cfbeq           feqn (64bitfloat)
   cfbne           fneqn (64bitfloat)
   cfble           fle (64bitfloat)
   cfblt           flt (64bitfloat)
   cfbge           fge (64bitfloat)
   cfbgt           fgt (64bitfloat)
*/

LL_OBJECT test_openi(f)
char *f;
{
        pusharg(LLT_STRING,f);
        return( lispcall(LLT_T,1,getsym("openi") ) );
}

LL_OBJECT test_openo(f)
char *f;
{
        pusharg(LLT_STRING,f);
        return( lispcall(LLT_T,1,getsym("openo") ) );
}

LL_OBJECT test_read_in_file()
{
        return( lispcall(LLT_T,0,getsym("read") ) );
}

LL_OBJECT test_flush()
{
        return( lispcall(LLT_T,0,getsym("flush") ) );
}

LL_OBJECT test_close(f)
long f;
{
        pusharg(LLT_FIX,f);
        return( lispcall(LLT_T,1,getsym("close") ) );
}

LL_OBJECT test_deletefile(f)
char *f;
{
        pusharg(LLT_STRING,f);
        return( lispcall(LLT_T,1,getsym("deletefile") ) );
}

LL_OBJECT test_renamefile(f1,f2)
char *f1,*f2;
{
        pusharg(LLT_STRING,f1);
        pusharg(LLT_STRING,f2);
        return( lispcall(LLT_T,2,getsym("renamefile") ) );
}

LL_OBJECT test_copyfile(f1,f2)
char *f1,*f2;
{
        pusharg(LLT_STRING,f1);
        pusharg(LLT_STRING,f2);
        return( lispcall(LLT_T,2,getsym("copyfile") ) );
}

LL_OBJECT test_probefile(f)
char *f;
{
        pusharg(LLT_STRING,f);
        return( lispcall(LLT_T,1,getsym("probefile") ) );
}

LL_OBJECT test_runtime()
{
        return( lispcall(LLT_T,0,getsym("runtime") ) );
}

LL_OBJECT test_sleep(f)
double f;
{
        pushargd(LLT_FLOAT,f);
        return( lispcall(LLT_T,1,getsym("sleep") ) );
}

LL_OBJECT test_date()
{
        return( lispcall(LLT_T,0,getsym("date") ) );
}

LL_OBJECT test_getenv(f)
char *f;
{
        pusharg(LLT_STRING,f);
        return( lispcall(LLT_T,1,getsym("getenv") ) );
}

LL_OBJECT test_float(f) /* floatc */
long f;
{
        pusharg(LLT_FIX,f);
        return( lispcall(LLT_T,1,getsym("float") ) );
}

LL_OBJECT test_fix(f) /* fixc */
double f;
{
        pushargd(LLT_FLOAT,f);
        return( lispcall(LLT_T,1,getsym("fix") ) );
}

LL_OBJECT test_string(f) /* cvstoa */
double f;
{
        pushargd(LLT_FLOAT,f);
        return( lispcall(LLT_T,1,getsym("string") ) );
}

LL_OBJECT test_version() /* cvatos */
{
        return( lispcall(LLT_T,0,getsym("version") ) );
}

LL_OBJECT test_getglobal(f)
char *f;
{
        pusharg(LLT_STRING,f);
        return( lispcall(LLT_T,1,getsym("getglobal") ) );
}

LL_OBJECT test_fadd(f1,f2)
double f1,f2;
{
        pushargd(LLT_FLOAT,f1);
        pushargd(LLT_FLOAT,f2);
        return( lispcall(LLT_T,2,getsym("fadd") ) );
}

LL_OBJECT test_power(f1,f2)
double f1,f2;
{
        pushargd(LLT_FLOAT,f1);
        pushargd(LLT_FLOAT,f2);
        return( lispcall(LLT_T,2,getsym("power") ) );
}


/**********************************/
/* pour tester le break a 4 coups */

cboucle () {
        while (1) sin(3.14);
}

/******************************************************/
/* pour tester la gestion de la signalerie par lelisp */
/*
long ll_process_getpid()
{
    return((long)getpid());
} */
/***************************************************/
/* pour tester qu'on ne casse pas la pile (rs6000) */
long do_not_kill1 ()
{
struct LL_SYMBOL *func_ll;

        func_ll = getsym("kill_or_not_kill1");
        lispcall(LLT_T, 0, func_ll);
        return 1;
}

long c_kill2(a1,a2,a3,a4,a5)
long a1,a2,a3,a4,a5;
{
struct LL_SYMBOL *lisp_kill2;

        lisp_kill2 = getsym("ll_kill2");

        if (a5==5) {
        pusharg(LLT_FIX, a1);
        pusharg(LLT_FIX, a2);
        pusharg(LLT_FIX, a3);
        pusharg(LLT_FIX, a4);
        pusharg(LLT_FIX, a5);
                lispcall (LLT_FIX, 5, lisp_kill2);
}
        return(1);
}

long c_kill1()
{
   return (c_kill2(1,2,3,4,5));

}

/* Testing memory access */
char *
malloc_for_test(x)
long x;
{
        return((char *)malloc(x));
}

char *
string_in_malloc(s)
char *s;
{
        return(s);
}

LL_OBJECT tcfloat_to_lfloat(f)
double f;
{
        return((LL_OBJECT)cfloat_to_lfloat(f + 1.));
}

double t_l_to_c_float (f)
LL_OBJECT f;
{
        double f1;
        f1 = lfloat_to_cfloat(f) + 1.;
        return(f1);
}

LL_OBJECT t_l_to_l_float (f)
LL_OBJECT f;
{
        double f1;
        f1 = lfloat_to_cfloat(f);
        return((LL_OBJECT) cfloat_to_lfloat(f1 + 1.));
}

LL_OBJECT tsymb_to_lfloat(s)
struct LL_SYMBOL *s;
{
        double f;
        f = lfloat_to_cfloat( s->ll_cval);
        return((LL_OBJECT)cfloat_to_lfloat(f + 1));
}

/* side effect on arg */
LL_OBJECT tsymb_to_lfloat1(s)
struct LL_SYMBOL *s;
{
        double f;
        f = lfloat_to_cfloat(s->ll_cval);
        s->ll_cval = (LL_OBJECT)cfloat_to_lfloat(f + 1.);
        return((LL_OBJECT)s->ll_cval);
}

LL_OBJECT tcllfloat(f)
double f;
{
    return((LL_OBJECT)C_LL_FLOAT(f));
}

double tllcfloat(f)
LL_OBJECT f;
{
        return(LL_C_FLOAT(f));
}

LL_OBJECT tcllfloat1(f1, f2, f3)
double f1,f2,f3;
{
double s;
    s = f1+f2+f3;
    return((LL_OBJECT)C_LL_FLOAT(s));
}

LL_OBJECT tllcfloat1(t1, t2, t3)
LL_OBJECT t1,t2,t3;
{
double f;
    f = tllcfloat(t1) + tllcfloat(t2) + tllcfloat(t3);
    return((LL_OBJECT)C_LL_FLOAT(f));
}

LL_OBJECT tclcfloat(f1, t2, f3)
double f1,f3;
LL_OBJECT t2;
{
double f;
    f = f1 + f3;
    f = f + LL_C_FLOAT(t2);
    t2 = (LL_OBJECT)C_LL_FLOAT(f);
    return((LL_OBJECT)t2);
}
    
long tllcfix(i,j)
LL_OBJECT i,j;
{
        return(LL_C_FIX(i) + LL_C_FIX(j));
}

long t1llcfix(i,j)
LL_OBJECT i,j;
{
        return(LL_C_FIX(i) * LL_C_FIX(j));
}

LL_OBJECT tcclfix(i,j)
long i,j;
{
        return(C_LL_FIX(i+j));
}

LL_OBJECT tcclfix1(i,j)
long i,j;
{
        return(C_LL_FIX(i*j));
}

LL_OBJECT tcllfix(i,j)
long i;
LL_OBJECT j;
{
long k;
        k = LL_C_FIX(j);
        i = i * k;
        return((LL_OBJECT)C_LL_FIX(i));
}

LL_OBJECT tlllfix(i,j)
LL_OBJECT i,j;
{
long k,l;
        k = LL_C_FIX(i);
        l = LL_C_FIX(j);
        k = k + l;
        return(C_LL_FIX(k));
}

