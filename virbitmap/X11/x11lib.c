/* *******************************************************************/
/*                         FILE x11lib.c                             */
/*                                                                   */
/* x11.o = x11share.c + x11draw.c + x11lib.c                         */
/* Motif and Olit incarnations will use x11share.c and x11draw.c     */
/* *******************************************************************/

/*
 * $Source: /usr/cvs/lelisp/virbitmap/X11/x11lib.c,v $
 * $Date: 2017/08/01 04:31:19 $
 * $Revision: 1.8 $
 */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <x11.h>

extern void x11_get_visual(struct LLDisplay *dpy);
extern void x11_dealloc_xcolortable(struct LLDisplay *dpy, struct LLColorTable *xcolors, unsigned long pixel, long res);
extern int kill_userdata(struct LLDisplay *dpy, Window win);
extern void parse_event(struct LLDisplay *dpy, struct LLEvent *llevent, XEvent *xevent);
extern unsigned long x11_xcolor(struct LLDisplay *dpy, long pixel);
extern long set_userdata(struct LLDisplay *dpy, Window win, long lisp);
extern long x11_get_rootdirname(char *);

extern long *lispnil;
XEvent XEVENT; /* On utilise cette  globale  dans read_event et peek-event */

void
signal_pipe(int sig) {
    (void)sig;
    printf("\n --- File descriptor closed ---- \n\r");
}

#ifdef LLDEBUG
#define PRINT(a) printf(a);
#else
#define PRINT(a)
#endif

struct LLDisplay *
x11_bitprologue(char *name,
                unsigned long mask,
                long override,
                long *vect_args) {
    /* unsigned long whitepixel, blackpixel; */
    long screen;
    XGCValues values;
    long xmax;
    Pixmap voidpixmap;
    struct LLDisplay *dpy;
    Atom DELETE_WINDOW;
    dpy = (struct LLDisplay *)malloc(sizeof(struct LLDisplay));
    dpy->lispcolors = 0;
    dpy->database = 0;
    dpy->display = XOpenDisplay(name);
    PRINT("Begin x11_bitprologue\n");
    XSynchronize(dpy->display,0);
    PRINT("Synchro\n");
    if ((dpy->display) == NULL) {
        perror(MESSAGE1);
        return ((struct LLDisplay *) NULL);
    }
    screen = XDefaultScreen(dpy->display);
    vect_args[0] = XDisplayWidth(dpy->display, screen) - 1;
    vect_args[1] = XDisplayHeight(dpy->display, screen) - 1;
    vect_args[2] = ConnectionNumber(dpy->display);
    vect_args[3] = XDefaultDepth(dpy->display, screen);
    xmax = vect_args[0];
    dpy->subeventmask = mask;
    dpy->eventmask = mask|EVENTMASK;
    dpy->override = override;
    dpy->root = XRootWindow(dpy->display, screen);
    /* 24BP */
    x11_get_visual(dpy);
    /*
      dpy->colormap = DefaultColormap(dpy->display, screen);
      dpy->depth = XDefaultDepth(dpy->display, screen);
      */
    /* Pas utilise'
       whitepixel = XWhitePixel(dpy->display, screen);
       blackpixel = XBlackPixel(dpy->display, screen);
       */
    PRINT("x11_bitprologue 1\n");
    dpy->lispcontext = XUniqueContext();
    dpy->memsize = MEMSIZESTART;
    dpy->mem.points = (XPoint *)malloc(dpy->memsize);
    if (dpy->mem.points == 0) {
        perror(MESSAGE2);
        return ((struct LLDisplay *) NULL);
    }
    dpy->setimage = XCreateImage(dpy->display,
                                 dpy->visual,
                                 1,
                                 XYBitmap,
                                 0,
                                 NULL,
                                 xmax,
                                 1,
                                 16,
                                 0);
    dpy->setcolorimage = XCreateImage(dpy->display,
                                      dpy->visual,
                                      dpy->depth, ZPixmap, 0, NULL,
                                      xmax, 1, 16, 0);
    dpy->setimage->data = (char *)malloc((xmax+7)/8);
    /* 24BP colors are unsigned long */
    PRINT("x11_bitprologue 2\n");
    if (dpy->lispcolors) {
        dpy->setcolorimage->data = (char *)malloc(xmax*4);
    } else {
        dpy->setcolorimage->data = (char *)malloc(xmax);
    }
    dpy->database=0;
    PRINT("x11_bitprologue 3\n");

#define MAXPATH 1024
    {
        char user_default[MAXPATH + 24];
        char homedir[MAXPATH];
        long len;
        len = x11_get_rootdirname(homedir);
        if (len) {
            sprintf(user_default,"%s.Xdefaults",homedir);
            user_default[len+strlen(".Xdefaults")]=0;
            dpy->database = XrmGetFileDatabase(user_default);
        }
    }
    if (dpy->database == 0)
        dpy->database =XrmGetFileDatabase(
                           "/usr/lib/X11/app-defaults/Lelisp");

    PRINT("x11_bitprologue 4\n");
    values.graphics_exposures = False;
    /* 24BP root-window and visual can be of <> depth */
    voidpixmap = XCreatePixmap(dpy->display, dpy->root, 1, 1, dpy->depth);
    dpy->fullgc = XCreateGC(dpy->display, voidpixmap, FULLGCMASK, &values);
    dpy->currentwindow = dpy->root;
    dpy->currentgc = XCreateGC(dpy->display, voidpixmap, FULLGCMASK, &values);
    /*XDefaultGC(dpy->display, screen);*/
    PRINT("x11_bitprologue 5\n");
    dpy->offset_x = 0;
    dpy->offset_y = 0;
    dpy->hostname = (char *)malloc(HOSTSIZE);
    gethostname(dpy->hostname, HOSTSIZE);
    PRINT("x11_bitprologue 6\n");
    DELETE_WINDOW = XInternAtom(dpy->display,"WM_DELETE_WINDOW",0);
    dpy->delete = DELETE_WINDOW;
    /*
      Added
      */
    signal(SIGPIPE,signal_pipe);
    dpy->release = (long) XVendorRelease(dpy->display);
    PRINT("End x11_bitprologue\n");
    return (dpy);
}

/* 24BP */
/* All this stuff manage possible visuals and private colortables */
/* and indirect colortable, all options can be mixed  */
/* We use shell variable to configure the session : */
/* LLVisual -> can be PseudoColor, GrayScale etc. */
/* LLDepth  -> can be 4, 8 */
/* LLPrivateVisual -> can be anything or undefined, if defined, we will */
/*    use a private colortable, even if using the same visual */
/* LLColors -> can be anything or undefined, if defined, we will */
/*    use a translation table of 256 entries for colors */

void
x11_get_visual(struct LLDisplay *dpy) {
    XVisualInfo vTemplate;
    XVisualInfo *visualList;
    int visualsMatched;
    char *llvisual;
    char *lldepth;
    int  depth;
    long i;
    char * lispcolors;
    PRINT("Begin x11_get_visual\n");
    /* default LLDepth */
    vTemplate.depth=8;
    /* default LLVisual */
    vTemplate.class= PseudoColor;
    llvisual = getenv("LLVisual");
    lispcolors = getenv("LLColors");
    if (lispcolors == NULL) {
        depth = XDefaultDepth(dpy->display, XDefaultScreen(dpy->display));
        if (depth > 8) {
            lispcolors = "1";
        }
    }
    if (lispcolors) {
        /* use a translation table, init the LL->X vector and the
           X->LL special hash-table */
        dpy->xcolors = (struct LLColorTable *)
                        malloc(sizeof(struct LLColorTable));
        dpy->xcolors->index = -1;
        dpy->xcolors->table = 0;
        dpy->lispcolors = (unsigned long *)
                          malloc(256 *sizeof(unsigned long));
        for (i = 0; i < 256; dpy->lispcolors[i++] = FREECOLOR)
            ;
    }
    if (llvisual) {
        /* get the visual */
        if (strcmp(llvisual, "GrayScale") == 0) {
            vTemplate.class=GrayScale;
        }
        if (strcmp(llvisual, "DirectColor") == 0) {
            vTemplate.class=DirectColor;
        }
        if (strcmp(llvisual, "StaticGray") == 0) {
            vTemplate.class=StaticGray;
        }
        if (strcmp(llvisual, "StaticColor") == 0) {
            vTemplate.class=StaticColor;
        }
        if (strcmp(llvisual, "TrueColor") == 0) {
            vTemplate.class=TrueColor;
        }
    }
    lldepth = getenv("LLDepth");
    if (lldepth) {
        sscanf(lldepth,"%d", &depth);
        /* get the depth */
        vTemplate.depth = depth;
    }
    vTemplate.screen=XDefaultScreen(dpy->display);
    /* find if there is a matching visual with this depth and class
       on this screen */
    visualList = XGetVisualInfo(dpy->display, VisualScreenMask|VisualClassMask|
                                 VisualDepthMask, &vTemplate, &visualsMatched);
    if ((visualsMatched == 0) || ! getenv("LLPrivateVisual")) {
        /* if no visual matches or if we don't want a private colortable
           get the default */
        dpy->visual = DefaultVisual(dpy->display,
                                    XDefaultScreen(dpy->display));
        dpy->colormap = DefaultColormap(dpy->display,
                                        XDefaultScreen(dpy->display));
        dpy->depth = XDefaultDepth(dpy->display,
                                    XDefaultScreen(dpy->display));
    } else {
        /* else create a colormap on this visual */
        dpy->visual = visualList[0].visual;
        dpy->depth = vTemplate.depth;
        dpy->colormap = XCreateColormap(dpy->display, dpy->root, dpy->visual,
                                         AllocNone);
    }
    PRINT("End x11_get_visual\n");
}

#include <pwd.h>
long
x11_get_rootdirname(char *buf) {
    uid_t uid;
    struct passwd *pw;
    static char *ptr = NULL;

    if (ptr == NULL) {
        if ((ptr = getenv("HOME")) == NULL) {
            if ((ptr = getenv("USER")) != (char *)NULL) {
                pw = (struct passwd *)getpwnam((char *)ptr);
            } else {
                uid = getuid();
                pw = getpwuid(uid);
            }
            if (pw) {
                ptr = pw->pw_dir;
            } else {
                ptr = NULL;
                *buf = '\0';
            }
        }
    }

    if (ptr != NULL) {
        char *realbuff=buf;
        (void) strcpy(buf, ptr);

        buf += strlen(buf);
        *buf = '/';
        buf++;
        *buf = '\0';
        return strlen(realbuff);
    } else {
        buf[0] = 0;
    }
    return 0;
}

void
x11_bitepilogue(struct LLDisplay *dpy) {
    long i;
    XDestroyImage(dpy->setimage);
    XSetCloseDownMode(dpy->display, DestroyAll);
    XCloseDisplay(dpy->display);
    /* 24BP */
    /* free color translation tables */
    if (dpy->lispcolors) {
        for (i = 0; i < 256; i++)
            if (dpy->lispcolors[i] != FREECOLOR)
                x11_dealloc_xcolortable(dpy,dpy->xcolors,
                                        dpy->lispcolors[i],
                                        i);
        free(dpy->xcolors);
        free((unsigned long *)dpy->lispcolors);
    }
    free((char *)dpy->mem.points);
    free((char *)dpy->hostname);
    free((char *)dpy);
}

void
x11_kill_window(struct LLDisplay *dpy, Window window, GC gc) {
    kill_userdata(dpy, window);
    XDestroyWindow(dpy->display, window);
    XFreeGC(dpy->display, gc);
}

void
x11_read_event(struct LLDisplay *dpy, struct LL_VECTOR *event) {

    struct LLEvent *llevent;
    XNextEvent(dpy->display, &XEVENT);
    /* UPdate vs modifications brought in aida/intrinsic/c/x11xt.c
       to solve a heap-ovni pb */
    llevent = (struct LLEvent *) (&(event->ll_vecobj->ll_vecfil));
    parse_event(dpy, llevent, &XEVENT);
}

void
x11_peek_event(struct LLDisplay *dpy, struct LL_VECTOR *event) {
    struct LLEvent *llevent;
    XPeekEvent(dpy->display, &XEVENT);
    /* UPdate vs modifications brought in aida/intrinsic/c/x11xt.c
       to solve a heap-ovni pb */
    llevent = (struct LLEvent *) (&(event->ll_vecobj->ll_vecfil));
    parse_event(dpy, llevent, &XEVENT);
}

/* ************************************************************************* */

/* **************************    */
/* The New x11lib.c  : June 12 1990 */
/* **************************    */

/*
  Functions :
                x11_create_window

*/

/*
  Properties is an array :
 x  y w h ,title , border width, backing-store, save under, transient,
 override redirect , back pixel (-1 or >= 0),border pixel (-1 or >= 0),
  user_position, user_size, event_mask, icontitle,window_class,iconic_state;
*/

/*
  This represent a Le-Lisp string
*/

struct MEMORY {
    struct MEMORY   *Val;
};
typedef struct MEMORY *Ptr;

/* Why isn't this in the library? My dear! */

static void
SetHostName(register Display *dpy, Window w, char *name) {
    XChangeProperty(dpy, w, XA_WM_CLIENT_MACHINE, XA_STRING,
                    8, PropModeReplace, (unsigned char *)name, strlen(name));
}

Window
x11_create_window(struct LLDisplay *dpy,
                  long win,
                  long *properties,
                  Cursor cursor,
                  Window parent,
                  long visible) {
    static long x, y, w, h,border_w,backing_store,iconic_state;
    Window window;
    Ptr element;
    char *windowtitle,*icontitle,*window_class,*window_name;
    static XSetWindowAttributes attributes;
    static XSizeHints hints;
    static XClassHint classhint;
    static XWMHints wmhints;
    static Atom delete_save;
    static Atom protocol;
    unsigned long mask=0;
    static long save_under,transient,override_redirect,back_pixel,border_pixel;
    static long user_position;
    static long user_size;
    static long event_mask;

    x = properties[0];
    y = properties[1];
    w = properties[2];
    h = properties[3];
    element = (Ptr)properties[4];
    windowtitle = (char *) (element->Val +2);
    border_w = properties[5];
    backing_store = properties[6];
    save_under = properties[7];
    transient = properties[8];
    override_redirect = properties[9];
    back_pixel = properties[10];
    border_pixel = properties[11];
    user_position = properties[12];
    user_size = properties[13];
    event_mask = properties[14];
    element = (Ptr)properties[15];
    icontitle = (char *) (element->Val +2);
    element = (Ptr)properties[16];
    window_class = (char *) (element->Val +2);
    iconic_state = properties[17];
    element = (Ptr)properties[18];
    window_name = (char *) (element->Val +2);

    /* Construct the attributes and the mask */

    if (back_pixel >= 0) {
        /* 24BP */
        attributes.background_pixel = x11_xcolor(dpy,back_pixel);
    } else {
        attributes.background_pixel = dpy->BackPixel;
    }
    mask |= CWBackPixel;
    if (border_pixel >= 0) {
        /* 24BP */
        attributes.border_pixel = x11_xcolor(dpy,border_pixel);
        mask |= CWBorderPixel;
    }
    if (backing_store) {
        attributes.backing_store = Always;
        mask |= CWBackingStore;
    }
    if (save_under) {
        attributes.save_under = True;
        mask |= CWSaveUnder;
    }
    if (override_redirect) {
        attributes.override_redirect = True;
    } else {
        attributes.override_redirect = dpy->override;
    }
    mask |= CWOverrideRedirect;

    if (w <= 0) {
        w = 1;
    }
    if (h <= 0) {
        h = 1;
    }
    attributes.cursor = cursor;
    mask |= CWCursor;
    attributes.event_mask = 0;
    mask |= CWEventMask;
    attributes.colormap = dpy->colormap;
    mask |= CWColormap;
    window = XCreateWindow(dpy->display, parent, x, y, w, h,
                            border_w,dpy->depth, InputOutput,
                            /* 24BP */
                            dpy->visual,
                            /*CopyFromParent,*/
                            mask, &attributes);
    /* Window class for all windows
               is the string LElisp by default */

    classhint.res_name = (char *)window_name;
    classhint.res_class = (char *)window_class;
    XSetClassHint(dpy->display, window, &classhint);
    wmhints.flags = InputHint;
    wmhints.input = True;
    if (iconic_state) {
        wmhints.initial_state = IconicState;
        wmhints.flags |= StateHint;
    }
    XSetWMHints(dpy->display, window, &wmhints);

    /* Specify a window title */
    XStoreName(dpy->display, window, windowtitle);
    /* Specify an icon title for the window */
    XSetIconName(dpy->display, window, icontitle);

    SetHostName(dpy->display, window, dpy->hostname);
    /*
      XSetWindowBorderWidth(dpy->display, window,border_w);
      */
    hints.x = x;
    hints.y = y;
    hints.width = w;
    hints.height = h;

    /* If the user whant to specify position and size when window is
       mapped or No */
    if (user_position) {
        hints.flags = PPosition;
    } else {
        hints.flags = USPosition;
    }
    if (user_size) {
        hints.flags |= PSize;
    } else {
        hints.flags |= USSize;
    }
#ifdef X11r4
    XSetWMNormalHints(dpy->display, window, &hints);
    {
        Atom prop;
        prop = XInternAtom(dpy->display,"WM_SIZE_HINTS",0);
        XSetWMSizeHints(dpy->display,window,&hints,prop);
    }

#else
    XSetNormalHints(dpy->display, window, &hints);
#endif

    /* For  Menus and  dialogs windows  */
    if (transient) {
        XSetTransientForHint(dpy->display,window,dpy->root);
    }

    if (event_mask) {
        XSelectInput(dpy->display, window, event_mask | StructureNotifyMask|ExposureMask);
    } else {
        XSelectInput(dpy->display, window,  dpy->eventmask);
    }

    /* If we want to be notifed when a client send a delete window with
       an ICCCM window manager compliant */

    /* Other properties could be added */

    delete_save = dpy->delete;
    protocol = XInternAtom(dpy->display,"WM_PROTOCOLS",0);
    /* We must pass a static pointer
       {
       unsigned char uc_delete_save;
       uc_delete_save = delete_save;
       XChangeProperty(dpy->display, window, protocol, XA_ATOM, 32,
       PropModeReplace, &uc_delete_save, 1);
       }
       */
    XChangeProperty(dpy->display, window, protocol, XA_ATOM, 32,
                    PropModeAppend,
                    (unsigned char *) &delete_save, 1);
    if (visible) {
        XMapWindow(dpy->display,window);
    }
    return ((set_userdata(dpy, window, win)) ? window : (Window) NULL);
}

/*
  properties are :
  x, y, w, h, border_w, backing_store, save_under,transient, back_pixel,
  border_pixel, event_mask, window_class

*/
Window
x11_create_subwindow(struct LLDisplay *dpy,
                     long win,
                     long *properties,
                     Cursor cursor,
                     Window parent,
                     long visible) {
    static long x, y, w, h,border_w,backing_store;
    char *window_class;
    char *window_name;
    Window window;
    static XSetWindowAttributes attributes;
    static XClassHint classhint;
    unsigned long mask=0;
    static long save_under,transient,back_pixel,border_pixel;
    static long event_mask;
    Ptr element;
    x = properties[0];
    y = properties[1];
    w = properties[2];
    h = properties[3];

    border_w = properties[4];
    backing_store = properties[5];
    save_under = properties[6];
    transient = properties[7];

    back_pixel = properties[8];
    border_pixel = properties[9];

    event_mask = properties[10];
    element = (Ptr)(properties[11]);
    window_class = (char *)(element->Val + 2);
    element = (Ptr)(properties[12]);
    window_name = (char *)(element->Val + 2);

    /* Construct the attributes and the mask */

    if (back_pixel >= 0) {
        /* 24BP */
        attributes.background_pixel = x11_xcolor(dpy,back_pixel);
    } else {
        attributes.background_pixel = dpy->BackPixel;
    }
    mask |= CWBackPixel;
    if (border_pixel >= 0) {
        /* 24BP */
        attributes.border_pixel = x11_xcolor(dpy,border_pixel);
        mask |= CWBorderPixel;
    }
    if (backing_store) {
        attributes.backing_store = Always;
        mask |= CWBackingStore;
    }
    if (save_under) {
        attributes.save_under = True;
        mask |= CWSaveUnder;
    }

    if (w <= 0) {
        w = 1;
    }
    if (h <= 0) {
        h = 1;
    }
    attributes.cursor = cursor;
    mask |= CWCursor;
    attributes.event_mask = 0;
    mask |= CWEventMask;

    attributes.do_not_propagate_mask =
        ButtonPressMask | ButtonReleaseMask |
        KeyPressMask | KeyReleaseMask | PointerMotionMask;

    mask |= CWDontPropagate;
    attributes.colormap = dpy->colormap;
    mask |= CWColormap;

    window = XCreateWindow(dpy->display, parent, x, y, w, h,
                            border_w, CopyFromParent, InputOutput,
                            CopyFromParent,
                            mask, &attributes);

    /* La classe de toutes les fenetres est la chaine : lelisp */

    classhint.res_name = window_name;
    classhint.res_class = window_class;
    XSetClassHint(dpy->display, window, &classhint);
    /*
      XSetWindowBorderWidth(dpy->display, window,border_w);
      */
    /* For  Menus and  dialogs windows  */
    if (transient) {
        XSetTransientForHint(dpy->display,window,parent);
    }
    if (event_mask) {
        XSelectInput(dpy->display, window, event_mask |ExposureMask);
    } else {
        XSelectInput(dpy->display, window,  dpy->eventmask);
    }
    if (visible) {
        XMapWindow(dpy->display,window);
    }
    return ((set_userdata(dpy, window, win)) ? window : (Window) NULL);
}

long *
x11_eventp(struct LLDisplay *dpy) {
    return XPending(dpy->display) ? (long *)1 : lispnil;
}

void
x11_window_unmap(struct LLDisplay *dpy, Window window) {
    XUnmapWindow(dpy->display, window);
}

void
x11_window_map(struct LLDisplay *dpy, Window window) {
    XMapWindow(dpy->display, window);
}
