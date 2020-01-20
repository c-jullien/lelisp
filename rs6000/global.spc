/*  Les flags specifiques au rs6000
 */

/* OBLIGATOIRES 
 **************/

/* le numero LL du portage
 */
#define INBSYST 47

/* le nom du portage 
 */
#define ISYSTEM RS6000
#define Isystem rs6000

/* La famille du processeur
 */
#define IRS6000
#define ICPU rs6000

/* La famille du systeme Unix pour le code C bsd/s5/posix
 */
#define IS5
#define IUNIX s5

/* le support magnetique est une disquette
 */
#define IFLOPPY

/* OPTIONNELS
 ************/

/*** traits de portage
 */
/* les 31BITFLOATS sont operationnels  */
#define I31BIN

/* Les 64BITFLOATS sont operationnels  */
#define I64BIN

/*** traits graphiques
 */
/* X11 fonctionne */
#define IX11

/* Motif fonctionne mais gerer par aida */
#define IMOTIF

/* OPENWINDOW ne fonctionne pas */
#define INOOLIT

/*** traits de la machine
 */
/* les EXECORE ne fonctionnent pas */
#define INOEXECORE

/* les execore ne sont pas en standard */
#define INOEXE

/* Le CLOAD ne fonctionne pas */
#define INOCLOAD

/* le MULTIPLECLOAD ne marche pas */
#define INOMULTIPLECLOAD

/* les interruptions a la lecture ne sont pas a traiter */
#define IITINREAD

/* le FOREGROUND fonctionne */
#define ILLFOREGROUND

/* le VFORK ne fonctionne pas */
#define ILLNOVFORK

/* le RENAME  fonctionne */
#define ILLRENAME

/* la memoire partage'e fonctionne */
#define ILLSHARED

/* le defextern sur les librairies partage'es fonctionne */
#define ILLSHAREDLIBRARIES

/* le precess a la lelispgo pour eviter de forker */
/* #define  ILLGHOSTPROC */

/* le WILDCARD en C fonctionne */
#define ILLWILDCARD

/* la fct C signal n'a pas besoin d'etre coerce'e */
#define ILLNOCOERCESIGNAL

/**************************************************
 *  pour machine.h
 */
#if defined(Machine_hFile)
/**/#define NBBY 8
/**/#include <sys/select.h>
#endif
