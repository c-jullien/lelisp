/* *******************************************************************/
/*                         FILE x11share.c                           */
/*                                                                   */
/* x11.o = x11share.c + x11draw.c + x11lib.c                         */
/* Motif and Olit incarnations will use x11share.c and x11draw.c     */
/* *******************************************************************/

/*
 * $Source: /usr/cvs/lelisp/virbitmap/X11/x11share.c,v $
 * $Date: 2017/08/17 04:36:19 $
 * $Revision: 1.17 $
 */

/*********************************************************************/
/* What Must Be Done :                                               */
/*                    use X11r4 function on Window Managers Hints    */
/*                    example XSetNormalHints By XSetWMNormalHints   */
/*********************************************************************/

#include <stdlib.h>
#include <string.h>
#include <x11.h>

#include <unistd.h>
#include <sys/select.h>

long *lispxioerrorsymbol;
long *lispxerrorsymbol;
long *lispnil;
char *default_app_name = NULL;
char *default_app_class = NULL;
extern XEvent XEVENT;

/*
 * function declarations
 */
extern int LLXError(Display *dpy, XErrorEvent *event);
extern long x11_find_xcolor(struct LLColorTable *xcolors, unsigned long pixel);
extern long get_userdata(struct LLDisplay *dpy, Window win);
extern Cursor Our_XCreateFontCursor(Display *dpy, unsigned long which);


/* AA 01/26/93, correction default resource values bug
 * Local variables declaration
 */
#define MAXRESVALNAME 256
static char llbuffer[MAXRESVALNAME];

long SLOW_SET_BYTE = 1;

/*
 *   name:        BadWindowErrorHandler
 *   description: Handle BadWindow Errors when
 *                querying pointer (ilx11_readmouse).
 */
int
BadWindowErrorHandler(Display *dpy, XErrorEvent *event) {
    char msg[BUFSIZ];

    if ((event->error_code == BadWindow) ||
            (event->error_code == BadDrawable)) {
        XGetErrorText(dpy, event->error_code, msg, BUFSIZ);
        fprintf(stderr, "Error code : %s \n\r", msg);
        return (0);
    } else {
        LLXError(dpy, event);
        return (0);
    }
}

int
LLXError(Display *dpy, XErrorEvent *event) {
    char buffer1[BUFSIZ];
    char buffer2[BUFSIZ];
    char message1[3*BUFSIZ];
    char message2[BUFSIZ];
    char num[10];
    static long count = 0;

    XGetErrorText(dpy, event->error_code, buffer1, BUFSIZ);
    sprintf(num, "%d", event->request_code);
    XGetErrorDatabaseText(dpy, "XRequest", num, num, buffer2, BUFSIZ);
    sprintf(message1,
             "[%ld] %s (%d) %s",
             ++count, buffer2, event->minor_code, buffer1);
    sprintf(message2,
             "(%ld . %ld)",
             (event->resourceid) >> 16,
             (event->resourceid) & 0xffff);

    pusharg(LLT_STRING, message1);
    pusharg(LLT_STRING, message2);
    lispcall(LLT_T, 2, (struct LL_SYMBOL *)lispxerrorsymbol);
    return (0);
}

int
LLXIOError(Display *dpy) {
    (void)dpy;

    lispcall(LLT_T, 0, (struct LL_SYMBOL *)lispxioerrorsymbol);
    return (0);
}

int
kill_userdata(struct LLDisplay *dpy, Window win) {
    XDeleteContext(dpy->display, win, dpy->lispcontext);
    return 0;
}

void
x11_initialise(long *llnil, long *llxerror, long *llxioerror) {
    lispnil = llnil;
    lispxioerrorsymbol = llxioerror;
    lispxerrorsymbol = llxerror;
    XSetIOErrorHandler(LLXIOError);
    XSetErrorHandler(LLXError);
}

long
x11_x_release(struct LLDisplay *dpy) {
    return (XVendorRelease(dpy->display));
}

long
x11_x_version(struct LLDisplay *dpy) {
    return (XProtocolVersion(dpy->display));
}

long
x11_x_revision(struct LLDisplay *dpy) {
    return (XProtocolRevision(dpy->display));
}

/* ***************************** Pas teste' ***************************
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
unsigned long
x11_xcolor(struct LLDisplay *dpy, unsigned long pixel) {
    return(dpy->lispcolors ?
           (dpy->lispcolors[pixel] == FREECOLOR ?
            pixel : dpy->lispcolors[pixel])
            : pixel);
}

/* 24BP */
/* debug facility */
void
x11_print_table(struct LLDisplay *dpy) {
    long i;
    for (i=0; i<256; i++) {
        printf("%ld %ld |", dpy->lispcolors[i], i);
    }
}

/* 24BP */
/* debug facility */
void
x11_print_xtable1(struct LLColorTable *xcolors, long margin)
{
    long i;
    if (xcolors->table) {
        printf("\n\r");
        for (i=0; i<256; i++) {
            x11_print_xtable1(&(xcolors->table[i]),margin+3);
        }
    } else if ((xcolors->index!=-1) || xcolors->table) {
        for (i=0; i<margin; i++) {
            printf(" ");
        }
        printf("| %ld %ld |", xcolors->index, (long)xcolors->table);
    }
}

/* 24BP */
/* debug facility */
void
x11_print_xtable(struct LLDisplay *dpy) {
    x11_print_xtable1(dpy->xcolors,0);
}

/* 24BP */
/* Old version of x11_lispcolor (slow) */
long
x11_lispcolor(struct LLDisplay *dpy, unsigned long pixel) {
    long res,i;
    res= -1;
    i=0;
    if (dpy->lispcolors) {
        do {
            if (dpy->lispcolors[i] == pixel) {
                res = i;
            }
            i++;
        } while (res==-1 && i<256);
        return ((res==-1) ? ((long)(pixel & 0xff)): res);
    }
    return (pixel);
}

/* 24BP */
/* Gets the lisp color from the x color in the special hash-table */
long
x11_lispcolor1(struct LLDisplay *dpy, unsigned long pixel) {
    long res;
    res = -1;

    if (dpy->lispcolors) {
        res = x11_find_xcolor(dpy->xcolors, pixel);
        return ((res==-1) ? ((long)(pixel & 0xff)): res);
    }
    return (pixel);
}

/* 24BP */
long
x11_find_xcolor(struct LLColorTable *xcolors, unsigned long pixel) {
    return
        (xcolors->table ?
         x11_find_xcolor(&(xcolors->table[pixel & 0xff]), pixel >> 8)
         : xcolors->index);
}

long
x11_lispcolorp(struct LLDisplay *dpy, unsigned long pixel) {
    long res, i;
    res= -1;
    if (dpy->lispcolors) {
        for (i=0; i<255; i++)
            if (dpy->lispcolors[i]==pixel) {
                res=i;
            }
    } else {
        res= (long) pixel;
    }
    return (res);
}

unsigned long
x11_xcolorp(struct LLDisplay *dpy, long index) {
    if (dpy->lispcolors) {
        return (dpy->lispcolors[index]);
    } else {
        return ((unsigned long) index);
    }
}

/*
  This function is always called only once to initialise the display
*/
void
x11_init_pixels(struct LLDisplay *dpy, long fore, long back, long planemask) {
    unsigned long comb;
    unsigned long plane;

    (void)planemask;

    /* 24BP */
    dpy->ForePixel = x11_xcolor(dpy, fore);
    dpy->BackPixel = x11_xcolor(dpy, back);
    XSetForeground(dpy->display, dpy->fullgc, x11_xcolor(dpy,fore));
    XSetBackground(dpy->display, dpy->fullgc, x11_xcolor(dpy,back));
    /*      dpy->monoplane = planemask; duplicated with bitplane, and false ...*/
    comb = dpy->ForePixel ^ dpy->BackPixel;
    if (! comb) {
        fprintf(stderr, "foreground and background are identical.\n\r");
        plane = 1;
    } else {
        for (plane = 1; ! (comb & plane); plane *= 2)
            ;
    }

    dpy->bitplane = plane;
    dpy->wm_moved = XInternAtom(dpy->display,"WM_MOVED",0);
    dpy->configure_denied = XInternAtom(dpy->display,"WM_CONFIGURE_DENIED",0);
}

void
x11_bitmap_flush(struct LLDisplay *dpy) {
    XFlush(dpy->display);
}

void
x11_bitmap_sync(struct LLDisplay *dpy) {
    XSync(dpy->display, FLUSH);
}

void
x11_bitmap_refresh(struct LLDisplay *dpy, Cursor cursor) {
    Window win;
    XSetWindowAttributes xswa;

    xswa.override_redirect = True;
    xswa.cursor = cursor;
    win = XCreateWindow(dpy->display, dpy->root, 0, 0, 9999, 9999, 0,
                         dpy->depth, InputOutput, dpy->visual,
                         /* 24BP */
                         /*CopyFromParent,*/
                         CWOverrideRedirect|CWCursor, &xswa);
    XMapWindow(dpy->display, win);
    XFlush(dpy->display);
    XDestroyWindow(dpy->display, win);
    XFlush(dpy->display);
}

Window
x11_root_window(struct LLDisplay *dpy) {
    return (dpy->root);
}

void
x11_pop_window(struct LLDisplay *dpy, Window window) {
    XRaiseWindow(dpy->display, window);
}

void
x11_move_behind_window(struct LLDisplay *dpy, Window window1) {
    XLowerWindow(dpy->display, window1);
}
/* correction du bug du kill-window sur rtx11 */

void
x11_kill_ll_window(struct LLDisplay *dpy, Window window, GC gc) {
    kill_userdata(dpy, window);
    XFreeGC(dpy->display, gc);
}

long
x11_find_window(struct LLDisplay *dpy, long x, long y) {
    Window w, w1;
    int x1, y1;
    int xi, yi;    /* XTranslateCoordinate needs an &int */

    x1= x;
    y1= y;
    xi = x;
    yi = y;
    w = dpy->root;

    do {
        w1= w;
        XTranslateCoordinates(dpy->display, dpy->root, w1,
                               x1, y1, &xi, &yi, &w);
    } while (w != 0);
    return (get_userdata(dpy, w1));
}

void
x11_map_window(struct LLDisplay *dpy, Window window, long x, long y, long *lxy)
{
    int x1, y1;
    Window w;
    int lx, ly;  /* XTranslateCoordinates needs an &int */
    x1= x;
    y1= y;
    XTranslateCoordinates(dpy->display, dpy->root, window,
                           x1, y1, &lx, &ly, &w);
    lxy[0] = ((long)lx) & 0xffff;
    lxy[1] = ((long)ly) & 0xffff;
}

void
x11_flush_event(struct LLDisplay *dpy) {
    XSync(dpy->display, DISCARD);
}

int
x11_grab_event(struct LLDisplay *dpy, Window window, Cursor cursor) {
    return (XGrabPointer(dpy->display, window, False,ButtonPressMask | ButtonReleaseMask | ButtonMotionMask | EnterWindowMask | LeaveWindowMask | PointerMotionMask,GrabModeAsync, GrabModeAsync, None, cursor, CurrentTime));
}

void
x11_ungrab_event(struct LLDisplay *dpy) {
    XUngrabPointer(dpy->display, CurrentTime);
}

long
x11_wait_in_socket(long read_fds) {
    int nb_fds;  /* select returns an int */

#if     defined(__linux__) || defined(FREEBSD) || defined(_POSIX_SOURCE)
    nb_fds = select(32, (fd_set *)&read_fds, 0, 0, 0);
#else
    nb_fds = select(32, &read_fds, 0, 0, 0);
#endif
    return (nb_fds > 0 ? (long) read_fds : (long) nb_fds);
}

void
x11_read_mouse(struct LLDisplay *dpy, struct LLEvent *event) {
    Window w, w1, w2;
    int x, y, gx, gy;
    unsigned int state;
    char c;
    XWindowAttributes win_attr;
    XErrorHandler previous_handler;

    w2 = dpy->root;
    /* -- [ AA 18/05/93 ]
     * To avoid X BadWindow Error when a window is
     * destroyed while trying to query the pointer on
     * some subwindow in its hierarchy.
     */
    previous_handler = XSetErrorHandler(BadWindowErrorHandler);
    do {
        w = w2;
        /* -- [ AA 05/05/93 ]
         * Break the loop when a window is unmapped or
         * destroyed while trying to query the pointer on
         * some subwindow in its hierarchy.
         */
        if (!XGetWindowAttributes(dpy->display, w, &win_attr)) {
            w2 = 0;
            w = dpy->root;
        } else {
            if (win_attr.map_state == IsViewable)
                XQueryPointer(dpy->display, w, &w1, &w2,
                               &gx, &gy, &x, &y, &state);
            else {
                w2 = 0;
                w = dpy->root;
            }
        }
    } while (w2 != 0);
    /* -- [ AA 18/05/93 ]
     * Restore the previous X Error handler.
     */
    XSetErrorHandler (previous_handler);
    event->window = (long *) get_userdata(dpy, w);
    event->gx = ((long)gx) & 0xffff;
    event->gy = ((long)gy) & 0xffff;
    event->x = ((long)x) & 0xffff;
    event->y = ((long)y) & 0xffff;
    c = BUTTON(BIT(state, Button1Mask),
               BIT(state, Button2Mask),
               BIT(state, Button3Mask));
    event->detail = c == 0 ? 0 : (1 + DETAIL(c, state)) & 0xffff;
}

void
parse_event(struct LLDisplay *dpy, struct LLEvent *llevent, XEvent *xevent) {
    long state;
    char buffer[BUFFERSIZE];
    KeySym funkey;
    static char c;
    static int realx;
    static int realy;
    static Window childwindow;

    /* Atom wm_moved; For decwindows */
    llevent->code = xevent->type & 0xffff;
    switch (xevent->type) {
    case KeyPress:
    case KeyRelease:
        llevent->window = (long *) get_userdata
                         (dpy, xevent->xkey.window);
        llevent->gx = xevent->xkey.x_root & 0xffff;
        llevent->gy = xevent->xkey.y_root & 0xffff;
        llevent->x = xevent->xkey.x & 0xffff;
        llevent->y = xevent->xkey.y & 0xffff;
        llevent->b = xevent->xkey.state;
#if IBMRT || AIX386
        {
          static char *lookup;
          int nbytes;

          lookup = (char *) XLookupMapping(&(xevent->xkey), &nbytes);
          if (nbytes == 1) {
            llevent->detail = lookup[0];
          }
        } else {
#endif /* IBMRT || AIX386 */
            if (0 != XLookupString(&(xevent->xkey), buffer, BUFFERSIZE,
                                    &funkey, NULL))
                llevent->detail = (long)
                                  (unsigned char) buffer[0];
            else {
                /*
                 * Manage just the FunctionKeyPress event
                 */
                if (xevent->type == KeyPress) {
                    llevent->code = FUNKEYCODE;
                } else {
                    llevent->code = 0;
                }

                llevent->detail = funkey & 0xffff;
            }
#if IBMRT || AIX386
        }
#endif /* IBMRT || AIX386 */
        break;
    case ButtonPress:
    case ButtonRelease:
        llevent->window = (long *) get_userdata
                         (dpy, xevent->xbutton.window);
        llevent->gx = xevent->xbutton.x_root & 0xffff;
        llevent->gy = xevent->xbutton.y_root & 0xffff;
        llevent->x = xevent->xbutton.x & 0xffff;
        llevent->y = xevent->xbutton.y & 0xffff;
        state = xevent->xbutton.state;
        llevent->b = xevent->xbutton.state;
        llevent->detail = DETAIL(xevent->xbutton.button, state)
                          & 0xffff;
        break;
    case MotionNotify:
        llevent->window = (long *) get_userdata
                         (dpy, xevent->xmotion.window);
        llevent->gx = xevent->xmotion.x_root & 0xffff;
        llevent->gy = xevent->xmotion.y_root & 0xffff;
        llevent->x = xevent->xmotion.x & 0xffff;
        llevent->y = xevent->xmotion.y & 0xffff;
        state = xevent->xmotion.state;
        if (0 != (c = BUTTON(BIT(state, Button1Mask),
                             BIT(state, Button2Mask),
                             BIT(state, Button3Mask)))) {
            llevent->detail = DETAIL(c, state) & 0xffff;
        }
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
        if (0 != (c = BUTTON(BIT(state, Button1Mask),
                             BIT(state, Button2Mask),
                             BIT(state, Button3Mask)))) {
            llevent->detail = DETAIL(c, state) & 0xffff;
        }
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

        if (!xevent->xconfigure.send_event)
            /* Is this a real event or a synthetic event
               see the ICCCM guide
               */
            /* In this Case we calculate Root coordinates
               of our Top window
               */
            if (llevent->window != lispnil) {
                XTranslateCoordinates(dpy->display,xevent->xconfigure.window,dpy->root,0,0,&realx,&realy,&childwindow);
                llevent->gx =  ((long)realx) & 0xFFFF;
                llevent->gy =  ((long)realy) & 0xFFFF;
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
        if (dpy->configure_denied &&
                (xevent->xclient.message_type == dpy->configure_denied)) {
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
                                  tmproot, tmpx,
                                  tmpy,&tmp2x,&tmp2y,
                                  &tmpchild);
            llevent->x = tmp2x;
            llevent->y = tmp2y;
            llevent->w = width;
            llevent->h = height;
            llevent->b = border_width;
            llevent->code = ConfigureNotify;
        } else {
            if (dpy->wm_moved &&
                    (xevent->xclient.message_type == dpy->wm_moved)) {
                /* This is A Configure NOtify */
                if (xevent->xclient.format == 16) {
                    llevent->x=xevent->xclient.data.s[0];
                    llevent->y=xevent->xclient.data.s[1];
                    llevent->code=ConfigureNotify & 0xffff;
                }
            } else {
                if ((Atom)(xevent->xclient.data.l[0]) == dpy->delete) {
                    llevent->code = DestroyNotify;
                }
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

long
set_userdata(struct LLDisplay *dpy, Window win, long lisp) {
    if (XSaveContext(dpy->display, win, dpy->lispcontext, (XPointer) lisp) != 0) {
        perror(MESSAGE4);
        return (0);
    }
    return (1);
}

long
get_userdata(struct LLDisplay *dpy, Window win) {
    long lisp;
    if (XFindContext(dpy->display, win, dpy->lispcontext, (XPointer *)&lisp)
            != 0) {
        lisp = (long) lispnil;
    }
    return (lisp);
}

/* ************************************************************************* */

GC
x11_default_gc(struct LLDisplay *dpy) {
    return dpy->fullgc;
}

Pixmap
x11_create_bitmap(struct LLDisplay *dpy, unsigned long w, unsigned long h) {
    Pixmap pixmap;

    if (w <= 0) {
        w = 1;
    }
    if (h <= 0) {
        h = 1;
    }
    pixmap = XCreatePixmap(dpy->display, dpy->root, w, h, dpy->depth);
    return (pixmap);
}

void
x11_kill_bitmap(struct LLDisplay *dpy, Pixmap bitmap) {
    XFreePixmap(dpy->display, bitmap);
}

void
x11_bitblit(struct LLDisplay *dpy,
            Drawable pixmap1,
            Drawable pixmap2,
            long x1,
            long y1,
            long x2,
            long y2,
            unsigned long w,
            unsigned long h,
            GC gc) {
    if ((w > 0) && (h > 0)) {
        XCopyArea(dpy->display, pixmap2, pixmap1, gc, x2, y2, w, h, x1, y1);
    }
}

void
x11_set_bit_line(struct LLDisplay *dpy,
                 Drawable pixmap,
                 long x,
                 long y,
                 char *string,
                 long w,
                 GC gc) {
    char *olddata;

    if (w > 0) {
        olddata = dpy->setimage->data;
        dpy->setimage->data = string;
        dpy->setimage->byte_order = MSBFirst;
        dpy->setimage->bitmap_unit = 8;
        dpy->setimage->bitmap_bit_order = MSBFirst;
        XPutImage(dpy->display, pixmap, gc, dpy->setimage, 0, 0, x, y, w, 1);
        dpy->setimage->data = olddata;
    }
}

#ifdef SVR4I386
XImage*
get_image(struct LLDisplay *dpy,
          Drawable drawable,
          long x,
          long y,
          long w,
          long h) {
    Pixmap pixmap = (Pixmap)drawable;
    Pixmap tmppixmap;
    XImage *image;
    tmppixmap = XCreatePixmap(dpy->display, dpy->root, w, h, dpy->depth);
    XCopyArea(dpy->display, pixmap, tmppixmap, dpy->fullgc, x, y, w, h, 0, 0);
    image = XGetImage(dpy->display, tmppixmap, 0, 0, w, h, AllPlanes, ZPixmap);
    XFreePixmap(dpy->display, tmppixmap);
    return image;
}
#else
XImage*
get_image(struct LLDisplay *dpy,
          Drawable pixmap,
          long x,
          long y,
          long w,
          long h) {
    return XGetImage(dpy->display, pixmap, x, y, w, h, AllPlanes, ZPixmap);
}
#endif

/*
  New get_bit_line : DOES'NT NEED TO REVERSE BIT when MSB First
*/

void
x11_get_bit_line(struct LLDisplay *dpy,
                 Drawable pixmap,
                 long x,
                 long y,
                 char *string,
                 long w) {
    XImage *getimage;
    register char *ptr;
    register long i, c, b;
    unsigned long bit;
    if (w > 0) {
        getimage = get_image(dpy, pixmap, x, y, w, 1);
        ptr = string;
        c = 0;
        b = 128;
        for (i = 0; i < w;) {
            bit = XGetPixel(getimage, i, 0);
            if (bit != dpy->BackPixel) {
                c |= b;
            }
            b >>= 1;
            if (!(++i & 7)) {
                *(ptr++) = c;
                c = 0;
                b = 128;
            }
        }
        if (i & 7) {
            *ptr = c;
        }
        XDestroyImage (getimage);
    }
}

long
x11_bmref(struct LLDisplay *dpy, Drawable pixmap, long x, long y) {
    XImage *getimage;
    unsigned long bit;
    long i;

    getimage = get_image(dpy, pixmap, x, y, 1, 1);
    bit = XGetPixel(getimage, 0, 0);

    if (bit == dpy->BackPixel) {
        i = 0;
    } else {
        i = 1;
    }
    XDestroyImage(getimage);
    return i;
}

void
x11_bmset(struct LLDisplay *dpy,
          Drawable pixmap,
          long x,
          long y,
          long bit,
          GC gc) {
    XPutPixel(dpy->setimage, 0, 0, bit);
    XPutImage(dpy->display, pixmap, gc, dpy->setimage, 0, 0, x, y, 1, 1);
}

void
x11_set_slow_set_byte_flag(long flag) {
    SLOW_SET_BYTE = flag;
}

void
x11_set_byte_line(struct LLDisplay *dpy,
                  Drawable pixmap,
                  long x,
                  long y,
                  char *string,
                  long w) {
    char *olddata;
    unsigned long * data;
    long i;
    int saveBPP, saveBO;
    if (w > 0) {
        olddata = dpy->setcolorimage->data;
        /* Change locally only to allow SLOW_SET_BYTE modification */
        /* There can be problems too with byteset and MSBFIRST */
        saveBO=dpy->setcolorimage->byte_order;
        dpy->setcolorimage->byte_order = MSBFirst;
        saveBPP=dpy->setcolorimage->bits_per_pixel;
        if (dpy->lispcolors) {
            dpy->setcolorimage->bits_per_pixel = 32;
        }
        if (SLOW_SET_BYTE) {
            register long i;
            for (i = 0; i < w; i ++)
                XPutPixel(dpy->setcolorimage, i, 0,
                           /* 24BP */
                           (unsigned long)x11_xcolor(dpy, string[i]));
        } else {
            dpy->setcolorimage->bits_per_pixel = 8;
            if (dpy->lispcolors) {
                data=(unsigned long *)dpy->setcolorimage->data;
                for (i = 0; i < w; i ++) {
			data[i]=dpy->lispcolors[(unsigned int)string[i]];
                }
            } else {
                dpy->setcolorimage->data = string;
            }
        }

        XPutImage(dpy->display, pixmap, dpy->fullgc,
                   dpy->setcolorimage,
                   0, 0, x, y, w, 1);
        dpy->setcolorimage->byte_order = saveBO;
        dpy->setcolorimage->bits_per_pixel = saveBPP;
        dpy->setcolorimage->data = olddata;/* Don't loose allocated
                                                data */
    }
}

void
x11_get_byte_line(struct LLDisplay *dpy,
                  Drawable pixmap,
                  long x,
                  long y,
                  char *string,
                  long w) {
    XImage *getimage;
    long i;
    if (w > 0) {
        getimage = get_image(dpy, pixmap, x, y, w, 1);
        for (i = 0; i < w; i++) {
            /* 24BP */
            string[i] = x11_lispcolor(dpy, XGetPixel(getimage, i, 0));
        }
        XDestroyImage(getimage);
    }
}

long
x11_byteref(struct LLDisplay *dpy,
            Drawable pixmap,
            long x,
            long y) {
    XImage *getimage;
    unsigned long bit;

    getimage = get_image(dpy, pixmap, x, y, 1, 1);
    bit = XGetPixel(getimage, 0, 0);

    XDestroyImage(getimage);
    /* 24BP */
    return (x11_lispcolor(dpy, bit));
}

void
x11_byteset(struct LLDisplay *dpy,
            Drawable pixmap,
            long x,
            long y,
            long bit) {
    /* 24BP */
    XPutPixel(dpy->setcolorimage, 0, 0, x11_xcolor(dpy,bit));
    XPutImage(dpy->display, pixmap, dpy->fullgc, dpy->setcolorimage,
               0, 0, x, y, 1, 1);
}

Pixmap
x11_pixmap_to_bitmap(struct LLDisplay *dpy,
                     Pixmap pixmap,
                     long w,
                     long h) {
    Pixmap bitmap;
    GC monoplanegc;
    XGCValues values;

    bitmap = XCreatePixmap(dpy->display, dpy->root, w, h, 1);
    values.graphics_exposures = False;
    monoplanegc = XCreateGC(dpy->display, bitmap, GCGraphicsExposures,
                             &values);
    XCopyPlane(dpy->display, pixmap, bitmap, monoplanegc,
                0, 0, w, h, 0, 0, dpy->bitplane);
    XFreeGC(dpy->display, monoplanegc);
    return (bitmap);
}

Cursor
x11_create_cursor(struct LLDisplay *dpy, long cursor) {
    Cursor xcursor;
    /*
    Forget this today One day it will be corrected in all X on all machines
            if (dpy->release > 2)
                    xcursor = XCreateFontCursor(dpy->display, cursor);
            else
    */
    xcursor = Our_XCreateFontCursor(dpy->display, cursor);
    return xcursor;

}

void
x11_recolor_cursor(struct LLDisplay *dpy,
                   Cursor cursor,
                   struct LLColor *forecol,
                   struct LLColor *backcol) {
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

Cursor x11_make_cursor(struct LLDisplay *dpy,
                       Pixmap pixmap1,
                       Pixmap pixmap2,
                       long fgr,
                       long fgg,
                       long fgb,
                       long bgr,
                       long bgg,
                       long bgb,
                       long x,
                       long y) {
    XColor fore, back;

    fore.red = 2*fgr;
    fore.green = 2*fgg;
    fore.blue = 2*fgb;
    back.red = 2*bgr;
    back.green = 2*bgg;
    back.blue = 2*bgb;
    return (XCreatePixmapCursor(dpy->display, pixmap1, pixmap2,
                                 &fore, &back, x, y));
}

void
x11_set_cursor(struct LLDisplay *dpy, Window window, Cursor cursor) {
    XDefineCursor(dpy->display, window, cursor);
}

void
x11_move_cursor(struct LLDisplay *dpy, long x2, long y2) {
    XWarpPointer(dpy->display, None, dpy->root, 0, 0, 0, 0, x2, y2);
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

void
x11_alloc_xcolortable(struct LLDisplay *dpy,
                      struct LLColorTable *xcolors,
                      unsigned long pixel,
                      long res) {
    long i;
    long ind= pixel & 0xff;
    long old;
    if (xcolors->table != 0) {
        /* go in sub table */
        x11_alloc_xcolortable(dpy, &(xcolors->table[ind]), pixel>>8, res);
    } else if ((xcolors->index==-1)||(xcolors->index==res)) {
        /* find free location */
        xcolors->index=res;
    } else {
        /* somebody's here already, */
        /* allocate sub table */
        xcolors->table= (struct LLColorTable *)
                        malloc(256*sizeof(struct LLColorTable));
        for (i=0; i<256; i++) {
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
long
x11_make_lispcolor(struct LLDisplay *dpy, unsigned long pixel) {
    long res = -1;
    long i=0;
    /* update the L->X and X->L tables */
    do {
        if ((dpy->lispcolors[i] == FREECOLOR)||
               (dpy->lispcolors[i] == pixel)) {
            res=i;
            dpy->lispcolors[i]=pixel;
        }
        i++;
    } while ((i<256) && (res==-1));
    if (res ==-1) {
        return (-1);
    }
    x11_alloc_xcolortable(dpy,dpy->xcolors,pixel,res);
    return (res);
}

/* 24BP */
/* we must dealloc the X->L table when we kill colors
   or when we close the connection. */
void
x11_dealloc_xcolortable(struct LLDisplay *dpy,
                        struct LLColorTable *xcolors,
                        unsigned long pixel,
                        long res) {
    long i;
    long empty=1;
    if (xcolors->table != 0) {
        /* go in sub table */
        x11_dealloc_xcolortable(dpy,
                                &xcolors->table[pixel & 0xff],
                                pixel >> 8,
                                res);
        /* find if the vector is empty */
        for (i=0; i<256; i++)
            if ((xcolors->table[i].table) ||
                    (xcolors->table[i].index!=-1)) {
                empty=0;
            }
        if (empty==1) {
            /* then free the vector */
            free(xcolors->table);
            xcolors->index= -1;
            xcolors->table=0;
        }
    } else {
        if (xcolors->index==res)
            /* it was here */
        {
            xcolors->index= -1;
        }
    }
}

long
x11_make_color(struct LLDisplay *dpy,
               long r,
               long g,
               long b,
               struct LLColor *color) {
    XColor xcolor;
    long pixel;
    xcolor.red   = 2*r;
    xcolor.green = 2*g;
    xcolor.blue  = 2*b;
    if (XAllocColor(dpy->display, dpy->colormap, &xcolor) == 0) {
        return (-1);
    }
    color->red   = xcolor.red / 2;
    color->green = xcolor.green / 2;
    color->blue  = xcolor.blue / 2;
    /* 24BP */
    if (dpy->lispcolors) {
        pixel= x11_make_lispcolor(dpy, xcolor.pixel);
        return (pixel);
    } else {
        return (xcolor.pixel);
    }
}

long
x11_make_mutable_color(struct LLDisplay *dpy,
                       long r,
                       long g,
                       long b) {
    XColor xcolor;
    long pixel;
    if (XAllocColorCells(dpy->display, dpy->colormap,
                          0, 0, 0, &xcolor.pixel, 1) == 0) {
        return (-1);
    }

    xcolor.red = 2*r;
    xcolor.green= 2*g;
    xcolor.blue = 2*b;
    xcolor.flags = DoRed|DoGreen|DoBlue;
    XStoreColor(dpy->display, dpy->colormap, &xcolor);

    /* 24BP */
    if (dpy->lispcolors) {
        pixel= x11_make_lispcolor(dpy, xcolor.pixel);
        return (pixel);
    } else {
        return (xcolor.pixel);
    }
}

long
x11_make_named_color(struct LLDisplay *dpy,
                     char *name,
                     struct LLColor *color) {
    XColor xcolor;
    long pixel;
    if (XParseColor(dpy->display, dpy->colormap, name, &xcolor) == 0) {
        return (-1);
    }
    if (XAllocColor(dpy->display, dpy->colormap, &xcolor) == 0) {
        return (-2);
    }
    color->red = xcolor.red / 2;
    color->green = xcolor.green / 2;
    color->blue = xcolor.blue / 2;
    /* 24BP */
    if (dpy->lispcolors) {
        pixel= x11_make_lispcolor(dpy, xcolor.pixel);
        return (pixel);
    } else {
        return (xcolor.pixel);
    }
}

void
x11_kill_color(struct LLDisplay *dpy, long pix) {
    XColor color;
    /* 24BP */
    if (dpy->lispcolors) {
        color.pixel = dpy->lispcolors[pix];
        x11_dealloc_xcolortable(dpy,dpy->xcolors,dpy->lispcolors[pix],
                                pix);
        dpy->lispcolors[pix]= FREECOLOR;
    } else {
        color.pixel = (unsigned long) pix;
    }
    XFreeColors(dpy->display, dpy->colormap, (unsigned long *) &color, 1, 0);
}

long
x11_color_component(struct LLDisplay *dpy,
                    long pix,
                    long red,
                    long green,
                    long blue,
                    long flag) {
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
    XStoreColor(dpy->display, dpy->colormap, &color);
    return 1;
}

#define CURSORFONT "cursor"

Cursor
Our_XCreateFontCursor(Display *dpy, unsigned long which) {
    static XColor foreground = { 0,     0,     0,     0, 0, 0 };
    static XColor background = { 0, 65535, 65535, 65535, 0, 0 };
    static Font cfont;
    Cursor cursor;
    cfont = XLoadFont(dpy, CURSORFONT);
    if (!cfont) {
        return (Cursor) 0;
    }
    cursor = XCreateGlyphCursor(dpy, cfont, cfont, which, which + 1,
                                 &foreground, &background);
    return cursor;
}

void
x11_synchronize(struct LLDisplay *dpy, long onoff) {
    XSynchronize(dpy->display, onoff);
}

Window
x11_create_transparentwindow(struct LLDisplay *dpy,
                             long win,
                             long x,
                             long y,
                             long w,
                             long h,
                             long visible,
                             long eventmask,
                             Window father) {
    Window window;
    XSetWindowAttributes attributes;

    if (w <= 0) {
        w = 1;
    }
    if (h <= 0) {
        h = 1;
    }
    attributes.event_mask = 0;
    window = XCreateWindow(dpy->display, father, x, y, w, h, 0, 0,
                            InputOnly, CopyFromParent,
                            SUBWINDOWMASK, &attributes);
    if (visible) {
        XMapWindow(dpy->display, window);
    }
    if (!eventmask) {
        XSelectInput(dpy->display, window, dpy->subeventmask);
    } else {
        XSelectInput(dpy->display, window, eventmask);
    }
    if (visible) {
        XMapWindow(dpy->display,window);
    }
    return ((set_userdata(dpy, window, win)) ? window : (Window) NULL);
}

void
x11_move_window(struct LLDisplay *dpy,
                Window window,
                long x,
                long y) {
    XMoveWindow(dpy->display,window,x,y);
}

void
x11_resize_window(struct LLDisplay *dpy,
                  Window window,
                  long w,
                  long h) {
    if (w <= 0) {
        w = 1;
    }
    if (h <= 0) {
        h = 1;
    }
    XResizeWindow(dpy->display,window,w,h);
}

void
x11_moveresize_window(struct LLDisplay *dpy,
                      Window window,
                      long x,
                      long y,
                      long w,
                      long h) {
    if (w <= 0) {
        w = 1;
    }
    if (h <= 0) {
        h = 1;
    }
    XMoveResizeWindow(dpy->display,window,x,y,w,h);
}

void
x11_topmove_window(struct LLDisplay *dpy,
                   Window window,
                   long x,
                   long y,
                   long mask) {
    XWindowChanges changes;
    changes.x = x;
    changes.y = y;

    (void)mask;

    XConfigureWindow(dpy->display,window,CWX|CWY,&changes);
}

void
x11_topresize_window(struct LLDisplay *dpy,
                     Window window,
                     long w,
                     long h,
                     long mask) {
    XWindowChanges changes;

    (void)mask;

    if (w <= 0) {
        w = 1;
    }
    if (h <= 0) {
        h = 1;
    }
    changes.width = w;
    changes.height = h;

    XConfigureWindow(dpy->display,window,CWWidth|CWHeight,&changes);
}

void
x11_topmoveresize_window(struct LLDisplay *dpy,
                         Window window,
                         long x,
                         long y,
                         long w,
                         long h,
                         long mask) {
    XWindowChanges changes;
    changes.x = x;
    changes.y = y;

    (void)mask;

    if (w <= 0) {
        w = 1;
    }
    if (h <= 0) {
        h = 1;
    }
    changes.width = w;
    changes.height = h;
    XConfigureWindow(dpy->display,window,CWWidth|CWHeight|CWX|CWY,&changes);
}

void
x11_topchangewindow_border(struct LLDisplay *dpy,
                           Window window,
                           long border,
                           long mask) {
    XWindowChanges changes;
    changes.border_width = border;

    (void)mask;

    XConfigureWindow(dpy->display,window,CWBorderWidth,&changes);
    /*XSetWindowBorderWidth(dpy->display, window, border);*/
}

void
x11_changewindow_border(struct LLDisplay *dpy,
                        Window window,
                        long border) {
    XSetWindowBorderWidth(dpy->display, window, border);
}

void
x11_changewindow_bordercolor(struct LLDisplay *dpy,
                             Window window,
                             long color) {
    XSetWindowAttributes attributes;
    /* 24BP */
    attributes.background_pixel  = x11_xcolor(dpy,color);
    XChangeWindowAttributes(dpy->display,window,CWBorderPixel,&attributes);
    /*
            XSetWindowBorder(dpy->display, window, color);
    */
}

/*
  The lelisp fix is limited de 15  bits so we need to build long gt 15 bits
*/
long
x11_build_mask(long *vect, long nb) {
    long mask=0;
    long i;
    for (i=0; i<nb; i++) {
        mask |= (1 << vect[i]);
    }
    /*      mask |= OwnerGrabButtonMask; For opnewindows */
    return mask;
}

void
x11_changeeventmask_window(struct LLDisplay *dpy, Window window, long mask) {
    XSelectInput(dpy->display,window,mask);
}

void
x11_changelongmask_window(struct LLDisplay *dpy, Window window, long mask) {
    XSelectInput(dpy->display,window,mask);
}

void
x11_change_title(struct LLDisplay *dpy, Window window, char *title) {
    XStoreName(dpy->display, window, title);
}

void
x11_change_icontitle(struct LLDisplay *dpy, Window window, char *title) {
    XSetIconName(dpy->display, window, title);
}

GC
x11_create_graph_env(struct LLDisplay *dpy,
                     Window window,
                     XFontStruct *font,
                     long width,
                     long style,
                     long mode,
                     Pixmap pattern) {
    GC gc;
    XGCValues values;

    values.foreground = dpy->ForePixel;
    values.background = dpy->BackPixel;
    values.line_width = width;
    values.line_style = style;
    values.tile = pattern;
    values.font = font->fid;
    values.function = mode;
    values.plane_mask = AllPlanes;
    values.fill_style = FillSolid;
    values.graphics_exposures = False;  /* The only difference */
    values.subwindow_mode = ClipByChildren;
    gc = XCreateGC(dpy->display, window, GCMASK, &values);
    return (gc);
}

GC
x11_new_create_graph_env(struct LLDisplay *dpy,
                         Drawable window,
                         XFontStruct *font,
                         long width,
                         long style,
                         Pixmap pattern,
                         long  mode,
                         long fg,
                         long bg,
                         long subwinmode) {
    GC gc;
    XGCValues values;
    XSetWindowAttributes wa;

    /* 24BP */
    values.foreground = x11_xcolor(dpy,fg);
    values.background = x11_xcolor(dpy,bg);
    values.line_width = width;
    values.line_style = style;
    values.tile = pattern;
    values.font = font->fid;
    values.function = mode;
    values.plane_mask = AllPlanes;
    values.fill_style = FillSolid;
    /* To receive Expose if bitblit fails */
    values.graphics_exposures = True;
    values.subwindow_mode = subwinmode;
    /*IncludeInferiors;*/
    /* Create a fake root-window on this visual */
    if (dpy->depth !=
            XDefaultDepth(dpy->display, XDefaultScreen(dpy->display)) &&
            window == dpy->root) {
        wa.colormap = dpy->colormap;
        wa.border_pixel = 0;
        window = XCreateWindow(dpy->display,dpy->root,0,0,1,1,0,dpy->depth,
                               InputOutput,dpy->visual,
                               CWBorderPixel|CWColormap,
                               &wa);
    }
    gc = XCreateGC(dpy->display, window, GCMASK, &values);
    return (gc);
}

void
x11_free_graph_env(struct LLDisplay *dpy, GC gc) {
    XFreeGC(dpy->display, gc);
}

long
x11_imagebyteorder(struct LLDisplay *dpy) {
    long res;
    res = XImageByteOrder(dpy->display);
    if (res == LSBFirst) {
        return 1;
    } else {
        return 2;
    }
}

long
x11_bitmapbitorder(struct LLDisplay *dpy) {
    long res;
    res = XBitmapBitOrder(dpy->display);
    if (res == LSBFirst) {
        return 1;
    } else {
        return 2;
    }
}

void
x11_seticon_pixmap(struct LLDisplay *dpy, Window window, Pixmap pixmap) {
    XWMHints hints;
    hints.icon_pixmap = pixmap;
    hints.flags = IconPixmapHint;
    XSetWMHints(dpy->display,window,&hints);
}

void
x11_set_window_pixmap(struct LLDisplay *dpy, Window window, Pixmap pixmap) {
    XSetWindowBackgroundPixmap(dpy->display,window,pixmap);
}

void
x11_setwindow_state(struct LLDisplay *dpy, Window window, long state) {
    XClientMessageEvent client;

    if (state) {
#ifdef X11r4
        XIconifyWindow(dpy->display,window,DefaultScreen(dpy->display));
#else
        client.type = ClientMessage;
        client.window = window;
        client.display=dpy->display;

        client.message_type = XInternAtom(dpy->display,"WM_CHANGE_STATE",0);
        client.format = 32;
        client.data.l[0] = IconicState;
        XSendEvent(dpy->display, dpy->root, False, SubstructureRedirectMask|SubstructureNotifyMask, (XEvent *) &client);
#endif
    } else {
        XMapWindow(dpy->display,window);
    }

}

char *
x11_fetch_bytes(struct LLDisplay *dpy, long *vlength) {
    char *bytes;
    int l=0;
    bytes = XFetchBytes(dpy->display,&l);
    (*vlength) = l;
    if (l) {
        return bytes;
    } else {
        return "";
    }
}

void
x11_bytes_to_llstring(char *bytes, char *llstring, long length) {
    (void)memcpy(llstring, bytes, length);
    XFree(bytes);
}

long
x11_depth(struct LLDisplay *dpy) {
    /* return XDefaultDepth(dpy->display,XDefaultScreen(dpy->display));*/
    /* 24BP */
    return(dpy->depth);
}

long
x11_get_format(void) {
    XClientMessageEvent *event;
    event = (XClientMessageEvent *) &XEVENT;

    return event->format;
}

char *
x11_get_data_string(void) {
    XClientMessageEvent *event;
    event = (XClientMessageEvent *) &XEVENT;
    return event->data.b;
}

char *
x11_get_message_type(struct LLDisplay *dpy) {
    XClientMessageEvent *event;
    Atom message;
    static char s[256];
    char *ss;
    event = (XClientMessageEvent *) &XEVENT;
    message = event->message_type;
    ss = XGetAtomName(dpy->display,message);
    if (ss) {
        ss[256] =0;
        strcpy(s,ss);
        XFree(ss);
        return s;
    } else {
        return "";
    }
}

void
x11_get_data_long(long *v) {
    XClientMessageEvent *event;
    long i;
    event = (XClientMessageEvent *) &XEVENT;
    for (i=0; i<5; i++) {
        v[i] = event->data.l[i];
    }
}

void
x11_get_data_short(long *v) {
    XClientMessageEvent *event;
    long i;
    event = (XClientMessageEvent *) &XEVENT;
    for (i = 0; i < 10; i++) {
        v[i] = event->data.s[i];
    }
}

void
x11_change_gc_values(struct LLDisplay *dpy,
                     GC gc,
                     long *flags,
                     XFontStruct *font,
                     long mode,
                     Pixmap pattern,
                     long width,
                     long style,
                     long fg,
                     long bg) {
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
        } else {
            values.plane_mask =dpy->bitplane;
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
        values.foreground = x11_xcolor(dpy,fg);
        gcmask |= GCForeground;
    }
    if (flags[5]) {
        /* 24BP */
        values.background = x11_xcolor(dpy,bg);
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

void
x11_change_attributes(struct LLDisplay *dpy,
                      Window window,
                      long *flags,
                      long *llattr) {
    XSetWindowAttributes attributes;
    long mask = 0;

    if (flags[0]) {
        mask |= CWBackingStore;
        if (llattr[0]) {
            attributes.backing_store = Always;
        } else {
            attributes.backing_store = NotUseful;
        }
    }
    if (flags[1]) {
        mask |= CWSaveUnder;
        if (llattr[1]) {
            attributes.save_under = True;
        } else {
            attributes.save_under = False;
        }
    }
    if (flags[2]) {
        mask |= CWOverrideRedirect;
        if (llattr[2]) {
            attributes.override_redirect = True;
        } else {
            attributes.override_redirect  = False;
        }
    }
    if (mask) {
        XChangeWindowAttributes(dpy->display,window,mask,&attributes);
    }
    if (flags[3])
        if (llattr[3]) {
            XSetTransientForHint(dpy->display,window,dpy->root);
        }
}

void
x11_graph_subwindow_mode(struct LLDisplay *dpy, GC gc, long value) {
    XGCValues values;
    values.subwindow_mode = value;
    XChangeGC(dpy->display,gc,GCSubwindowMode,&values);
}

/*
  La me'thode lente mais sure, car utilise des fonctions X.
  */

void
slow_subst_colors(struct LLDisplay *dpy,
                  Pixmap pixmap,
                  unsigned long *all_colors,
                  long w,
                  long h) {
    XImage *getimage;
    register long  x, y;

    /* We work line by line, because full image may be too large */
#ifdef SVR4I386
    Pixmap tmppixmap;
    tmppixmap = XCreatePixmap(dpy->display, dpy->root, w, 1, dpy->depth);
#endif /* SVR4I386 */
    for (y = 0; y < h; y++) {
#ifdef SVR4I386
        XCopyArea(dpy->display, pixmap, tmppixmap, dpy->fullgc,
                   0, y, w, 1, 0, 0);
        getimage = XGetImage(dpy->display, tmppixmap, 0, 0, w, 1, AllPlanes,
                              ZPixmap);
#else  /* SVR4I386 */
        getimage = XGetImage(dpy->display, pixmap, 0, y, w, 1, AllPlanes,
                              ZPixmap);
#endif /* SVR4I386 */
        for (x = 0; x < w; x++) {
            XPutPixel(getimage, x, 0,
                      /* 24BP */
                      all_colors[x11_lispcolor
                                (dpy, XGetPixel (getimage, x, 0))]
                     );
        }
        XPutImage(dpy->display, pixmap, dpy->fullgc, getimage,
                   0, 0, 0, y, w, 1);
        XDestroyImage(getimage);
    }
#ifdef SVR4I386
    XFreePixmap(dpy->display, tmppixmap);
#endif /* SVR4I386 */
}

#define MAX_BV_COLORS 256

void
x11_subst_colors(struct LLDisplay *dpy,
                 Pixmap pixmap,
                 long *oldcolors,
                 long *newcolors,
                 long size,
                 long w,
                 long h) {
    long i;
    /* 24BP */
    static unsigned long all_colors[MAX_BV_COLORS];
    /* 24BP */
    register unsigned long *longcolor;
    register long *color,*newcolor;

    /* Initialisation of substitution vector. */
    for (longcolor = all_colors,i=0; i < MAX_BV_COLORS; longcolor++, i++) {
        /* 24BP */
        (*longcolor) = x11_xcolor(dpy, i);
    }
    for (i=0,color=oldcolors,newcolor=newcolors; i<size; color++,newcolor++,i++) {
        /* 24BP */
        all_colors[*color] = x11_xcolor(dpy,(*newcolor));
    }

    slow_subst_colors(dpy, pixmap, all_colors, w, h);
}

void
x11_free_cursor(struct LLDisplay *dpy, Cursor cursor) {
    XFreeCursor(dpy->display,cursor);
}

void
x11_set_planemask(struct LLDisplay *dpy, GC gc, long planes) {
    XSetPlaneMask(dpy->display,gc,planes);
}

Display *
x11_xdisplay(struct LLDisplay *dpy) {
    return dpy->display;
}

/*
  Get Ressource
*/

/**********************  Corrected function *****************/

/*     AA 01/26/93
 *     Function Name : x11_get_default
 *     Description:    Get a default resource value
 *     Arguments: dpy - the structure containing the X display
 *                llapp_name - the applicaction name
 *                llres_name - the resource name
 *     Returns: a string that represent the value
 */
char *
x11_get_default(struct LLDisplay *dpy, char *llapp_name, char *llres_name) {
    XrmValue value;
    Bool is_res;
    char *res_pathname, *default_val;
    char *type;

    if (dpy->database) {
        res_pathname = (char *) malloc(strlen(llapp_name) +
                                       strlen(llres_name) + 2);
        sprintf(res_pathname, "%s.%s", llapp_name, llres_name);
        is_res = XrmGetResource(dpy->database,
                                res_pathname, "*", &type, &value);
        free(res_pathname);
        if (is_res) {
            if (value.size > MAXRESVALNAME) {
                fprintf(stderr,
                         "x11_get_default : too large value for resource %s\n",
                         llres_name);
                return "";
            }
            (void)memcpy(llbuffer, value.addr, value.size);
            return llbuffer;
        } else {
            return "";
        }
    } else {
        default_val = (char *)XGetDefault(dpy->display,
                                           llapp_name, llres_name);
        return default_val ? default_val : "";
    }
}

/*
 *    name:        lisp_getappname
 *    description:
 */
void
lisp_getappname(void) {
    struct LL_SYMBOL *getappname;

    getappname = getsym("#:display:x11:get-app-name");
    lispcall(LLT_T, 0, getappname);
}

/*
 *    name:        lisp_getappclass
 *    description:
 */
void
lisp_getappclass(void) {
    struct LL_SYMBOL *getappclass;

    getappclass = getsym("#:display:x11:get-app-class");
    lispcall(LLT_T, 0, getappclass);
}

/*
 *    name:        x11_setappname
 *    description:
 */
void
x11_setappname(char *app_name) {
    default_app_name = app_name;
}

/*
 *    name:        x11_setappclass
 *    description:
 */
void
x11_setappclass(char *app_class) {
    default_app_class = app_class;
}

void
x11_change_bitplane(struct LLDisplay *dpy, long plane) {
    dpy->bitplane = plane;
}

long
x11_lookup_named_color(struct LLDisplay *dpy,
                       char *name,
                       struct LLColor *exactrgb,
                       struct LLColor *closestrgb) {
    XColor xcolor1,xcolor2;
    long code;

    code = XLookupColor(dpy->display, dpy->colormap, name, &xcolor1,&xcolor2);
    exactrgb->red = xcolor1.red / 2;
    exactrgb->green = xcolor1.green / 2;
    exactrgb->blue = xcolor1.blue / 2;
    closestrgb->red = xcolor2.red / 2;
    closestrgb->green = xcolor2.green / 2;
    closestrgb->blue = xcolor2.blue / 2;
    return (code == 0 ? -1 : 0);
}

long
x11_query_color(struct LLDisplay *dpy, long pixel, struct LLColor *rgb) {
    long code;
    XColor xcolor;
    /* 24BP */
    xcolor.pixel = x11_xcolor(dpy,pixel);
    code = XQueryColor(dpy->display,dpy->colormap,&xcolor);
    rgb->red =  xcolor.red / 2;
    rgb->blue =  xcolor.blue / 2;
    rgb->green =  xcolor.green / 2;
    return (code == 0 ? -1 : 0);
}

/* 24BP */
long x11_query_color_from_pixel(struct LLDisplay *dpy,
                                long pixel,
                                struct LLColor *rgb) {
    long code;
    XColor xcolor;
    xcolor.pixel = pixel;
    code = XQueryColor(dpy->display,dpy->colormap,&xcolor);
    rgb->red =  xcolor.red / 2;
    rgb->blue =  xcolor.blue / 2;
    rgb->green =  xcolor.green / 2;
    return (code == 0 ? -1 : 0);
}

/**************************************************************************/
/**     Non POrtable                                                   ****/
/**************************************************************************/

/*
  Special for X11 to allocate color for overlay techique
*/

long
x11_alloc_cells(struct LLDisplay *dpy,
                long nplanes,
                long ncolors,
                unsigned long *plane_masks,
                unsigned long *colors,
                unsigned long *sorted_colors) {
    long i,j,h,k;
    static char *name[]= {"white"};
    XColor xcolor,mycolor;

    (void) XAllocColorCells(dpy->display, dpy->colormap, False,
                             plane_masks, nplanes, colors, ncolors);

    k = (1 << nplanes);

    if (nplanes) {
        for (i=0; i<ncolors; i++) { /* for every color */
            sorted_colors[(k*i)] = colors[i];
            for (j=1; j<k; j++) {
                /* for every combinaison of
                   plane_masks[0],plane_mask[1],...
                   */
                sorted_colors[(k*i) + j] = colors[i];
                /* first initialise */
                for (h=0; ((1<<h) <= j) && (h < nplanes); h++)
                    /* then for every plane intersecting j */
                    if ((1<<h) & j) {
                        sorted_colors[(k*i) + j] |= plane_masks[h];
                    }
            }
        }
    }

    if (!XParseColor(dpy->display,dpy->colormap,name[0],&xcolor)) {
        return 0;
    }

    for (i=0; i<(ncolors * k); i++) {
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

void
x11_forget_window_gravity(struct LLDisplay *dpy, Window window) {
    XSetWindowAttributes xswa;

    xswa.bit_gravity = ForgetGravity;

    XChangeWindowAttributes(dpy->display, window, CWBitGravity, &xswa);
}

/*
 *    name:        ilx11_querypointer
 *    description: Used for getting the display
 *                 the mouse pointer is located in.
 */
Bool
ilx11_querypointer(struct LLDisplay *dpy, struct LLEvent *event) {
    Window w, rootw, childw;
    int x, y, gx, gy;
    unsigned int state;
    Bool res;
    char c;

    childw = dpy->root;
    do {
        w = childw;
        res = XQueryPointer(dpy->display, w, &rootw, &childw,
                             &gx, &gy, &x, &y, &state);
    } while (childw != 0);

    event->window = (long *) get_userdata(dpy, w);
    event->gx = ((long)gx) & 0xffff;
    event->gy = ((long)gy) & 0xffff;
    event->x = ((long)x) & 0xffff;
    event->y = ((long)y) & 0xffff;
    c = BUTTON(BIT(state, Button1Mask),
               BIT(state, Button2Mask),
               BIT(state, Button3Mask));
    event->detail = (c == 0) ? 0 : (1 + DETAIL(c, state)) & 0xffff;
    return res;
}
