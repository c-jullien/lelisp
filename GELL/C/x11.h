/* ************************************************************************* */
/*                             FICHIER x11.h                                 */
/* ************************************************************************* */
/* Ce fichier contient la partie C de l'implemenation du Bitmap Virtuel      */
/* pour les stations de travail sous X-Windows version 11.                   */
/* ************************************************************************* */



#if IX386 || AIX386 || SUN386I || SCO386
#define U386 1
#endif


#ifdef VMS
#include <Xlib.h>
#include <Xutil.h>
#include <Xatom.h>
#include <cursorfont.h>
#include <stdio.h>
#include <Xresource.h>
#include <decwmhints.h>

#else
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xatom.h>
#include <X11/cursorfont.h>
#include <X11/Xresource.h>
#endif


#ifndef VMS
#ifndef IX386
#include <sys/types.h>
#endif
#endif

#include <signal.h>


#ifdef XT_BV
#include <X11/Intrinsic.h>
#include <X11/StringDefs.h>
#include <X11/Shell.h>
#ifdef VMS
#include <$A$idashell.h>
#else
#include <Aidashell.h>
#endif
#include <aidawid.h>
#endif


#ifdef MOTIF_BV
#include <Xm/Xm.h>
#endif


#ifdef OLIT_BV
#include <Xol/OpenLook.h>
#include <Xol/BaseWindow.h>
#endif


#ifdef VMS
#include "lelisp$disk:[000000]lelisp.h"
#else
#include <lelisp.h>
#include <stdio.h>
#include <sys/ioctl.h>
#endif


extern char *malloc (); 
extern char *realloc ();



#define EMPTYSTRING "foo"
#define LELISP "Lelisp"
#ifdef VMS
#define MESSAGE1 "%LL-E-COD, Bitprologue: can't open Display"
#define MESSAGE2 "%LL-E-CPV, Can't allocate point vector"
#define MESSAGE3 "%LL-E-CRV, Can't re-allocate point vector" 
#define MESSAGE4 "%LL-E-CAW, Can't associate the lisp window" 
#define MESSAGEDECW "%LL-E-DAB, Can't open file DECW$LELISP.DAT"
#else
#define MESSAGE1 "Bitprologue: can't open Display"
#define MESSAGE2 "Can't allocate point vector"
#define MESSAGE3 "Can't re-allocate point vector" 
#define MESSAGE4 "Can't associate the lisp window" 
#endif
#define BUFFERSIZE 100
#define HOSTSIZE 100
#define TWOPI 23040
#define MEMSIZESTART 256
#define BORDERWIDTH 1
#define BIGBORDERWIDTH 2
#define DISCARD 1
#define FLUSH 0
#define FUNKEYCODE 36
#define EVENTMASK StructureNotifyMask|ExposureMask
#define SUBWINDOWMASK CWEventMask
#define WINDOWMASK SUBWINDOWMASK|CWBackPixel|CWBorderPixel|CWCursor| \
        CWOverrideRedirect
#define FULLGCMASK GCGraphicsExposures
#define GCMASK FULLGCMASK|GCLineWidth|GCLineStyle|GCTile|GCFont|GCFunction| \
        GCPlaneMask|GCFillStyle|GCSubwindowMode|GCForeground|GCBackground
#define BUTTONS 3
#define BIT(i,mask) ((i & mask) ? 1 : 0)
#define BUTTON(i,j,k) (i ? 1 : (j ? 2 : (k ? 3 : 0)))
#define DETAIL(value,state) (value - 1 + BUTTONS * (BIT (state, ShiftMask) + BIT (state, ControlMask) * 2 + BIT (state, Mod1Mask) * 4 + BIT (state, Mod2Mask) * 8))
        
struct LLEvent {
        long code;
        long *window;
        long detail;
        long gx;
        long gy;
        long x;
        long y;
        long w;
        long h;
        long b;
};

struct LLColor {
        long red; 
        long green;
        long blue;
};


struct LispColor {
        char    *name;
        long    red  ;
        long    green;
        long    blue ;
};


/* used for 24bit-plane colors */
struct LLColorTable {
        long index;
        struct LLColorTable *table;
};

union LLX11Ptr { /* Memory used for multiple drawing */
        XPoint *points;
        XRectangle *rects ;
        XSegment *segs ;
        XArc *arcs ;
} ;


struct LLDisplay {
        Display *display; 
        unsigned long subeventmask;
        unsigned long eventmask;
        Atom delete;
        long override;
        long ForePixel;
        long BackPixel;
        long depth;
        Window root;
        Colormap colormap;
        XContext lispcontext;
        unsigned long memsize ;
        union LLX11Ptr mem ;
        XImage *setimage;
        XImage *setcolorimage;
        GC fullgc;
        Window currentwindow;
        GC currentgc;
        long offset_x;
        long offset_y;
/*      long monoplane; le plan de restriction pour les modes remplace par
        bitplane */
        char *hostname;
        XrmDatabase database;
        long release; 
        unsigned long bitplane;
        Atom wm_moved; /* ICCCM compliant */
        Atom configure_denied; /* ICCCm compliant */
        Visual *visual;
        unsigned long *lispcolors;
        struct LLColorTable *xcolors;
#ifdef VMS
        Atom    dwm_hint_atom;
        Pixmap   lispicon; 
#endif
#ifdef  XT_BV   
        Widget toplevel;
        XtAppContext context;
#endif
};


#ifdef XT_BV

#define LELISP_CLASS "Lelisp"
#define LELISP_NAME "lelisp"


struct MEMORY {
        struct MEMORY   *Val;
};
typedef struct MEMORY *Ptr;

#endif


typedef struct _lisp_string {
       char *pad1;
       long length;
       char *chars;
} *lisp_string;


struct lisp_font_info {
        long ascent;
        long descent;
        long angle;
        long weight;
        long minrbearing;
        long minlbearing;
        long minascent;
        long mindescent;
        long minwidth;
        long maxrbearing;
        long maxlbearing;
        long maxascent;
        long maxdescent;
        long maxwidth;
        
};


struct lisp_string {
       char *pad1;
       char *pad2;
       char chars;
};

struct lisp_cons {
       struct lisp_string **car;
       struct lisp_cons *cdr;
};
