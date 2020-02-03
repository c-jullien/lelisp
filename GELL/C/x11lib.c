#include <x11.h>

#ifdef VMS
extern long noshare *lispnil;
XEvent  noshare XEVENT; /* On utilise cette  globale  dans read_event et peek-event */


#define nil_width 16
#define nil_height 16
#define nil_x_hot 7
#define nil_y_hot 8
static char nil_bits[] = {
   0xff, 0xff, 0x01, 0x80, 0x61, 0x86, 0x71, 0x8e, 0x39, 0x9c, 0x19, 0x98,
   0x19, 0x98, 0x19, 0x98, 0x19, 0x98, 0x19, 0x98, 0x19, 0x98, 0x39, 0x9c,
   0x71, 0x8e, 0x61, 0x86, 0x01, 0x80, 0xff, 0xff};


#else /* VMS */
extern long *lispnil;
XEvent XEVENT; /* On utilise cette  globale  dans read_event et peek-event */

#endif /* endif VMS */

#ifndef VMS
void signal_pipe (sig)
{
printf("\n --- File descriptor closed ---- \n\r");
}
#endif

#ifndef VMS
 long x11_get_rootdirname ();
#endif


#ifdef VMS
struct LLDisplay *x11_bitprologue (name, hostname,mask, override, vect_args)
char *name;
char *hostname;
unsigned long mask;
long override;
long *vect_args;
{         
#else

struct LLDisplay *x11_bitprologue (name, mask, override, vect_args)
char *name;
unsigned long mask;
long override;
long *vect_args;
{         
#endif
        /* unsigned long whitepixel, blackpixel; */
        long screen;
        char *def;
        XGCValues values;
        long xmax;
        Pixmap voidpixmap;
        struct LLDisplay *dpy;
        Atom DELETE_WINDOW;
        dpy = (struct LLDisplay *) malloc (sizeof (struct LLDisplay));
        dpy->lispcolors = 0;
        dpy->database = 0;
        dpy->display = XOpenDisplay (name);
        if ((dpy->display) == NULL) {
                perror (MESSAGE1);
                return ((struct LLDisplay *) NULL);
        }
        screen = XDefaultScreen (dpy->display); 
        vect_args[0] = XDisplayWidth (dpy->display, screen) - 1 ; 
        vect_args[1] = XDisplayHeight (dpy->display, screen) - 1 ; 
        vect_args[2] = ConnectionNumber (dpy->display) ;
        xmax = vect_args[0];
        dpy->subeventmask = mask ;
        dpy->eventmask = mask|EVENTMASK ;
        dpy->override = override;
        dpy->root = XRootWindow (dpy->display, screen); 
        /* 24BP */
        x11_get_visual(dpy);
        /*      
          dpy->colormap = DefaultColormap(dpy->display, screen);
          dpy->depth = XDefaultDepth (dpy->display, screen);
          */
        /* Pas utilise'
           whitepixel = XWhitePixel (dpy->display, screen);
           blackpixel = XBlackPixel (dpy->display, screen);
           */
        dpy->lispcontext = XUniqueContext ();
        dpy->memsize = MEMSIZESTART ;
        dpy->mem.points = (XPoint *) malloc (dpy->memsize) ;
        if (dpy->mem.points == 0) {
                perror(MESSAGE2);
                return ((struct LLDisplay *) NULL);
        }
        dpy->setimage = XCreateImage (dpy->display,
                                      dpy->visual,
                                      1, XYBitmap, 0, NULL, xmax, 1, 16, 0); 
        dpy->setcolorimage = XCreateImage (dpy->display,
                                           dpy->visual,
                                           dpy->depth, ZPixmap, 0, NULL,
                                           xmax, 1, 16, 0); 
        dpy->setimage->data = (char *) malloc ((xmax+7)/8);
        /* 24BP colors are unsigned long */
        if (dpy->lispcolors){
                dpy->setcolorimage->data = (char *) malloc (xmax*4);
        }else{
                dpy->setcolorimage->data = (char *) malloc (xmax);
        }
#ifdef VMS
        XrmInitialize();
        dpy->database =XrmGetFileDatabase("DECW$USER_DEFAULTS:DECW$LELISP.DAT");
        if (dpy->database==0){
                dpy->database=XrmGetFileDatabase("lelisp$disk:[000000]DECW$LELISP.DAT");
                if(dpy->database ==0){
                        perror(MESSAGEDECW);
                }
        }       
#else
        dpy->database=0;
        
        
#define MAXPATH 1024
        {
                char user_default[MAXPATH + 24];
                char homedir[MAXPATH];
                long len ;
                len = x11_get_rootdirname(homedir);
                if(len) {
                        sprintf(user_default,"%s.Xdefaults",homedir);
                        user_default[len+strlen(".Xdefaults")]=0;
                        dpy->database = XrmGetFileDatabase(user_default);
                }
        }
        if(dpy->database == 0)
                dpy->database =XrmGetFileDatabase(
                                                  "/usr/lib/X11/app-defaults/Lelisp");
        

#endif  
        values.graphics_exposures = False; 
        /* 24BP root-window and visual can be of <> depth */
        voidpixmap = XCreatePixmap (dpy->display, dpy->root, 1, 1, dpy->depth);
        dpy->fullgc = XCreateGC (dpy->display, voidpixmap, FULLGCMASK, &values);
        dpy->currentwindow = dpy->root;
        dpy->currentgc = XCreateGC (dpy->display, voidpixmap, FULLGCMASK, &values); 
/*XDefaultGC (dpy->display, screen);*/ 
        dpy->offset_x = 0;
        dpy->offset_y = 0;
#ifdef VMS
        dpy->hostname = (char *)malloc(strlen(hostname));
        strcpy(dpy->hostname,hostname);
#else
        dpy->hostname = (char *)malloc(HOSTSIZE);
        gethostname(dpy->hostname, HOSTSIZE);
#endif
        DELETE_WINDOW = XInternAtom(dpy->display,"WM_DELETE_WINDOW",0);
        dpy->delete = DELETE_WINDOW;
        /*
          Added
          */
#ifndef VMS
        signal(SIGPIPE,signal_pipe);
#endif
        dpy->release = (long) XVendorRelease (dpy->display);
#ifdef VMS
        dpy->lispicon=XCreateBitmapFromData(dpy->display,dpy->root,
                                            nil_bits,nil_width,nil_height);
        
        dpy->dwm_hint_atom =XInternAtom(dpy->display,"DEC_WM_HINTS",True);
#endif
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

x11_get_visual (dpy)
   struct LLDisplay *dpy;
{
XVisualInfo vTemplate;
XVisualInfo *visualList;
int  visualsMatched;
char *getenv();
char *llvisual;
char *lldepth;
int  depth;
long i;
char * lispcolors;
/* default LLDepth */
vTemplate.depth=8;
/* default LLVisual */
vTemplate.class= PseudoColor;
llvisual = getenv ("LLVisual");
lispcolors = getenv ("LLColors");
if (lispcolors){
        /* use a translation table, init the LL->X vector and the
           X->LL special hash-table */
        dpy->xcolors=(struct LLColorTable *) malloc
                (sizeof (struct LLColorTable));
        dpy->xcolors->index= -1;
        dpy->xcolors->table=0;
        dpy->lispcolors = (unsigned long *) 
                malloc (256 *sizeof (unsigned long));
        for (i=0 ; i<256;dpy->lispcolors[i++]= -1);
}
if (llvisual){
        /* get the visual */
        if ( strcmp (llvisual, "GrayScale") == 0 )
                vTemplate.class=GrayScale;
        if ( strcmp (llvisual, "DirectColor") == 0 )
                vTemplate.class=DirectColor;
        if ( strcmp (llvisual, "StaticGray") == 0 )
                vTemplate.class=StaticGray;
        if ( strcmp (llvisual, "StaticColor") == 0 )
                vTemplate.class=StaticColor;
        if ( strcmp (llvisual, "TrueColor") == 0 )
                vTemplate.class=TrueColor;}
lldepth = getenv ("LLDepth");
if (lldepth) { sscanf (lldepth,"%d", &depth); 
               /* get the depth */
               vTemplate.depth = depth;}
vTemplate.screen=XDefaultScreen(dpy->display);
/* find if there is a matching visual with this depth and class
   on this screen */
visualList = XGetVisualInfo (dpy->display, VisualScreenMask | VisualClassMask |
                             VisualDepthMask, &vTemplate, &visualsMatched);
if ( (visualsMatched == 0) || ! getenv ("LLPrivateVisual") ){
        /* if no visual matches or if we don't want a private colortable
           get the default */
        dpy->visual = DefaultVisual(dpy->display,
                                    XDefaultScreen (dpy->display));
        dpy->colormap = DefaultColormap(dpy->display,
                                        XDefaultScreen (dpy->display));
        dpy->depth = XDefaultDepth (dpy->display, 
                                    XDefaultScreen (dpy->display));
} else {
        /* else create a colormap on this visual */
        dpy->visual = visualList[0].visual;
        dpy->colormap = XCreateColormap (dpy->display, dpy->root, dpy->visual,
                                         AllocNone);
        dpy->depth = vTemplate.depth;   
}
}


#ifndef VMS
#include <pwd.h>
long x11_get_rootdirname(buf)
     char  *buf;
{
     long uid;
     extern char *getenv();
     extern long getuid();
     extern struct passwd *getpwuid();
     struct passwd *pw;
     static char *ptr = NULL;

     if (ptr == NULL) {
        if((ptr = getenv("HOME")) == NULL) {
            if((ptr = getenv("USER")) != (char *)NULL) 
                    pw = (struct passwd *)getpwnam((char *)ptr);
            else {
                uid = getuid();
                pw = getpwuid(uid);
            }
            if (pw) ptr = pw->pw_dir;
            else {
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
     }
     else buf[0] = 0;
     return 0;
}

#endif



void x11_bitepilogue (dpy)
struct LLDisplay *dpy; {
        long i;
        XDestroyImage (dpy->setimage);
        XSetCloseDownMode (dpy->display, DestroyAll);
        XCloseDisplay (dpy->display) ;
        /* 24BP */
        /* free color translation tables */
        if (dpy->lispcolors){
                for (i=0;i<256;i++)
                        if (dpy->lispcolors[i]!=-1)
                                x11_dealloc_xcolortable(dpy,dpy->xcolors,
                                                        dpy->lispcolors[i],i);
                free (dpy->xcolors);
                free ((unsigned long *)dpy->lispcolors);
        }
        free ((char *)dpy->mem.points) ; 
        free ((char *)dpy->hostname) ;
        free ((char *)dpy) ;
}



void x11_kill_window (dpy, window, gc)
struct LLDisplay *dpy; 
Window window;
GC gc;{
        kill_userdata (dpy, window);
        XDestroyWindow (dpy->display, window);  
        XFreeGC (dpy->display, gc);
}



void x11_read_event (dpy, event)
struct LLDisplay *dpy; 
struct LLEvent *event;{

                
        XNextEvent (dpy->display, &XEVENT);
        parse_event (dpy, event, &XEVENT);
}

void x11_peek_event (dpy, event)
struct LLDisplay *dpy; 
struct LLEvent *event;{
        
        XPeekEvent (dpy->display, &XEVENT);
        parse_event (dpy, event, &XEVENT);
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

static SetHostName(dpy, w, name)
        register Display *dpy;
        Window w;
        char *name;
{
        XChangeProperty(dpy, w, XA_WM_CLIENT_MACHINE, XA_STRING, 
                8, PropModeReplace, (unsigned char *)name, strlen(name));
}


Window x11_create_window (dpy, win,properties,cursor,parent,visible)
struct LLDisplay *dpy; 
long win; 
long *properties;
Cursor cursor;
Window parent;
long visible;
{
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
#ifdef VMS
        DECWmHintsRec dwmhints;
#endif
        
        x = properties[0];  y = properties[1];  w = properties[2]; 
        h = properties[3]; 
#ifdef V16
        windowtitle = (char *)properties[4];
#else
        element = (Ptr)properties[4];
        windowtitle = (char *) (element->Val +2);
#endif /* V16 */
        border_w = properties[5];
        backing_store = properties[6];
        save_under = properties[7];
        transient = properties[8];
        override_redirect = properties[9];
        back_pixel = properties[10];
        border_pixel = properties[11];
        user_position = properties[12];
        user_size = properties[13];
        event_mask = properties[14] ;
#ifdef V16
        icontitle = (char *)properties[15];
#else
        element = (Ptr)properties[15];
        icontitle = (char *) (element->Val +2);
#endif /* V16 */
#ifdef V16
        window_class = (char *)properties[16];
#else
        element = (Ptr)properties[16];
        window_class = (char *) (element->Val +2);
#endif /* V16 */
        iconic_state = properties[17];
#ifdef V16
        window_name = (char *)properties[18];
#else
        element = (Ptr)properties[18];
        window_name = (char *) (element->Val +2);
#endif /* V16 */
        
        /* Construct the attributes and the mask */
        
        if(back_pixel >= 0) 
                /* 24BP */
                attributes.background_pixel = x11_xcolor(dpy,back_pixel);
        else attributes.background_pixel = dpy->BackPixel;
        mask |= CWBackPixel;
        if(border_pixel >= 0) {
                /* 24BP */
                attributes.border_pixel = x11_xcolor(dpy,border_pixel);
                mask |= CWBorderPixel;
        }
        if(backing_store) {
                attributes.backing_store = Always;
                mask |= CWBackingStore;
        }
        if(save_under) {
                attributes.save_under = True;
                mask |= CWSaveUnder;
        }
        if(override_redirect) 
                attributes.override_redirect = True;
        else attributes.override_redirect = dpy->override; 
        mask |= CWOverrideRedirect;
        
        if (w <= 0) w = 1;
        if (h <= 0) h = 1;
        attributes.cursor = cursor;  
        mask |= CWCursor;
        attributes.event_mask = NULL;
        mask |= CWEventMask;
        attributes.colormap = dpy->colormap;
        mask |= CWColormap;
        window = XCreateWindow (dpy->display, parent, x, y, w, h,
                                border_w,dpy->depth , InputOutput,
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
        if(iconic_state) {
                wmhints.initial_state = IconicState;
                wmhints.flags |= StateHint;
        }
        XSetWMHints(dpy->display, window, &wmhints);
        
#ifdef VMS
        if (dpy->dwm_hint_atom != (Atom) None)
                {
                        dwmhints.iconify_pixmap =dpy->lispicon;
                        dwmhints.value_mask=DECWmIconifyPixmapMask;
                        XChangeProperty(dpy->display,window,dpy->dwm_hint_atom,
                                        dpy->dwm_hint_atom,32,PropModeReplace,&dwmhints,9);
                }
#endif
        
        /* Specify a window title */
        XStoreName (dpy->display, window, windowtitle); 
        /* Specify an icon title for the window */
        XSetIconName(dpy->display, window, icontitle);
        
        SetHostName(dpy->display, window, dpy->hostname);  
        /*
          XSetWindowBorderWidth (dpy->display, window,border_w);
          */
        hints.x = x;
        hints.y = y;
        hints.width = w; 
        hints.height = h; 
        
        /* If the user whant to specify position and size when window is
           mapped or No */
        if(user_position) hints.flags = PPosition;
        else  hints.flags = USPosition;
        if(user_size) hints.flags |= PSize;
        else hints.flags |= USSize;
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
        if(transient)
                XSetTransientForHint(dpy->display,window,dpy->root);
        
        if(event_mask)
                XSelectInput (dpy->display, window, event_mask | StructureNotifyMask|ExposureMask);
        else 
                XSelectInput (dpy->display, window,  dpy->eventmask);
        
        /* If we want to be notifed when a client send a delete window with
           an ICCCM window manager compliant */
        
        /* Other properties could be added */
        
        delete_save = dpy->delete;
        protocol = XInternAtom(dpy->display,"WM_PROTOCOLS",0);
        XChangeProperty(dpy->display, window, protocol, XA_ATOM, 32,
                        PropModeReplace, &delete_save, 1);      
        if(visible) XMapWindow(dpy->display,window);
        return ((set_userdata (dpy, window, win)) ? window : (Window) NULL);
}

/*
  properties are :
  x, y, w, h, border_w, backing_store, save_under,transient, back_pixel,
  border_pixel, event_mask, window_class

*/
Window x11_create_subwindow (dpy, win,properties,cursor,parent,visible)
struct LLDisplay *dpy; 
long win; 
long *properties;
Cursor cursor;
Window parent;
long visible;
{
        static long x, y, w, h,border_w,backing_store;
        char  *window_class,*window_name;
        Window window;
        static XSetWindowAttributes attributes;
        static XClassHint classhint;
        unsigned long mask=0;
        static long save_under,transient,back_pixel,border_pixel;
        static long event_mask;
        Ptr element;
        x = properties[0];  y = properties[1];  w = properties[2]; 
        h = properties[3]; 
        
        border_w = properties[4];
        backing_store = properties[5];
        save_under = properties[6];
        transient = properties[7];
        
        back_pixel = properties[8];
        border_pixel = properties[9];
        
        event_mask = properties[10];
#ifdef V16
        window_class = (char *)properties[10];
#else
        element = (Ptr)(properties[11]);
        window_class = (char *)(element->Val + 2);
#endif /* V16 */
#ifdef V16
        window_name = (char *)properties[12];
#else
        element = (Ptr)(properties[12]);
        window_name = (char *)(element->Val + 2);
#endif /* V16 */
        
        /* Construct the attributes and the mask */
        
        if(back_pixel >= 0) 
                /* 24BP */
                attributes.background_pixel = x11_xcolor (dpy,back_pixel);
        else attributes.background_pixel = dpy->BackPixel;
        mask |= CWBackPixel;
        if(border_pixel >= 0) {
                /* 24BP */
                attributes.border_pixel = x11_xcolor (dpy,border_pixel);
                mask |= CWBorderPixel;
        }
        if(backing_store) {
                attributes.backing_store = Always;
                mask |= CWBackingStore;
        }
        if(save_under) {
                attributes.save_under = True;
                mask |= CWSaveUnder;
        }
        
        if (w <= 0) w = 1;
        if (h <= 0) h = 1;
        attributes.cursor = cursor;  
        mask |= CWCursor;
        attributes.event_mask = NULL;
        mask |= CWEventMask;
        
        attributes.do_not_propagate_mask =
                ButtonPressMask | ButtonReleaseMask |
                        KeyPressMask | KeyReleaseMask | PointerMotionMask;
        
        mask |= CWDontPropagate;
        attributes.colormap = dpy->colormap;
        mask |= CWColormap;
        
        window = XCreateWindow (dpy->display, parent, x, y, w, h,
                                border_w, CopyFromParent, InputOutput,
                                CopyFromParent,
                                mask, &attributes);
        
        /* La classe de toutes les fenetres est la chaine : lelisp */
        
        classhint.res_name = window_name;
        classhint.res_class = window_class;
        XSetClassHint(dpy->display, window, &classhint);
        /*
          XSetWindowBorderWidth (dpy->display, window,border_w);
          */
        /* For  Menus and  dialogs windows  */
        if(transient)
                XSetTransientForHint(dpy->display,window,parent);
        if(event_mask)
                XSelectInput (dpy->display, window, event_mask |ExposureMask);
        else 
                XSelectInput (dpy->display, window,  dpy->eventmask);
        if(visible) XMapWindow(dpy->display,window);
        return ((set_userdata (dpy, window, win)) ? window : (Window) NULL);
}




long *x11_eventp (dpy)
struct LLDisplay *dpy; {
        return XPending (dpy->display) ? (long *) 1 : lispnil ;
}



void x11_window_unmap (dpy,window)
struct LLDisplay *dpy;
Window window; {
        XUnmapWindow (dpy->display, window);
}

void x11_window_map (dpy,window)
struct LLDisplay *dpy;
Window window; {
        XMapWindow (dpy->display, window);
}


