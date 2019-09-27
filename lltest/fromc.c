/* 
     Voici un petit exemple d'utilisation de Le-Lisp pilote' par C.

Le programme principal (au sens UNIX: main) n'est plus un simple
 appel a "inlelisp" (lequel lance Le-Lisp) (cf llmain.c) mais
 un ve'ritable programme C qui fait ce qu'il veut avant d'appeler
 Lisp, lequel peut , soit appeler C au moyen du CALLEXTERN habituel,
 soit <revenir> a` C, dans l'environnement initial du programme
 principal C.

Dans l'exemple qui suit (cf fromc.c & fromc.ll), on de'marre dans C
avec le programme principal, puis on de'marre Lisp, d'ou` on charge
l'exemple contenu dans fromc.ll. Ce code Lisp commence par
<revenir> dans le monde C une premie`re fois, duquel on repart dans
le monde Lisp a` l'aide cette fois d'un LISPCALL habituel, de Lisp on 
execute une simple addition re'alise'e en C mais a` l'aide de l'ope'rateur
Lisp ADD et d'un LISPCALL, puis on <revient> a` C dans l'environnement 
de de'part, pour revenir dans le programme principal (main) ou` on
s'are`te --ouf !---
*/

#include <setjmp.h> /* Le system Call magique */
#include "lelisp.h" /* pour les LISPCALL de l'exemple */

/*
main C  --setjmp-->  lelisp
                          |
                          v
   C <-- defextern longjmp(1) 
   |
   v
   test_call_lisp  --LISPCALL-->  lelisp  ---------------
                                                        |
                                                        v
test_c_from_lisp_from_c   <--CALLEXTERN--(I)  test_lisp_from_c
 ^                 defextern longjmp(2)--(II)
 |                    \
 v                     \--> C --> retour main.
 LISPCALL  <-->  lelisp  
                    |  ^
                    v  |
                    add
*/

jmp_buf env;        /* le garant de l'environnement */

void do_longjmp(val)/* pour re'aliser la connection avec Le-Lisp */
int val;
{
        longjmp(env,val);
}


test_call_lisp ()  /* le petit exemple de C qui appele Lisp */
{
int test_lisp_from_c;
     test_lisp_from_c=(int)getsym("test_lisp_from_c");
printf("\n  C: Appel a` Le-Lisp par LISPCALL. \n\r");
     lispcall(LLT_T,0,test_lisp_from_c);
}


test_c_from_lisp_from_c (a, b) /* l'exemple de C appele' par Lisp */
int a,b;
{
int add,res;
     add = (int) getsym("add");
     pusharg(LLT_FIX,a);
     pusharg(LLT_FIX,b);     
     res = (int) lispcall(LLT_FIX,2,add);
printf("\n  C: Appel a` Le-Lisp par LISPCALL: (add %d %d) = %d \n\r",a,b,res);
}


init_lelisp (argc,argv,envp) /* le vrai code C! */
int argc; char **argv, **envp; {
int code;
   switch (setjmp(env))  {
   case 2:
           printf("\n  C: Retour a` C No 2, apre`s Le-Lisp.\n\r");
           return;
           break;
   case 1:
           printf("\n  C: Retour a` C No 1, apre`s Le-Lisp.\n\r");
           test_call_lisp ();
           return;
           break;
   case 0:
           printf("\n  C: Exemple de passage dans C avant Le-Lisp.\n\n\n\r");
           printf(";; On de'marre le-Lisp:\n\r");
           printf(";; Charger fromc.ll :  ^Lfromc\n\r");
           inlelisp(argc,argv,envp);
           printf("Fin de Le-Lisp\n\r");
           return;
   default:
           printf("\n ** error in C code before Le-Lisp call.\n\r");
           return;
   }

}


/*
 *  Le programme principal
 */
main (argc,argv,envp)
int argc; char **argv, **envp; {
init_lelisp(argc,argv,envp);
printf("\n C: Suite et fin du code en C apre`s Le-Lisp\n\r");
exit(0);
}
