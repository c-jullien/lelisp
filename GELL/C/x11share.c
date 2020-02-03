/* *******************************************************************/
/*                         FILE x11share.c                           */
/*                                                                   */
/* x11.o = x11share.c + x11draw.c + x11lib.c                         */
/* Motif and Olit incarnations will use x11share.c and x11draw.c     */
/* *******************************************************************/

/* $Header: /cygdrive/d/ilog/lelisp15/work/GELL/C/RCS/x11share.c,v 1.2 1993/03/08 19:08:18 chaillou Exp $ */

/*********************************************************************/
/* What Must Be Done :                                               */
/*                    use X11r4 function on Window Managers Hints    */
/*                    example XSetNormalHints By XSetWMNormalHints   */
/*********************************************************************/



#include <x11.h>

#ifdef DECSTATION /* Pour corriger les bugs de Decwindows */
#define DECW 1
#endif

#ifdef VMS
#define DECW 1
#include <vmsutil.h>
long noshare *lispxerrorsymbol;
long noshare *lispxioerrorsymbol;
long noshare *lispnil;
extern XEvent  noshare XEVENT;

#else

long *lispxioerrorsymbol;
long *lispxerrorsymbol;
long  *lispnil;
extern XEvent  XEVENT;

#endif

/* AA 01/26/93, correction default resource values bug 
 * Local variables declaration
 */
#define MAXRESVALNAME 256
static char llbuffer[MAXRESVALNAME];


#if  SCO386 || U386 || UNIGRAPH || BP24BP 
long SLOW_SET_BYTE = 1;
#else
long SLOW_SET_BYTE = 1;
#endif

long LLXError (dpy, event)
Display *dpy;
XErrorEvent *event;{

        char buffer1 [BUFSIZ];
        char buffer2 [BUFSIZ];
        char message1 [3*BUFSIZ];
        char message2 [BUFSIZ];
        char num [10];
        static  long count = 0;
        
        XGetErrorText (dpy, event->error_code, buffer1, BUFSIZ);
        sprintf (num, "%d", event->request_code);
        XGetErrorDatabaseText (dpy, "XRequest", num, num, buffer2, BUFSIZ);
        sprintf (message1,
                 "[%d] %s (%d) %s",
                 ++count, buffer2, event->minor_code, buffer1);
        sprintf (message2,
                 "(%d . %d)",
                 (event->resourceid) >> 16, (event->resourceid) & 0xffff);
#ifdef VMS
        (*llpusharg) (LLT_STRING, convert_cstring_to_descriptor(message1)); 
        (*llpusharg) (LLT_STRING, convert_cstring_to_descriptor(message2)); 
        (*lllispcall) (LLT_T, 2, lispxerrorsymbol);
#else
        pusharg (LLT_STRING, message1); 
        pusharg (LLT_STRING, message2); 
        lispcall (LLT_T, 2, lispxerrorsymbol);
#endif
        return (0);
}


void LLXIOError (dpy)
Display *dpy;
{

#ifdef VMS
        (*lllispcall) (LLT_T, 0, lispxioerrorsymbol);
#else
        lispcall (LLT_T, 0, lispxioerrorsymbol);
#endif
}
        

void x11_initialise (llnil, llxerror, llxioerror)
long *llnil, *llxerror,  *llxioerror;{
        long LLXError ();
        
        lispnil = llnil;
        lispxioerrorsymbol = llxioerror;
        lispxerrorsymbol = llxerror;
        XSetIOErrorHandler (LLXIOError);
        XSetErrorHandler (LLXError);
}


long x11_x_release (dpy)
struct LLDisplay *dpy; {
        return (XVendorRelease (dpy->display));
}


long x11_x_version (dpy)
struct LLDisplay *dpy; {
        return (XProtocolVersion (dpy->display));
}


long x11_x_revision (dpy)
struct LLDisplay *dpy; {
        return (XProtocolRevision (dpy->display));
}



/* ***************************** Pas teste' a` ILOG ***************************
#ifdef S5
gethostname(name, namelen)
char *name;
long namelen; {
    struct utsname uts;
   
    uname(&uts);
    return(strcpy(name, uts.nodename));
}
#endif



**************************************************************************** */

/* 24BP */
/* Get the x color form the lisp color, can be identity when
   no translation table is defined or we the entry is not found */
unsigned long x11_xcolor (dpy,pixel)
struct LLDisplay *dpy;
long pixel;
{
        return (dpy->lispcolors ? 
                (dpy->lispcolors[pixel]==-1 ? pixel : dpy->lispcolors[pixel])
                : pixel);
}

/* 24BP */
/* debug facility */
void x11_print_table (dpy)
struct LLDisplay *dpy;
{
        long i;
        for (i=0; i<256; i++)
                printf ("%d %d |",dpy->lispcolors[i],i);
}

/* 24BP */
/* debug facility */
void x11_print_xtable1(xcolors,margin)
struct LLColorTable *xcolors;
long margin;
{
        long i;
        if (xcolors->table){
                printf ("\n\r");
                for (i=0;i<256; i++)
                        x11_print_xtable1(&(xcolors->table[i]),margin+3);
        }else
                if ((xcolors->index!=-1) || xcolors->table){
                        for (i=0;i<margin;i++)printf(" ");
                        printf ("| %d %d |",xcolors->index,xcolors->table);
                }
}



/* 24BP */
/* debug facility */
void x11_print_xtable (dpy)
struct LLDisplay *dpy;
{
        x11_print_xtable1(dpy->xcolors,0);
}

/* 24BP */
/* Old version of x11_lispcolor (slow) */
long x11_lispcolor (dpy,pixel)
struct LLDisplay *dpy;
unsigned long pixel;
{
        long res,i;
        res= -1;
        i=0;
        if (dpy->lispcolors){
                do {
                        if (dpy->lispcolors[i]==pixel) res=i;
                        i++;
                }
                while (res==-1 && i<256);
                return ((res==-1) ? ((long) (pixel & 0xff)): res);
        }
        return (pixel);
}

/* 24BP */
long x11_find_xcolor(xcolors,pixel)
unsigned long pixel;
struct LLColorTable *xcolors;
{
        return
                (xcolors->table ? 
                 x11_find_xcolor(xcolors->table[pixel & 0xff],pixel>>8)
                 : xcolors->index);
}



/* 24BP */
/* Gets the lisp color from the x color in the special hash-table */
long x11_lispcolor1 (dpy,pixel)
struct LLDisplay *dpy;
unsigned long pixel;
{
        long res,i;
        res= -1;
        i=0;
        if (dpy->lispcolors){
                res=x11_find_xcolor (dpy->xcolors,pixel);
                return ((res==-1) ? ((long) (pixel & 0xff)): res);
        }
        return (pixel);
}

long x11_lispcolorp (dpy,pixel)
struct LLDisplay *dpy;
unsigned long pixel;
{
        long res, i;
        res= -1;
        if (dpy->lispcolors) {
          for (i=0; i<255; i++) if (dpy->lispcolors[i]==pixel) res=i;
          } else {
          res= (long) pixel;}
        return (res);
}

unsigned long x11_xcolorp (dpy,index)
struct LLDisplay *dpy;
long index;
{
        if (dpy->lispcolors){
          return (dpy->lispcolors[index]);
          } else {
          return ((unsigned long) index);}
}


/*
  This function is always called only once to initialise the display
*/
void x11_init_pixels (dpy, fore, back, planemask)
struct LLDisplay *dpy;
long fore, back, planemask; {

        unsigned long comb ;
        unsigned long plane ;

        /* 24BP */
        dpy->ForePixel = x11_xcolor(dpy,fore);
        dpy->BackPixel = x11_xcolor(dpy,back);
        XSetForeground(dpy->display, dpy->fullgc, x11_xcolor(dpy,fore));
        XSetBackground(dpy->display, dpy->fullgc, x11_xcolor(dpy,back));
/*      dpy->monoplane = planemask; duplicated with bitplane, and false ...*/
        comb = dpy->ForePixel ^ dpy->BackPixel ;
        if (! comb) {
                fprintf (stderr, "foreground and background are identical.\n\r") ;
        } else {
                for (plane = 1 ; ! (comb & plane) ; plane *= 2) ;
        }
        dpy->bitplane = plane;
        dpy->wm_moved = XInternAtom(dpy->display,"WM_MOVED",0);
        dpy->configure_denied = XInternAtom(dpy->display,"WM_CONFIGURE_DENIED",0);
 }


x11_bitmap_flush (dpy) 
struct LLDisplay *dpy; {
        XFlush (dpy->display) ;
}


x11_bitmap_sync (dpy) 
struct LLDisplay *dpy; {
        XSync (dpy->display, FLUSH);
}


x11_bitmap_refresh (dpy, cursor)
struct LLDisplay *dpy;
Cursor cursor; {
        Window win;
        XSetWindowAttributes xswa;
        
        xswa.override_redirect = True;
        xswa.cursor = cursor; 
        win = XCreateWindow (dpy->display, dpy->root, 0, 0, 9999, 9999, 0,
                             dpy->depth, InputOutput, dpy->visual,
                             /* 24BP */
                             /*CopyFromParent,*/
                             CWOverrideRedirect|CWCursor, &xswa); 
        XMapWindow(dpy->display, win);
        XFlush(dpy->display);
        XDestroyWindow (dpy->display, win);     
        XFlush(dpy->display);
}


Window x11_root_window (dpy)
struct LLDisplay *dpy; {
        return (dpy->root);
}


void x11_pop_window (dpy, window) 
struct LLDisplay *dpy; 
Window window;{
        XRaiseWindow (dpy->display, window);
}


void x11_move_behind_window (dpy, window1) 
struct LLDisplay *dpy; 
Window window1;{
        XLowerWindow (dpy->display, window1);
}
/* correction du bug du kill-window sur rtx11 */


void x11_kill_ll_window (dpy, window, gc)
struct LLDisplay *dpy; 
Window window;
GC gc;{
        kill_userdata (dpy, window);
        XFreeGC (dpy->display, gc);
}

long get_userdata (dpy, win)
struct LLDisplay *dpy; 
Window win; {

long lisp;
if (XFindContext (dpy->display, win, dpy->lispcontext, (caddr_t *) &lisp)
            != NULL)
        lisp = (long) lispnil;
return (lisp);
}



long x11_find_window (dpy, x, y)
struct LLDisplay *dpy; 
long x, y;{
        Window w, w1; 
        long x1, y1;
        
        x1= x ;
        y1= y ;
        w = dpy->root ;
        do {
                w1= w ;
                XTranslateCoordinates (dpy->display, dpy->root, w1,
                                       x1, y1, &x, &y, &w);
        } while (w != NULL);
        return (get_userdata (dpy, w1));
}


x11_map_window (dpy, window, x, y, lxy)
struct LLDisplay *dpy; 
Window window;
long x, y ;
long *lxy;{
        Window w;
        int lx,ly;
        XTranslateCoordinates (dpy->display, dpy->root, window,
                               x, y, &lx, &ly, &w);
        lxy[0] = (lx) & 0xffff;
        lxy[1] = (ly) & 0xffff;
}


x11_flush_event (dpy)
struct LLDisplay *dpy; {
        XSync (dpy->display, DISCARD) ;
}


x11_grab_event (dpy, window,cursor)
struct LLDisplay *dpy; 
Window window;
Cursor cursor;{
        return (XGrabPointer (dpy->display, window, False,ButtonPressMask | ButtonReleaseMask | ButtonMotionMask | EnterWindowMask | LeaveWindowMask | PointerMotionMask ,GrabModeAsync, GrabModeAsync, None, cursor, CurrentTime)); 
}


x11_ungrab_event (dpy)
struct LLDisplay *dpy; {
        XUngrabPointer (dpy->display, CurrentTime);
}


#ifndef VMS
long x11_wait_in_socket (read_fds)
long read_fds;{
        long nb_fds ;
        
        nb_fds = select (32, &read_fds, 0, 0, 0);
        return (nb_fds > 0 ? read_fds : nb_fds);
}
#endif


void x11_read_mouse (dpy, event)
struct LLDisplay *dpy; 
struct LLEvent *event;{
        Window w, w1, w2;
        int x, y, gx, gy;
        unsigned int state;
        char c;
        
        w2 = dpy->root;
        do {
                w = w2;
                XQueryPointer (dpy->display, w, &w1, &w2,
                               &gx, &gy, &x, &y, &state);
        } while (w2 != NULL);
        event->window = (long *) get_userdata (dpy, w) ;
        event->gx = gx & 0xffff;
        event->gy = gy & 0xffff;
        event->x = x & 0xffff;
        event->y = y & 0xffff;  
        c = BUTTON (BIT (state, Button1Mask), 
                    BIT (state, Button2Mask),  
                    BIT (state, Button3Mask));
        event->detail = c == 0 ? 0 : (1 + DETAIL (c, state)) & 0xffff; 
}


void parse_event (dpy, llevent, xevent)
struct LLDisplay *dpy; 
struct LLEvent *llevent;
XEvent *xevent;{
        long state ;
        char buffer[BUFFERSIZE];
        KeySym funkey;
        static char c;
        static char *lookup ;
        int nbytes;
        XClientMessageEvent *client_evt;
        static int realx;
        static int realy;
        static Window childwindow;
        Atom wm_moved; /* For decwindows */
        llevent->code = xevent->type & 0xffff;
        switch (xevent->type){
        case KeyPress:
        case KeyRelease:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xkey.window) ;
                llevent->gx = xevent->xkey.x_root & 0xffff;
                llevent->gy = xevent->xkey.y_root & 0xffff;
                llevent->x = xevent->xkey.x & 0xffff;
                llevent->y = xevent->xkey.y & 0xffff;
                llevent->b = xevent->xkey.state;
#if IBMRT || AIX386
                lookup = (char *) XLookupMapping ( &(xevent->xkey), &nbytes);
                if (nbytes == 1)
                        llevent->detail = lookup[0];
                else{
#endif /* IBMRT || AIX386 */
                        if (NULL != XLookupString (&(xevent->xkey), buffer, BUFFERSIZE,
                                                   &funkey, NULL))
                                llevent->detail = (long)
                                        (unsigned char) buffer [0] ;
                        else {
                                /*
                                 * Manage just the FunctionKeyPress event
                                 */
                                if (xevent->type == KeyPress)
                                        llevent->code = FUNKEYCODE ;
                                else
                                        llevent->code = 0;

                                llevent->detail = funkey & 0xffff;
                        }
#if IBMRT || AIX386
                }
#endif /* IBMRT || AIX386 */
                break;
        case ButtonPress:
        case ButtonRelease:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xbutton.window) ;
                llevent->gx = xevent->xbutton.x_root & 0xffff;
                llevent->gy = xevent->xbutton.y_root & 0xffff;
                llevent->x = xevent->xbutton.x & 0xffff;
                llevent->y = xevent->xbutton.y & 0xffff;
                state = xevent->xbutton.state;
                llevent->b = xevent->xbutton.state;
                llevent->detail = DETAIL (xevent->xbutton.button, state)
                        & 0xffff ;
                break;
        case MotionNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xmotion.window);
                llevent->gx = xevent->xmotion.x_root & 0xffff;
                llevent->gy = xevent->xmotion.y_root & 0xffff;
                llevent->x = xevent->xmotion.x & 0xffff;
                llevent->y = xevent->xmotion.y & 0xffff;
                state = xevent->xmotion.state;
                if (NULL != (c = BUTTON (BIT (state, Button1Mask), 
                                         BIT (state, Button2Mask),  
                                         BIT (state, Button3Mask))))
                        llevent->detail = DETAIL (c, state) & 0xffff; 
                break;
        case EnterNotify:
        case LeaveNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xcrossing.window);
                llevent->gx = xevent->xcrossing.x_root & 0xffff;
                llevent->gy = xevent->xcrossing.y_root & 0xffff;
                llevent->x = xevent->xcrossing.x & 0xffff;
                llevent->y = xevent->xcrossing.y & 0xffff;
                state = xevent->xcrossing.state;
                if (NULL != (c = BUTTON (BIT (state, Button1Mask), 
                                         BIT (state, Button2Mask),  
                                         BIT (state, Button3Mask))))
                        llevent->detail = DETAIL (c, state) & 0xffff; 
                break;
        case Expose:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xexpose.window);
                llevent->x = xevent->xexpose.x & 0xffff;
                llevent->y = xevent->xexpose.y & 0xffff;
                llevent->w = xevent->xexpose.width & 0xffff;
                llevent->h = xevent->xexpose.height & 0xffff;
                llevent->detail = xevent->xexpose.count & 0xffff;
                break;
        case GraphicsExpose:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xgraphicsexpose.drawable);
                llevent->x = xevent->xgraphicsexpose.x & 0xffff;
                llevent->y = xevent->xgraphicsexpose.y & 0xffff;
                llevent->w = xevent->xgraphicsexpose.width & 0xffff;
                llevent->h = xevent->xgraphicsexpose.height & 0xffff;
                llevent->detail = xevent->xgraphicsexpose.count & 0xffff;
                break;
        case CreateNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xcreatewindow.window);
                llevent->x = xevent->xcreatewindow.x & 0xffff;
                llevent->y = xevent->xcreatewindow.y & 0xffff;
                llevent->w = xevent->xcreatewindow.width & 0xffff;
                llevent->h = xevent->xcreatewindow.height & 0xffff;
                llevent->b = xevent->xcreatewindow.border_width & 0xFFFF;
                break;
        case ConfigureNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xconfigure.window);
                llevent->w = xevent->xconfigure.width & 0xffff;
                llevent->h = xevent->xconfigure.height & 0xffff;
                llevent->detail = xevent->xconfigure.send_event & 0xFFFF;
                llevent->b = xevent->xconfigure.border_width & 0xFFFF;
                llevent->x =  xevent->xconfigure.x & 0xffff;
                llevent->y =  xevent->xconfigure.y & 0xffff;

                if(!xevent->xconfigure.send_event) 
                        /* Is this a real event or a synthetic event
                           see the ICCCM guide
                           */
                        /* In this Case we calculate Root coordinates
                           of our Top window
                           */
                        if (llevent->window != lispnil) {
                                XTranslateCoordinates(dpy->display,xevent->xconfigure.window,dpy->root,0,0,&realx,&realy,&childwindow);
                                llevent->gx =  realx & 0xFFFF;
                                llevent->gy =  realy & 0xFFFF;
                        }
                break;
        case ConfigureRequest:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xconfigurerequest.window);
                llevent->x = xevent->xconfigurerequest.x & 0xffff;
                llevent->y = xevent->xconfigurerequest.y & 0xffff;
                llevent->w = xevent->xconfigurerequest.width & 0xffff;
                llevent->h = xevent->xconfigurerequest.height & 0xffff;
                llevent->b = xevent->xconfigurerequest.border_width & 0xFFFF;
                break;
        case ResizeRequest:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xresizerequest.window);
                llevent->w = xevent->xresizerequest.width & 0xffff;
                llevent->h = xevent->xresizerequest.height & 0xffff;
                break;
        case ReparentNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xreparent.window);
                llevent->x = xevent->xreparent.x & 0xffff;
                llevent->y = xevent->xreparent.y & 0xffff;
                break;
        case GravityNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xgravity.window);
                llevent->x = xevent->xgravity.x & 0xffff;
                llevent->y = xevent->xgravity.y & 0xffff;
                break;
        case DestroyNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xdestroywindow.window);
                break;
        case UnmapNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xunmap.window);
                break;
        case MapNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xmap.window);
                break;
        case FocusIn:
        case FocusOut:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xfocus.window);
                llevent->detail = xevent->xfocus.mode & 0xffff;
                break;
        case NoExpose:
                llevent->window = lispnil;
                break;
        case VisibilityNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xvisibility.window);
                llevent->detail = xevent->xvisibility.state;
                break;
        case KeymapNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xkeymap.window);
                break;
        case CirculateNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xcirculate.window);
                break;
        case PropertyNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xproperty.window);
                break;
        case SelectionNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xcirculaterequest.window);
                break;
        case ColormapNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xcolormap.window);
                break;
        case MappingNotify:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xmapping.window);
                break;
        case ClientMessage:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xclient.window);
                if( dpy->configure_denied &&
                    (xevent->xclient.message_type == dpy->configure_denied )) {
                        /* Window Manager Refuse our operations */
                        int tmpx, tmpy, tmp2x, tmp2y;
                        Window tmproot, tmpchild;
                        unsigned int width,height,border_width,tmpdepth;
                        XGetGeometry(dpy->display,
                                     xevent->xclient.window,&tmproot, 
                                     &tmpx, &tmpy, &width, &height,
                                     &border_width,&tmpdepth);
                        XTranslateCoordinates(dpy->display,
                                              xevent->xclient.window,
                                              tmproot, (long) tmpx, 
                                              (long) tmpy,&tmp2x,&tmp2y,
                                              &tmpchild);
                        llevent->x = tmp2x;
                        llevent->y = tmp2y;
                        llevent->w = width;
                        llevent->h = height;
                        llevent->b = border_width;
                        llevent->code = ConfigureNotify;
                }
                else {
                        if (dpy->wm_moved && 
                            (xevent->xclient.message_type == dpy->wm_moved)) {
                                /* This is A Configure NOtify */
                                if (xevent->xclient.format == 16) {
                                    llevent->x=xevent->xclient.data.s[0];
                                    llevent->y=xevent->xclient.data.s[1];
                                    llevent->code=ConfigureNotify & 0xffff;
                            }
                        }
                        else {
                                if(xevent->xclient.data.l[0] == dpy->delete) 
                                        llevent->code =  DestroyNotify;
                        }
                }
                break;
        case SelectionClear:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xselectionclear.window);
                break;
        case MapRequest:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xmaprequest.window);
                break;
        case CirculateRequest:
                llevent->window = (long *) get_userdata
                        (dpy, xevent->xcirculaterequest.window);
                break;
        case SelectionRequest:
                break;
        case LASTEvent:
                break;
        }
}



long set_userdata (dpy, win, lisp)
struct LLDisplay *dpy; 
Window win;
long lisp; {

if (XSaveContext (dpy->display, win, dpy->lispcontext, (caddr_t) lisp) != NULL)
        {
                perror(MESSAGE4);
                return (0);
        }
        return (1);
}


kill_userdata (dpy, win)
struct LLDisplay *dpy; 
Window win;{
        
        XDeleteContext (dpy->display, win, dpy->lispcontext);
}

/* ************************************************************************* */

GC x11_default_gc (dpy)
struct LLDisplay *dpy; {
        return dpy->fullgc;
}


Pixmap x11_create_bitmap (dpy, w, h)
struct LLDisplay *dpy; 
unsigned long w, h ;{
        Pixmap pixmap; 
        
        if (w <= 0) w = 1;
        if (h <= 0) h = 1;
        pixmap = XCreatePixmap (dpy->display, dpy->root, w, h, dpy->depth);
        return (pixmap); 
}


void x11_kill_bitmap (dpy, bitmap)
struct LLDisplay *dpy; 
Pixmap bitmap;{
        XFreePixmap (dpy->display, bitmap);
}

 
void x11_bitblit (dpy, pixmap1, pixmap2, x1, y1, x2, y2, w, h, gc)
struct LLDisplay *dpy; 
Drawable pixmap1, pixmap2;
GC gc;
long x1, y1, x2, y2;
unsigned long w, h; {
        if ((w > 0) && (h > 0))
                XCopyArea (dpy->display, pixmap2, pixmap1, gc, x2, y2, w, h, x1, y1);
}


void x11_set_bit_line (dpy, pixmap, x, y, string, w, gc)
struct LLDisplay *dpy; 
Drawable pixmap;
long x, y;
char *string;
long w;
GC gc ;
{
char *olddata ;

if (w > 0) {
        olddata = dpy->setimage->data;
        dpy->setimage->data = string;
        dpy->setimage->byte_order = MSBFirst ;
        dpy->setimage->bitmap_unit = 8 ;
        dpy->setimage->bitmap_bit_order = MSBFirst ;
        XPutImage (dpy->display, pixmap, gc, dpy->setimage, 0, 0, x, y, w, 1);
        dpy->setimage->data = olddata;
}
}


/*
  New get_bit_line : DOES'NT NEED TO REVERSE BIT when MSB First
*/
#ifdef SVR4I386
Drawable prevpixmap ;
XImage *LLgetimage = NULL ;
#endif /* SVR4I386 */

void x11_get_bit_line (dpy, pixmap, x, y, string, w)
struct LLDisplay *dpy;
#ifdef SVR4I386
Pixmap pixmap;
#else  /* SVR4I386 */
Drawable pixmap;
#endif /* SVR4I386 */
long x, y;
char *string;
long w;{
        XImage *getimage ;
#ifdef SVR4I386
        Pixmap tmppixmap ;
#endif /* SVR4I386 */
        register char *ptr;
        register long i, c, b ;
        unsigned long bit ;
        if (w > 0) {
#ifdef SVR4I386
                tmppixmap = XCreatePixmap (dpy->display, dpy->root, w, 1,
                            dpy->depth);
                XCopyArea (dpy->display, pixmap, tmppixmap, dpy->fullgc,
                            x, y, w, 1, 0, 0);
                getimage = XGetImage (dpy->display, tmppixmap,
                                      0, 0, w, 1,
                                      AllPlanes, ZPixmap) ;
                XFreePixmap (dpy->display, tmppixmap);
#else  /* SVR4I386 */
                getimage = XGetImage (dpy->display, pixmap,
                                      x, y, w, 1,
                                      AllPlanes, ZPixmap) ;
#endif /* SVR4I386 */
                ptr = string ;
                c = 0 ; b = 128 ;
                for (i = 0 ; i < w ;) {
                        bit = XGetPixel(getimage, i, 0) ;
                        if (bit != dpy->BackPixel) {
                                c |= b;
                        }
                        b >>= 1;
                        if (!(++i & 7)) {
                                *(ptr++) = c;
                                c = 0 ; b = 128 ;
                        }
                }
                if (i & 7) {
                        *ptr = c ;
                }
                XDestroyImage (getimage);
        }
}


long x11_bmref (dpy, pixmap, x, y)
struct LLDisplay *dpy; 
#ifdef SVR4I386
Pixmap pixmap;
#else  /* SVR4I386 */
Drawable pixmap;
#endif /* SVR4I386 */
long x, y;{
        XImage *getimage;
#ifdef SVR4I386
        Pixmap tmppixmap ;
#endif /* SVR4I386 */
        unsigned long bit;
        long i;

#ifdef APOLLO
        getimage = XGetImage (dpy->display, pixmap, 0, y, x + 1, 1, AllPlanes,
                              ZPixmap);
        bit = XGetPixel (getimage, x, 0) ;
#else
#ifdef SVR4I386
        tmppixmap = XCreatePixmap (dpy->display,dpy->root, 1, 1,
                            dpy->depth);
        XCopyArea (dpy->display, pixmap, tmppixmap, dpy->fullgc,
                            x, y, 1, 1, 0, 0);
        getimage = XGetImage (dpy->display, tmppixmap, 0, 0, 1, 1, AllPlanes,
                              ZPixmap);
        XFreePixmap (dpy->display, tmppixmap);
#else  /* SVR4I386 */
        getimage = XGetImage (dpy->display, pixmap, x, y, 1, 1, AllPlanes,
                              ZPixmap);
#endif /* SVR4I386 */
        bit = XGetPixel (getimage, 0, 0) ;
#endif /* APOLLO */
        if (bit == dpy->BackPixel)
                i = 0 ;
        else
                i = 1 ;
        XDestroyImage (getimage);
        return i ;
}


void x11_bmset (dpy, pixmap, x, y, bit, gc)
struct LLDisplay *dpy; 
Drawable pixmap;
long x, y;
long bit;
GC gc ;
{
/*
#ifndef VMS
        dpy->setimage->data = EMPTYSTRING;
#endif
*/

XPutPixel (dpy->setimage, 0, 0, bit);
XPutImage (dpy->display, pixmap, gc, dpy->setimage, 0, 0, x, y, 1, 1) ; 
}


void x11_set_slow_set_byte_flag (flag)
long flag;
{
        SLOW_SET_BYTE=flag;
}

void x11_set_byte_line (dpy, pixmap, x, y, string, w)
struct LLDisplay *dpy; 
Drawable pixmap;
long x, y;
char *string;
long w;
{ char *olddata;
  unsigned long * data ;
  long i;
  long saveBPP;
  if (w > 0){
          olddata = dpy->setcolorimage->data ;
          dpy->setcolorimage->byte_order = MSBFirst ;
          /* Change locally only to allow SLOW_SET_BYTE modification */
          saveBPP=dpy->setcolorimage->bits_per_pixel;
          if (dpy->lispcolors){ dpy->setcolorimage->bits_per_pixel = 32;}
          if (SLOW_SET_BYTE)
                  { register long i ;
                    for (i = 0 ; i < w ; i ++)
#if BP24BP
                            XPutPixel (dpy->setcolorimage, i, 0,
                                       /* 24BP */
                                       (unsigned long)
                                       x11_xcolor(dpy,string [i])) ;
                    
#else
                    XPutPixel (dpy->setcolorimage, i, 0,
                               x11_xcolor(dpy,string [i])) ;
                    
#endif
            }else{
                    dpy->setcolorimage->bits_per_pixel = 8;
                    if (dpy->lispcolors){
                            data=(unsigned long *)dpy->setcolorimage->data;
                            for (i = 0 ; i < w ; i ++)
                                    data[i]=dpy->lispcolors[string[i]];
                    }else{
                            dpy->setcolorimage->data = string ;
                    }
            }
          
          XPutImage (dpy->display, pixmap, dpy->fullgc, 
                     dpy->setcolorimage,
                     0, 0, x, y, w, 1);
          dpy->setcolorimage->bits_per_pixel = saveBPP;
          dpy->setcolorimage->data = olddata;/* Don't loose allocated
                                                data */
  }
}


void x11_get_byte_line (dpy, pixmap, x, y, string, w)
struct LLDisplay *dpy; 
#ifdef SVR4I386
Pixmap pixmap;
#else  /* SVR4I386 */
Drawable pixmap;
#endif /* SVR4I386 */
long x, y;
char *string;
long w;{
        XImage *getimage;
#ifdef SVR4I386
        Pixmap tmppixmap ;
#endif /* SVR4I386 */
        long i;
        if (w > 0){
#ifdef SVR4I386
                tmppixmap = XCreatePixmap (dpy->display,dpy->root, w, 1,
                                           dpy->depth);
                XCopyArea (dpy->display, pixmap, tmppixmap, dpy->fullgc,
                           x, y, w, 1, 0, 0);
                getimage = XGetImage (dpy->display, tmppixmap, 0, 0, w, 1,
                                      AllPlanes, ZPixmap) ;
                XFreePixmap (dpy->display, tmppixmap);
#else  /* SVR4I386 */
                getimage = XGetImage (dpy->display, pixmap, x, y, w, 1,
                                      AllPlanes, ZPixmap) ;
#endif /* SVR4I386 */
                for (i = 0; i < w; i++)
                        string [i] = 
                                /* 24BP */
                                x11_lispcolor(dpy,XGetPixel (getimage, i, 0)) ;
                XDestroyImage (getimage);
        }
}


long x11_byteref (dpy, pixmap, x, y)
struct LLDisplay *dpy; 
Drawable pixmap;
long x, y;{
        XImage *getimage;
#ifdef SVR4I386
        Pixmap tmppixmap ;
#endif /* SVR4I386 */
        long bit;
#ifdef APOLLO
        getimage = XGetImage (dpy->display, pixmap, 0, y, x + 1, 1, AllPlanes,
                              ZPixmap);
        bit = XGetPixel (getimage, x, 0) ;
#else
#ifdef SVR4I386
        tmppixmap = XCreatePixmap (dpy->display,dpy->root, 1, 1,
                            dpy->depth);
        XCopyArea (dpy->display, pixmap, tmppixmap, dpy->fullgc,
                            x, y, 1, 1, 0, 0);

        getimage = XGetImage (dpy->display, tmppixmap, 0, 0, 1, 1, AllPlanes,
                              ZPixmap);
        XFreePixmap (dpy->display, tmppixmap);
#else  /* SVR4I386 */
        getimage = XGetImage (dpy->display, pixmap, x, y, 1, 1, AllPlanes,
                              ZPixmap);
#endif /* SVR4I386 */
        bit = XGetPixel (getimage, 0, 0) ;
#endif
        XDestroyImage (getimage);
        /* 24BP */
        return (x11_lispcolor(dpy,bit));
}


void x11_byteset (dpy, pixmap, x, y, bit)
struct LLDisplay *dpy; 
Drawable pixmap;
long x, y;
long bit;{

/*
#ifndef VMS
        dpy->setcolorimage->data = EMPTYSTRING;
#endif
*/  /* No need to do this */
        /* 24BP */
        XPutPixel (dpy->setcolorimage, 0, 0, x11_xcolor(dpy,bit));
        XPutImage (dpy->display, pixmap, dpy->fullgc, dpy->setcolorimage,
                   0, 0, x, y, 1, 1); 
}



Pixmap x11_pixmap_to_bitmap (dpy, pixmap, w, h)
struct LLDisplay *dpy;
Pixmap pixmap;
long w, h; {
        Pixmap bitmap;
        GC monoplanegc;
        XGCValues values;

        bitmap = XCreatePixmap (dpy->display, dpy->root, w, h, 1);
        values.graphics_exposures = False;
        monoplanegc = XCreateGC (dpy->display, bitmap, GCGraphicsExposures, 
                                 &values);
        XCopyPlane (dpy->display, pixmap, bitmap, monoplanegc,
                    0, 0, w, h, 0, 0, dpy->bitplane);
        XFreeGC(dpy->display, monoplanegc);
        return (bitmap);
}


Cursor Our_XCreateFontCursor ();

Cursor x11_create_cursor (dpy, cursor)
struct LLDisplay *dpy;
long cursor; {
Cursor xcursor;
/*
Forget this today One day it will be corrected in all X on all machines
        if(dpy->release > 2)
                xcursor = XCreateFontCursor (dpy->display, cursor);
        else
*/
xcursor = Our_XCreateFontCursor(dpy->display, cursor);
return xcursor;

}


void x11_recolor_cursor (dpy,cursor,forecol,backcol)
struct LLDisplay *dpy;
Cursor cursor;
struct LLColor *forecol,*backcol;
{
        XColor forecolor;
        XColor backcolor;
        
        forecolor.red=2*forecol->red;
        forecolor.green=2*forecol->green;
        forecolor.blue=2*forecol->blue;
        backcolor.red=2*backcol->red;
        backcolor.green=2*backcol->green;
        backcolor.blue=2*backcol->blue;
        XRecolorCursor(dpy->display,cursor,&forecolor,&backcolor);
}


Cursor x11_make_cursor (dpy, pixmap1, pixmap2, fgr, fgg, fgb,
                    bgr, bgg, bgb, x, y)
struct LLDisplay *dpy; 
Pixmap pixmap1, pixmap2;
long fgr, fgg, fgb, bgr, bgg, bgb;
long x, y;{
        XColor fore, back;
        
        fore.red = 2*fgr;
        fore.green = 2*fgg;
        fore.blue = 2*fgb;
        back.red = 2*bgr;
        back.green = 2*bgg;
        back.blue = 2*bgb;
        return (XCreatePixmapCursor (dpy->display, pixmap1, pixmap2,
                                     &fore, &back, x, y)) ;
}


void x11_set_cursor (dpy, window, cursor)
struct LLDisplay *dpy; 
Window window;
Cursor cursor;{
        XDefineCursor (dpy->display, window, cursor); 
}


void x11_move_cursor (dpy, x2, y2)
struct LLDisplay *dpy; 
long x2, y2;{
        XWarpPointer (dpy->display, None, dpy->root, 0, 0, 0, 0, x2, y2);
}



/* ************************************************************************* */
/*                               La Couleur                                  */
/* ************************************************************************* */



/* 24BP */
/* A new entry in the color translation table has be defined, this function
   updates the special hash-table for backward reference */
/* Let's make a little crow-bar :

   dpy->xcolors
       |
       v
     [i,t]
        |
        -->[i,t]
           [i,t]-->[i,t]
             .     [i,t]-->[i,t]
             .       .     [i,t]-->[i,t]
           [i,t]     .       .     [i,t]
                   [i,t]     .       .
                           [i,t]     .
                                   [i,t]

       c   c>>8    c>>16   c>>24   c>>32

  dpy->xcolors points to a LLColorTable structure with two fields,
  an index (0-255) and a pointer to a vector of 256 LLColorTable 
  structures. If the pointer is 0, the the value is in the index field,
  else, its in the "nth" LLColorTable of the vector. In this case,
  "n" is the X color pixel masked with 0xFF (0-255), at each
  recursion, the X pixel is divided by 256.
 
  The behaviour of this structure is that of an array 256x256x256x256
  in wich unused lines are not allocated.
  */

void x11_alloc_xcolortable(dpy,xcolors,pixel,res)
struct LLColorTable *xcolors;
struct LLDisplay *dpy;
unsigned long pixel;
long res;
{
        long i;
        long ind= pixel & 0xff;
        long old;
        if (xcolors->table != 0)
                /* go in sub table */
                {x11_alloc_xcolortable(dpy,&(xcolors->table[ind]),
                                       pixel>>8,res);}
        else
                if ((xcolors->index==-1)||(xcolors->index==res)){
                        /* find free location */
                        xcolors->index=res;
                }
                else{
                        /* somebody's here already, */
                        /* allocate sub table */
                        xcolors->table= (struct LLColorTable *) 
                                malloc (256*sizeof(struct LLColorTable));
                        for(i=0;i<256;i++){
                                xcolors->table[i].table=0;
                                xcolors->table[i].index= -1;
                        }
                        /* put old and new pixel in the new sub table */
                        x11_alloc_xcolortable(dpy,dpy->xcolors,
                                              dpy->lispcolors[res],res);
                        old=xcolors->index;
                        x11_alloc_xcolortable(dpy,dpy->xcolors,
                                              dpy->lispcolors[old],old);
                }
}



/* 24BP */
long x11_make_lispcolor (dpy, pixel)
struct LLDisplay *dpy;
unsigned long pixel;
{
        long res = -1;
        long i=0;
        /* update the L->X and X->L tables */
        do 
                {
                        if ((dpy->lispcolors[i]== -1)||
                            (dpy->lispcolors[i]== pixel))
                                {
                                        res=i;
                                        dpy->lispcolors[i]=pixel;
                                }
                        i++;
                } 
        while ((i<256) && (res==-1));
        if (res ==-1)return (-1);
        x11_alloc_xcolortable(dpy,dpy->xcolors,pixel,res);
        return (res);
}

/* 24BP */
/* we must dealloc the X->L table when we kill colors
   or when we close the connection. */
void x11_dealloc_xcolortable(dpy,xcolors,pixel,res)
long res;
struct LLColorTable *xcolors;
struct LLDisplay *dpy;
unsigned long pixel;
{
        long i;
        long empty=1;
        if(xcolors->table!=0){
                /* go in sub table */
                x11_dealloc_xcolortable(dpy,&xcolors->table[pixel&0xff],
                                        pixel>>8,res);
                /* find if the vector is empty */
                for (i=0;i<256;i++)
                        if ((xcolors->table[i].table) ||
                            (xcolors->table[i].index!=-1))
                                empty=0;
                if (empty==1){
                        /* then free the vector */
                        free (xcolors->table);
                        xcolors->index= -1;
                        xcolors->table=0;
                }
        }else{ if (xcolors->index==res)
                       /* it was here */
                       xcolors->index= -1;
       }
}




long x11_make_color (dpy, r, g, b, color) 
struct LLDisplay *dpy;
long r, g, b;
struct LLColor *color; {
        XColor xcolor;
        long pixel;
        xcolor.red = 2*r;
        xcolor.green= 2*g;
        xcolor.blue = 2*b;
        if (XAllocColor (dpy->display, dpy->colormap, &xcolor) == NULL)
                 return (-1);
        color->red = xcolor.red / 2;
        color->green = xcolor.green / 2;
        color->blue = xcolor.blue / 2;
        /* 24BP */
        if (dpy->lispcolors){
                pixel= x11_make_lispcolor (dpy, xcolor.pixel);
                return (pixel);
        }else{
                return (xcolor.pixel);
        }
}


long x11_make_mutable_color (dpy, r, g, b)
struct LLDisplay *dpy;
long r, g, b; {
        XColor xcolor;
        long pixel;
        if (XAllocColorCells (dpy->display, dpy->colormap, 
                              0, 0, 0, &xcolor.pixel, 1) == NULL)
                return (-1);
        
        xcolor.red = 2*r;
        xcolor.green= 2*g;
        xcolor.blue = 2*b;
        xcolor.flags = DoRed|DoGreen|DoBlue;
        XStoreColor (dpy->display, dpy->colormap, &xcolor);
        
        /* 24BP */
        if (dpy->lispcolors){
                pixel= x11_make_lispcolor (dpy, xcolor.pixel);
                return (pixel);
        }else{
                return (xcolor.pixel);
        }
}


long x11_make_named_color (dpy, name, color) 
struct LLDisplay *dpy;
char *name; 
struct LLColor *color; {
        XColor xcolor;
        long pixel;
        if (XParseColor (dpy->display, dpy->colormap, name, &xcolor) == NULL)
                return (-1) ;
        if (XAllocColor (dpy->display, dpy->colormap, &xcolor) == NULL)
                return (-2) ;
        color->red = xcolor.red / 2;
        color->green = xcolor.green / 2;
        color->blue = xcolor.blue / 2;
        /* 24BP */
        if (dpy->lispcolors){
                pixel= x11_make_lispcolor (dpy, xcolor.pixel);
                return (pixel);
        }else{
                return (xcolor.pixel);
        }
}


void x11_kill_color (dpy, pix) 
struct LLDisplay *dpy;
long pix; {
        XColor color;
        /* 24BP */
        if (dpy->lispcolors){
                color.pixel = dpy->lispcolors[pix];
                x11_dealloc_xcolortable(dpy,dpy->xcolors,dpy->lispcolors[pix],
                                        pix);
                dpy->lispcolors[pix]= -1;
        }else{
                color.pixel = (unsigned long) pix;
        }
        XFreeColors (dpy->display, dpy->colormap, (unsigned long *) &color, 1, 0);
}


long x11_color_component (dpy, pix, red, green, blue, flag)
struct LLDisplay *dpy; 
long pix;
long red, green, blue, flag; {
        XColor color;

        color.red = 2*red;
        color.green = 2*green;
        color.blue = 2*blue;
        /* 24BP */
        color.pixel = x11_xcolor(dpy,pix);
        switch (flag) {
        case 0: 
                color.flags = DoRed;
                break;
        case 1: 
                color.flags = DoGreen;
                break;
        case 2: 
                color.flags = DoBlue;
                break;
        }
        XStoreColor (dpy->display, dpy->colormap, &color);
        return 1;
}


#define CURSORFONT "cursor"

Cursor Our_XCreateFontCursor(dpy, which)
Display *dpy;
unsigned long which;
{
        static XColor foreground = { 0,    0,     0,     0  }; 
        static XColor background = { 0, 65535, 65535, 65535 }; 
        static Font cfont;
        Cursor cursor;
        cfont = XLoadFont(dpy, CURSORFONT);
         if (!cfont) return (Cursor) 0; 
        cursor = XCreateGlyphCursor (dpy, cfont, cfont, which, which + 1,
                                    &foreground, &background);
        return cursor;
}


void x11_synchronize (dpy, onoff)
Display *dpy;
long onoff;
{
        XSynchronize(dpy, onoff);
}


Window x11_create_transparentwindow (dpy, win, x, y, w, h, visible, eventmask,father)
struct LLDisplay *dpy; 
long win;
long x, y, w, h, visible;
long eventmask;
Window father; 
{
        Window window;
        XSetWindowAttributes attributes;
        
        if (w <= 0) w = 1;
        if (h <= 0) h = 1;
        attributes.event_mask = NULL ;
        window = XCreateWindow (dpy->display, father, x, y, w, h, 0, 0,
                                InputOnly, CopyFromParent,
                                SUBWINDOWMASK, &attributes);
        if (visible) XMapWindow (dpy->display, window);
        if (!eventmask)
                XSelectInput (dpy->display, window, dpy->subeventmask);
        else XSelectInput (dpy->display, window, eventmask);
        if(visible) XMapWindow(dpy->display,window);
        return ((set_userdata (dpy, window, win)) ? window : (Window) NULL);
}


void x11_move_window(dpy,window,x,y)
struct LLDisplay *dpy; 
Window window;
long x,y;
{
        XMoveWindow(dpy->display,window,x,y);
}



void x11_resize_window(dpy,window,w,h)
struct LLDisplay *dpy; 
Window window;
long w,h;
{
        if (w <= 0) w = 1;
        if (h <= 0) h = 1;
        XResizeWindow(dpy->display,window,w,h);
}


void x11_moveresize_window(dpy,window,x,y,w,h)
struct LLDisplay *dpy; 
Window window;
long x,y,w,h;
{
        if (w <= 0) w = 1;
        if (h <= 0) h = 1;
        XMoveResizeWindow(dpy->display,window,x,y,w,h);
}


void x11_topmove_window(dpy,window,x,y,mask)
struct LLDisplay *dpy; 
Window window;
long x,y,mask;
{
        XWindowChanges changes;
        changes.x = x;
        changes.y = y;

        XConfigureWindow(dpy->display,window,CWX|CWY,&changes);
#ifdef DECW
                {
                        XSizeHints hints;
                        hints.x = x;  hints.y = y; 
                        hints.flags = USPosition;
                        XSetNormalHints(dpy->display, window, &hints);
                }
#endif

}



void x11_topresize_window(dpy,window,w,h,mask)
struct LLDisplay *dpy; 
Window window;
long w,h,mask;
{

         XWindowChanges changes;
        if (w <= 0) w = 1;
        if (h <= 0) h = 1;
         changes.width = w;
         changes.height = h;

         XConfigureWindow(dpy->display,window,CWWidth|CWHeight,&changes);
#ifdef DECW
                {
                        XSizeHints hints;
                        hints.width = w; 
                        hints.height = h;
                        hints.flags = USSize;
                        XSetNormalHints(dpy->display, window, &hints);
                }
#endif
 }


void x11_topmoveresize_window(dpy,window,x,y,w,h,mask)
struct LLDisplay *dpy; 
Window window;
long x,y,w,h,mask;
{

        XWindowChanges changes;
        changes.x = x;
        changes.y = y;
        if (w <= 0) w = 1;
        if (h <= 0) h = 1;
        changes.width = w;
        changes.height = h;
        XConfigureWindow(dpy->display,window,CWWidth|CWHeight|CWX|CWY,&changes);
#ifdef DECW
        {
                XSizeHints hints;
                hints.x = x;  hints.y = y; 
                hints.width = w; 
                hints.height = h;
                hints.flags = USSize | USPosition;
                XSetNormalHints(dpy->display, window, &hints);
                }

#endif
}


void x11_topchangewindow_border(dpy,window,border,mask)
struct LLDisplay *dpy; 
Window window;
long border,mask;
{
        XWindowChanges changes;
        changes.border_width = border;
        XConfigureWindow(dpy->display,window,CWBorderWidth,&changes);
        /*XSetWindowBorderWidth (dpy->display, window, border);*/
}


void x11_changewindow_border(dpy,window,border)
struct LLDisplay *dpy; 
Window window;
long border;
{
        XSetWindowBorderWidth (dpy->display, window, border);
}


void x11_changewindow_bordercolor(dpy,window,color)
struct LLDisplay *dpy; 
Window window;
long color;
{ 
        XSetWindowAttributes attributes;
        /* 24BP */
        attributes.background_pixel  = x11_xcolor(dpy,color);
        XChangeWindowAttributes(dpy->display,window,CWBorderPixel,&attributes);
/*
        XSetWindowBorder (dpy->display, window, color);
*/
}


/*
  The lelisp fix is limited de 15  bits so we need to build int gt 15 bits
*/
long x11_build_mask(vect,nb)
long *vect,nb;
{
        long mask=0;
        long i;
        for(i=0;i<nb;i++) mask |= (1 << vect[i]);
/*      mask |= OwnerGrabButtonMask; For opnewindows */
return mask;
}


void x11_changeeventmask_window(dpy,window,mask)
struct LLDisplay *dpy; 
Window window;
long mask;
{
        XSelectInput(dpy->display,window,mask);
}


void x11_changelongmask_window(dpy,window,mask)
struct LLDisplay *dpy; 
Window window;
long mask;
{
        XSelectInput(dpy->display,window,mask);
}


void x11_change_title(dpy,window,title)
struct LLDisplay *dpy; 
Window window;
char *title;
{
        XStoreName (dpy->display, window, title);
}


void x11_change_icontitle(dpy,window,title)
struct LLDisplay *dpy; 
Window window;
char *title;
{
        XSetIconName (dpy->display, window, title);
}
 

GC x11_create_graph_env (dpy, window, font, width, style, pattern, mode)
struct LLDisplay *dpy; 
Window window;
XFontStruct *font;
long width, style, mode;
Pixmap pattern;
{
        GC gc;
        XGCValues values;
        
        values.foreground = dpy->ForePixel ;
        values.background = dpy->BackPixel ;
        values.line_width = width ;
        values.line_style = style ;
        values.tile = pattern ;
        values.font = font->fid;
        values.function = mode;
        values.plane_mask = AllPlanes;
        values.fill_style = FillSolid;
        values.graphics_exposures = False;  /* The only difference */
        values.subwindow_mode = ClipByChildren;
        gc = XCreateGC (dpy->display, window, GCMASK, &values);
        return (gc);
}


GC x11_new_create_graph_env (dpy, window, font, width, style, pattern, mode,fg,bg,subwinmode)
struct LLDisplay *dpy; 
Drawable window;
XFontStruct *font;
long width, style, mode;
Pixmap pattern;
long fg;
long bg;
long subwinmode;
{
        GC gc;
        XGCValues values;
        
        /* 24BP */
        values.foreground = x11_xcolor(dpy,fg) ;
        values.background = x11_xcolor(dpy,bg) ;
        values.line_width = width ;
        values.line_style = style ;
        values.tile = pattern ;
        values.font = font->fid;
        values.function = mode;
        values.plane_mask = AllPlanes;
        values.fill_style = FillSolid;
        /* To receive Expose if bitblit fails */
        values.graphics_exposures = True ;
        values.subwindow_mode = subwinmode;
        /*IncludeInferiors;*/
        gc = XCreateGC (dpy->display, window, GCMASK, &values);
        return (gc);
}


void x11_free_graph_env (dpy,gc)
struct LLDisplay *dpy ; 
GC gc ; {
XFreeGC (dpy->display, gc);
}



long x11_imagebyteorder (dpy)
struct LLDisplay *dpy;
{
        long res;
        res = XImageByteOrder(dpy->display);
        if(res == LSBFirst) return 1;
        else return 2;
}


long x11_bitmapbitorder(dpy)
struct LLDisplay *dpy;
{
        long res;
        res = XBitmapBitOrder(dpy->display);
        if(res == LSBFirst) return 1;
        else return 2;
}




void x11_seticon_pixmap(dpy,window,pixmap)
struct LLDisplay *dpy;
Window window;
Pixmap pixmap;
{
        XWMHints hints;
        hints.icon_pixmap = pixmap;
        hints.flags = IconPixmapHint;
        XSetWMHints(dpy->display,window,&hints);
}


void x11_set_window_pixmap (dpy,window,pixmap)
struct LLDisplay *dpy;
Window window;
Pixmap pixmap;
{
        XSetWindowBackgroundPixmap(dpy->display,window,pixmap);
}


void x11_setwindow_state(dpy,window,state)
struct LLDisplay *dpy;
Window window;
long state;
{
XClientMessageEvent client;
        XWMHints hints;

if(state) {
#ifdef X11r4
        XIconifyWindow(dpy->display,window,DefaultScreen(dpy->display));
#else
        client.type = ClientMessage;
        client.window = window;
        client.display=dpy->display;
        
        client.message_type = XInternAtom(dpy->display,"WM_CHANGE_STATE",0);
        client.format = 32;
        client.data.l[0] = IconicState;
        XSendEvent (dpy->display, dpy->root, False, SubstructureRedirectMask|SubstructureNotifyMask, (XEvent *) &client);
#endif
}

else XMapWindow(dpy->display,window);

#ifdef VMS
        if(state) hints.initial_state = IconicState;
        else hints.initial_state = NormalState;
        hints.flags |= StateHint;
        XSetWMHints(dpy->display, window, &hints);   
#endif
}


char * x11_fetch_bytes(dpy,vlength)
struct LLDisplay *dpy;
long *vlength;
{
        char *bytes;
        int l=0;
        bytes = XFetchBytes(dpy->display,&l);
        (*vlength) = l;
        if(l) return bytes;
        else return "";
}


void x11_bytes_to_llstring(bytes,llstring,length)
char *bytes;
char *llstring;
long length;
{
#ifdef VMS
        strncpy(llstring,bytes,length);
#else
#ifdef SOLARIS
        memcpy(llstring,bytes,length);
#else
        bcopy(bytes,llstring,length);
#endif
#endif       
        XFree(bytes);
}


long x11_depth (dpy)
struct LLDisplay *dpy;
{
        /* return XDefaultDepth(dpy->display,XDefaultScreen(dpy->display));*/
        /* 24BP */
        return (dpy->depth);
}

long x11_get_format ()
{
XClientMessageEvent *event;
        event = (XClientMessageEvent *) &XEVENT;

        return event->format;
}


char * x11_get_data_string ()
{
XClientMessageEvent *event;
        event = (XClientMessageEvent *) &XEVENT;
#ifdef VMS
return convert_cstring_to_descriptor (event->data.b);
#else
return event->data.b;
#endif
}


char * x11_get_message_type (dpy)
struct LLDisplay *dpy;
{
XClientMessageEvent *event;
Atom message;
char s[256],*ss;
        event = (XClientMessageEvent *) &XEVENT;
        message = event->message_type;
        ss = XGetAtomName(dpy->display,message);
        if (ss) {
                ss[256] =0;
                strcpy(s,ss);
                XFree(ss);
                return s;
        }
        else
                return "";
}

void x11_get_data_long (v)
long *v;
{
XClientMessageEvent *event;
long i;
        event = (XClientMessageEvent *) &XEVENT;
        for(i=0;i<5;i++) v[i] = event->data.l[i];
}


void x11_get_data_short (v)
long *v;
{
XClientMessageEvent *event;
long i;
        event = (XClientMessageEvent *) &XEVENT;
        for(i=0;i<10;i++) v[i] = event->data.s[i];
}
        

void x11_change_gc_values (dpy,gc,flags,font,mode,pattern,width,style,fg,bg)
struct LLDisplay *dpy;
GC gc;
long *flags;
XFontStruct *font;
long mode;
Pixmap pattern;
long width;
long style;
long fg,bg;
{
        XGCValues values;
        long gcmask=0;
        if (flags[0]) {
                values.font = font->fid;
                gcmask |= GCFont;
        }
        if (flags[1]) {
                values.function = mode;
                gcmask |= GCFunction;
                if (mode == 3) {
                        values.plane_mask = AllPlanes;
                        gcmask |= GCPlaneMask;
                }
                else {
                        values.plane_mask =dpy->bitplane ;
                        gcmask |= GCPlaneMask;
                }
        }
        if (flags[2]) {
                values.tile = pattern;
                gcmask |= GCTile;
        }
        if (flags[3]) {
                values.line_width = width;
                values.line_style = style;
                gcmask |= GCLineWidth|GCLineStyle;
        }
        if (flags[4]) {
                /* 24BP */
                values.foreground = x11_xcolor(dpy,fg) ;
                gcmask |= GCForeground;
        }
        if (flags[5]) {
                /* 24BP */
                values.background = x11_xcolor(dpy,bg) ;
                gcmask |= GCBackground;
        }
        values.graphics_exposures = False;  /* The only difference */
        gcmask |=GCGraphicsExposures;
        XChangeGC(dpy->display,gc,gcmask,&values);
}
        
/*
  llattr :
   backing-store , save-under , override-redirect,transient
*/

void x11_change_attributes (dpy,window,flags,llattr)
struct LLDisplay *dpy;
Window window;
long *flags;
long *llattr;
{
        XSetWindowAttributes attributes;
        long mask = 0;
        
        if(flags[0]) {
                mask |= CWBackingStore;
                if(llattr[0]) attributes.backing_store = Always;
                else attributes.backing_store = NotUseful;
        }
        if(flags[1]) {
                mask |= CWSaveUnder;
                if(llattr[1]) attributes.save_under = True;
                else attributes.save_under = False;
        }
        if(flags[2]) {
                mask |= CWOverrideRedirect;
                if(llattr[2]) attributes.override_redirect = True;
                else attributes.override_redirect  = False;
        }
        if (mask) 
                XChangeWindowAttributes(dpy->display,window,mask,&attributes);
        if(flags[3]) 
                if (llattr[3]) 
                        XSetTransientForHint(dpy->display,window,dpy->root);
}


void x11_graph_subwindow_mode (dpy,gc,value)
struct LLDisplay *dpy;
GC gc;
long value;
{
        XGCValues values;
        values.subwindow_mode = value;
        XChangeGC(dpy->display,gc,GCSubwindowMode,&values);
}


/*
  La me'thode lente mais sure, car utilise des fonctions X.
  */

void slow_subst_colors (dpy, pixmap, all_colors , w, h)
struct LLDisplay *dpy; 
Pixmap pixmap;
long all_colors [] ;
long w,h ; {
XImage *getimage ;
register long  x, y ;
#ifdef SVR4I386
Pixmap tmppixmap ;
#endif /* SVR4I386 */

/* We work line by line, because full image may be too large */
#ifdef SVR4I386
tmppixmap = XCreatePixmap (dpy->display, dpy->root, w, 1,
                        dpy->depth);
#endif /* SVR4I386 */
for (y = 0 ; y < h ; y++) {
#ifdef SVR4I386
        XCopyArea (dpy->display, pixmap, tmppixmap, dpy->fullgc,
                        0, y, w, 1, 0, 0);
        getimage = XGetImage (dpy->display, tmppixmap, 0, 0, w, 1, AllPlanes,
                              ZPixmap);
#else  /* SVR4I386 */
        getimage = XGetImage (dpy->display, pixmap, 0, y, w, 1, AllPlanes,
                              ZPixmap);
#endif /* SVR4I386 */
        for (x = 0 ; x < w ; x++) {
                XPutPixel(getimage, x, 0,
                          /* 24BP */
                          all_colors[x11_lispcolor
                                     (dpy, XGetPixel (getimage, x, 0))]
                          ); 
        }
        XPutImage (dpy->display, pixmap, dpy->fullgc, getimage,
                   0, 0, 0, y, w, 1);
        XDestroyImage (getimage);
}
#ifdef SVR4I386
XFreePixmap (dpy->display, tmppixmap);
#endif /* SVR4I386 */
}



/*
  Rapide, mais peu portable car acce`de directement, et ne fonctionne que sur
  8 plans.
  */

void fast_subst_colors (dpy, pixmap, all_colors , w, h)
struct LLDisplay *dpy; 
Pixmap pixmap;
long all_colors [] ;
long w,h ; {
XImage *getimage ;
register unsigned char *byte, *line_addr;
long line, col ;
long bpl ;

getimage = XGetImage (dpy->display, pixmap, 0, 0, w, h, AllPlanes, ZPixmap) ;
bpl = getimage->bytes_per_line ;
/* We work line by line, because full image may be too large */
for (line = 0, line_addr=(unsigned char *) (getimage->data) ;
     line < h ; line++, line_addr+=bpl)
        for (col = 0, byte=line_addr ; col < w ; col++, byte++)
                (*byte) = all_colors [*byte] ;
XPutImage (dpy->display, pixmap, dpy->fullgc, getimage, 0, 0, 0, 0, w, h);
XDestroyImage (getimage);
}



#define MAX_BV_COLORS 256

void x11_subst_colors (dpy,pixmap,oldcolors,newcolors,size,w,h)
struct LLDisplay *dpy; 
Pixmap pixmap;
long *oldcolors,*newcolors ;
long size ;
long w,h ;
{
long i;
/* 24BP */
static unsigned long all_colors [MAX_BV_COLORS] ;
XImage *getimage;
/* 24BP */
register unsigned long *longcolor;
register long *color,*newcolor ;

/* Initialisation of substitution vector. */
for (longcolor = all_colors,i=0 ; i < MAX_BV_COLORS ; longcolor++, i++)
        /* 24BP */
        (*longcolor) = x11_xcolor (dpy,i);
for (i=0,color=oldcolors,newcolor=newcolors ; i<size ; color++,newcolor++,i++)
        /* 24BP */
        all_colors [*color] = x11_xcolor(dpy,(*newcolor)) ;
#if VAXUNIX || VMS || U386 || UNIGRAPH || BP24BP
slow_subst_colors (dpy, pixmap, all_colors , w, h) ;
#else
fast_subst_colors (dpy, pixmap, all_colors , w, h) ;
#endif
}





void x11_free_cursor (dpy,cursor)
struct LLDisplay *dpy;
Cursor cursor;
{
        XFreeCursor(dpy->display,cursor);
}


x11_set_planemask (dpy,gc, planes)
struct LLDisplay *dpy;
GC gc;
long planes;{
        XSetPlaneMask (dpy->display,gc,planes);
}


Display * x11_xdisplay (dpy)
struct LLDisplay *dpy;
{
        return dpy->display;
}




/*
  Get Ressource
*/

/*
  OLd interface

char *x11_get_default (dpy, prog, item)
struct LLDisplay *dpy; 
char *prog, *item; {
        char *res;
        res = XGetDefault (dpy->display, prog, item);
#ifdef VMS      
        return res ? convert_cstring_to_descriptor(res) : convert_cstring_to_descriptor ("");
#else
        return res ? res : "";
#endif
}
*/

/***************** Old bugged function ***********************
#define MAX_LISPCHARS 512

char *x11_get_default (dpy, llprog, llitem)
struct LLDisplay *dpy; 
char *llprog, *llitem; {
        XrmValue value_return;
        unsigned long res;
        char *temp;
        long size=MAX_LISPCHARS;
        char *type;
        char lispbuffer[MAX_LISPCHARS+1];
        if (dpy->database) {
                temp=(char *) malloc(strlen(llprog) + strlen(llitem) + 2) ;
                sprintf(temp,"%s.%s",llprog,llitem);
                res = XrmGetResource (dpy->database, temp, "*", &type, &value_return) ;
                free(temp) ;
                if ( res) {
                        temp = (char *)value_return.addr;
                        if(value_return.size > MAX_LISPCHARS) 
                                size = MAX_LISPCHARS;
                        else size = value_return.size;
                        strncpy(lispbuffer,temp,size);
                        lispbuffer[size]=0;
#ifdef VMS
                        convert_cstring_to_descriptor(lispbuffer) ;
#else
                        return(lispbuffer) ;
#endif
                }
#ifdef VMS
                convert_cstring_to_descriptor ("") ;
#else
                else return  ("") ;
#endif
        }
        else {
        
                temp = XGetDefault (dpy->display, llprog, llitem);
#ifdef VMS      
                return temp ? convert_cstring_to_descriptor(res) : convert_cstring_to_descriptor ("");
#else
        return temp ? temp : "";
#endif
        }
}

*************************************************************/

/**********************  Corrected function *****************/

/*     AA 01/26/93
 *     Function Name : x11_get_default
 *     Description:    Get a default resource value
 *     Arguments: dpy - the structure containing the X display
 *                llapp_name - the applicaction name
 *                llres_name - the resource name
 *     Returns: a string that represent the value
 */
char *x11_get_default (dpy, llapp_name, llres_name)
struct LLDisplay *dpy; 
char  *llapp_name, *llres_name;
{
    XrmValue value;
    Bool is_res;
    char *res_pathname, *default_val;
    char *type;
    
    if (dpy->database) {
        res_pathname = (char *) malloc (strlen(llapp_name) +
                                        strlen(llres_name) + 2) ;
        sprintf (res_pathname, "%s.%s", llapp_name, llres_name);
        is_res = XrmGetResource (dpy->database,
                                 res_pathname, "*", &type, &value);
        free (res_pathname);
        if (is_res) {
            if (value.size > MAXRESVALNAME) {
                fprintf (stderr,
                         "x11_get_default : too large value for resource %s\n",
                         llres_name);
#ifdef VMS
                return convert_cstring_to_descriptor("") ;
#else
                return "";
#endif /* VMS */
            }
            bcopy (value.addr, llbuffer, value.size);
#ifdef VMS
            convert_cstring_to_descriptor(llbuffer);
#else
            return llbuffer;
#endif /* VMS */
        } else {
#ifdef VMS
            return convert_cstring_to_descriptor("");
#else
            return "";
#endif /* VMS */
        }
    } else {
        default_val = (char *)XGetDefault (dpy->display,
                                           llapp_name, llres_name);
#ifdef VMS
        return default_val ? convert_cstring_to_descriptor(default_val) :
            convert_cstring_to_descriptor("");
#else
        return default_val ? default_val : "";
#endif /* VMS */
    }
}


void x11_change_bitplane (dpy,plane)
struct LLDisplay *dpy;
long plane;
{
        dpy->bitplane = plane;
}


long x11_lookup_named_color (dpy, name, exactrgb, closestrgb) 
struct LLDisplay *dpy;
char *name; 
struct LLColor *exactrgb,*closestrgb; {
        XColor xcolor1,xcolor2;
        long code ;

        code = XLookupColor (dpy->display, dpy->colormap, name, &xcolor1,&xcolor2) ;
        exactrgb->red = xcolor1.red / 2;
        exactrgb->green = xcolor1.green / 2;
        exactrgb->blue = xcolor1.blue / 2;
        closestrgb->red = xcolor2.red / 2;
        closestrgb->green = xcolor2.green / 2;
        closestrgb->blue = xcolor2.blue / 2;
        return (code == NULL ? -1 : 0) ;
}


long x11_query_color (dpy,pixel,rgb)
struct LLDisplay *dpy;
long pixel; 
struct LLColor *rgb;
{
        long code ;
        XColor xcolor;
        /* 24BP */
        xcolor.pixel = x11_xcolor(dpy,pixel);
        code = XQueryColor(dpy->display,dpy->colormap,&xcolor) ;
        rgb->red =  xcolor.red / 2;
        rgb->blue =  xcolor.blue / 2;
        rgb->green =  xcolor.green / 2;
        return (code == NULL ? -1 : 0) ;
}

/* 24BP */
long x11_query_color_from_pixel (dpy,pixel,rgb)
struct LLDisplay *dpy;
long pixel; 
struct LLColor *rgb;
{
        long code ;
        XColor xcolor;
        xcolor.pixel = pixel;
        code = XQueryColor(dpy->display,dpy->colormap,&xcolor) ;
        rgb->red =  xcolor.red / 2;
        rgb->blue =  xcolor.blue / 2;
        rgb->green =  xcolor.green / 2;
        return (code == NULL ? -1 : 0) ;
}


/**************************************************************************/
/**     Non POrtable                                                   ****/
/**************************************************************************/

/*
  Special for X11 to allocate color for overlay techique
*/

long x11_alloc_cells (dpy,nplanes,ncolors,plane_masks,colors,sorted_colors)
struct LLDisplay *dpy;
long nplanes;
long ncolors;
unsigned long *plane_masks,*colors,*sorted_colors;

{
        long i,j,h,k;
        static char *name[]={"white"};
        XColor xcolor,mycolor;
        
        (void) XAllocColorCells (dpy->display, dpy->colormap, False,
                                 plane_masks, nplanes, colors, ncolors) ;
        if(nplanes) {
                k = (1<<nplanes);
                for(i=0;i<ncolors;i++) { /* for every color */
                        sorted_colors[(k*i)] = colors[i];
                        for(j=1;j<k;j++) {
                                /* for every combinaison of 
                                   plane_masks[0],plane_mask[1],...
                                   */
                                sorted_colors[(k*i) + j] = colors[i];
                                /* first initialise */
                                for(h=0;((1<<h) <= j) && (h < nplanes);h++) 
                                        /* then for every plane intersecting j */
                                        if((1<<h) & j) {
                                                sorted_colors[(k*i) + j] |= plane_masks[h]; 
                                        }
                        }
                }
        }
        
        if (!XParseColor(dpy->display,dpy->colormap,name[0],&xcolor))
                return 0;
        for(i=0;i<(ncolors * k);i++) {
                mycolor = xcolor;
                mycolor.pixel = sorted_colors[i];
                XStoreColor(dpy->display,dpy->colormap,&mycolor);
        }
        return 1;
}


/*
 * A function that changes the bit gravity attribute of a widget window
 * to ForgetGarvity, so that any resize will generate exposure events
 */

x11_forget_window_gravity ( dpy, window)

struct LLDisplay *dpy;
Window window;

{
XSetWindowAttributes xswa;

xswa.bit_gravity = ForgetGravity;

XChangeWindowAttributes (dpy->display, window, CWBitGravity, &xswa);
}
