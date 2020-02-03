/* ********************************************************************* */
/*
/*                         FILE x11draw.c
/*
/* Drawing functions and string management.
/*
/* x11.o = x11share.c + x11draw.c + x11lib.c
/* Motif and Olit incarnations will use x11share.c and x11draw.c
/*
/* ********************************************************************* */



#include <x11.h>




x11_draw_point (dpy, window,gc,x, y)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long x, y;{
        XDrawPoint (dpy->display,window, gc, x, y);
}


long static x11_get_mem (dpy, size)
/* Assure que dpy->mem pointera sur une zone de taille SIZE au moins. */
struct LLDisplay *dpy; 
long size ; {

        /* printf ("x11_get_mem : demande de %d octets\n\r", size) ; */
        while (size  > dpy->memsize){
                dpy->memsize = 2 * dpy->memsize ;
                dpy->mem.points = (XPoint *) realloc ((char *) dpy->mem.points,
                                                      dpy->memsize) ;
                if (dpy->mem.points == 0) {
                        perror(MESSAGE3);
                        return (0);
                }
                /* printf (">>> obtenu %d octets\n\r", dpy->memsize) ; */
        }
        return (1) ;
}


long static x11_store_points (dpy, n, vx, vy, dx, dy)
struct LLDisplay *dpy; 
long n;
long vx[], vy[];
long dx, dy ;
{
        int i;
        if (x11_get_mem (dpy, n * sizeof (XPoint)) == 0)
                return (0) ;
        for (i = 0; i < n; i++){
                dpy->mem.points[i].x = *vx++ + dx ;
                dpy->mem.points[i].y = *vy++ + dy ;
        }
        return (1);
}


long static x11_store_segments (dpy, n, vx1, vy1, vx2, vy2, dx, dy)
struct LLDisplay *dpy; 
long n;
long vx1[], vy1[], vx2[], vy2[] ;
long dx, dy ;
{
        int i;
        if (x11_get_mem (dpy, n * sizeof (XSegment)) == 0)
                return (0) ;
        for (i = 0; i < n; i++){
                dpy->mem.segs[i].x1 = *vx1++ + dx ;
                dpy->mem.segs[i].y1 = *vy1++ + dy ;
                dpy->mem.segs[i].x2 = *vx2++ + dx ;
                dpy->mem.segs[i].y2 = *vy2++ + dy ;
        }
        return (1);
}


long static x11_store_rects (dpy, n, vx, vy, vw, vh, dx, dy, flag)
struct LLDisplay *dpy; 
long n;
long vx[], vy[], vw[], vh[] ;
long dx, dy, flag ;
{
        int i, v ;
        XRectangle *rects ;

        if (x11_get_mem (dpy, n * sizeof (XRectangle)) == 0)
                return (0) ;
        rects = dpy->mem.rects ;
        if (flag & 1)
                for(i=0; i < n ;i++) rects[i].x = vx[i] + dx ;
        else {
                v = vx[0] + dx ;
                for(i=0; i < n ;i++) rects[i].x = v ;
        }
        if (flag & 2)
                for(i=0; i < n ;i++) rects[i].y = vy[i] + dy ;
        else {
                v = vy[0] + dy ;
                for(i=0; i < n ;i++) rects[i].y = v ;
        }
        if (flag & 4)
                for(i=0; i < n ;i++) rects[i].width = vw[i] ;
        else {
                v = vw[0] ;
                for(i=0; i < n ;i++) rects[i].width = v ;
        }
        if (flag & 8)
                for(i=0; i < n ;i++) rects[i].height = vh[i] ;
        else {
                v = vh[0] ;
                for(i=0; i < n ;i++) rects[i].height = v ;
        }
        return (1);
}


long static x11_store_arcs (dpy, n, vx, vy, vw, vh, vangle1, vangle2)
struct LLDisplay *dpy; 
long n;
long *vx,*vy,*vw,*vh,*vangle1,*vangle2;
{
        int i;
        if (x11_get_mem (dpy, n * sizeof (XArc)) == 0)
                return (0) ;
        for (i = 0; i < n; i++){
                dpy->mem.arcs[i].x = (2*vx[i] - vw[i])>> 1;
                dpy->mem.arcs[i].y = (2*vy[i] - vh[i])>> 1;
                dpy->mem.arcs[i].width = vw[i];
                dpy->mem.arcs[i].height = vh[i];
                dpy->mem.arcs[i].angle1 = vangle1[i] <<6;
                dpy->mem.arcs[i].angle2 = vangle2[i] <<6;
        }
        return (1);
}


void x11_draw_points (dpy, window,gc,vx, vy, nbpoint, dx, dy)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx, *vy;
long nbpoint ;
long dx, dy ;
{
int i;

if (x11_store_points(dpy,nbpoint,vx,vy, dx, dy))
  XDrawPoints (dpy->display,window, gc, dpy->mem.points,nbpoint,CoordModeOrigin);
}


void x11_draw_segments (dpy, window,gc,vx1, vy1, vx2, vy2,nbseg, dx, dy)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx1, *vy1,*vx2,*vy2;
long nbseg;
long dx, dy ; {

        if (x11_store_segments (dpy, nbseg, vx1, vy1, vx2, vy2, dx, dy))
                XDrawSegments (dpy->display, window, gc, dpy->mem.segs, nbseg);
}


x11_draw_line (dpy, window,gc,x0,y0,x1,y1)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long x0,y0,x1,y1;{
        XDrawLine (dpy->display, window,gc, x0,y0,x1,y1);
}


x11_draw_lines (dpy, window,gc,vx,vy,nbligne, dx, dy)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx,*vy;
long nbligne ;
long dx, dy ;
{
int i;
if (x11_store_points(dpy,nbligne,vx,vy, dx, dy))
  XDrawLines (dpy->display, window, gc, dpy->mem.points, nbligne, CoordModeOrigin);
}
        

x11_draw_rectangle (dpy,window,gc, x,y,w,h)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long x,y,w,h;{
        XDrawRectangle (dpy->display, window,gc,x,y,w,h );
}


x11_draw_rectangles(dpy,window,gc,vx,vy,vw,vh, nbrect, dx, dy, flag)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx,*vy,*vw,*vh;
long nbrect;
long dx, dy, flag ;
{
if (x11_store_rects (dpy, nbrect, vx, vy, vw, vh, dx, dy, flag))
        XDrawRectangles(dpy->display, window, gc, dpy->mem.rects, nbrect) ;
}



void x11_draw_arc(dpy,window,gc,x,y,w,h,angl1,angl2)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long x,y,w,h,angl1,angl2;
{
long angle1,angle2;
long xc,yc;
xc = ((x + x) - w) >> 1;
yc = ((y + y) - h) >> 1;
angle1 = angl1 << 6;
angle2 = angl2 << 6;
XDrawArc (dpy->display, window, gc, xc,yc,w,h,angle1,angle2);
}

void x11_draw_arcs(dpy,window,gc,vx,vy,vw,vh,vangle1,vangle2,n)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx,*vy,*vw,*vh,*vangle1,*vangle2;
long n ;
{
        if (x11_store_arcs (dpy, n, vx, vy, vw, vh, vangle1, vangle2))
                XDrawArcs (dpy->display, window, gc, dpy->mem.arcs, n);
}



x11_fill_oldrectangle (dpy, window,gc,x,y,w,h,pattern)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long x,y,w,h,pattern;
{
        
        if ((w > 0) && (h> 0)){
                if (pattern > 1) 
                        XSetFillStyle (dpy->display, gc, FillTiled);
                XFillRectangle (dpy->display, window, gc, x,y,w,h);
                if (pattern > 1) 
                        XSetFillStyle (dpy->display, gc, FillSolid);
        }
}


x11_fill_oldrectangles(dpy,window,gc,vx,vy,vw,vh,nbrect,pattern, dx, dy, flag)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx,*vy,*vw,*vh;
long nbrect;
long dx, dy, flag ; {

        if (x11_store_rects (dpy, nbrect, vx, vy, vw, vh, dx, dy, flag)) {
                if (pattern > 1) 
                        XSetFillStyle (dpy->display, gc, FillTiled);
                XFillRectangles(dpy->display,window,gc,dpy->mem.rects,nbrect);
                if (pattern > 1) 
                        XSetFillStyle (dpy->display, gc, FillSolid);
        }
}


x11_fill_oldarc (dpy, window,gc,x,y,w,h,angl1,angl2,pattern)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long x,y,w,h,angl1,angl2,pattern;
{
long angle1,angle2;
long xc,yc;
         xc = ((x+x) - w) / 2;
         yc = ((y+y) - h) / 2;
        angle1 = angl1 << 6;
        angle2 = angl2 << 6;
if (pattern > 1) 
        XSetFillStyle (dpy->display, gc, FillTiled);
XFillArc (dpy->display,window, gc, xc,yc,w,h,angle1,angle2);
if (pattern > 1) 
        XSetFillStyle (dpy->display, gc, FillSolid);
}



void x11_fill_oldarcs (dpy, window, gc, vx, vy, vw, vh, vangle1,vangle2,n,pattern)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx,*vy,*vw,*vh,*vangle1,*vangle2;
long n;
long pattern; {

        if (x11_store_arcs (dpy, n, vx, vy, vw, vh, vangle1, vangle2) == 0) {
                if (pattern > 1) 
                        XSetFillStyle (dpy->display, gc, FillTiled);
                XFillArcs(dpy->display,window,gc, dpy->mem.arcs, n);
                if (pattern > 1) 
                        XSetFillStyle (dpy->display, gc, FillSolid) ;
        }
}



void x11_fill_oldarea (dpy, window,gc,vx, vy,nbpoint,pattern, dx, dy)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx, *vy ;
long nbpoint ;
long pattern ;
long dx, dy ; {

long i;

if (!x11_store_points(dpy,nbpoint,vx,vy, dx, dy))
        return;
if (pattern > 1)
        XSetFillStyle (dpy->display, gc, FillTiled) ;
XFillPolygon (dpy->display, window, gc,
              dpy->mem.points,nbpoint,Complex, CoordModeOrigin) ;
if (pattern > 1) 
        XSetFillStyle (dpy->display, gc, FillSolid) ;
}





void x11_clear_window (dpy,window,x,y,w,h,flag)
struct LLDisplay *dpy; 
Window window;
long x, y, w, h,flag;{
        if ((w > 0) && (h > 0))
                XClearArea (dpy->display, window, 
                            x, y, w, h, flag);
}


void x11_set_font(dpy,gc,font)
struct LLDisplay *dpy; 
GC gc;
XFontStruct *font;{
        XSetFont (dpy->display, gc, font->fid);
}


x11_set_clip (dpy, gc, x, y, w, h)
struct LLDisplay *dpy; 
GC gc;
long x, y, w, h; {
        XRectangle clip;
        
        clip.x = x ;
        clip.y = y ;
        clip.width =  w <= 0 ? 1 : w ;
        clip.height = h <= 0 ? 1 : h ;
        XSetClipRectangles (dpy->display, gc, 0, 0, &clip, 1, Unsorted); 
}


x11_set_clips (dpy, gc, vx,vy,vw,vh,nbrectangle)
struct LLDisplay *dpy; 
GC gc;
long *vx,*vy,*vw,*vh;
long nbrectangle; {

        long flag = 15 ; /* 4 bits a` 1 */
        if (x11_store_rects (dpy, nbrectangle, vx, vy, vw, vh, 0, 0, flag))
                XSetClipRectangles (dpy->display, gc, 0, 0,
                                    dpy->mem.rects, nbrectangle, Unsorted); 
}


/*
 Deux fonctions presque identiques :
  - x11_draw_image_string sert plutot pour le mode set
  - x11_draw_string sert plutot pour les autres modes.
 */

x11_draw_string (dpy, window, gc, x, y, string, start, length)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long x, y;
char *string;
long start, length; {
if(start > 0) string += start;
XDrawString (dpy->display, window, gc, x, y, string, length) ;
}

x11_draw_image_string (dpy, window, gc, x, y, string, start, length)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long x, y;
char *string;
long start, length; {
if(start > 0) string += start;
XDrawImageString (dpy->display, window, gc, x, y, string, length) ;
}



x11_set_mode (dpy,gc, mode)
struct LLDisplay *dpy;
GC gc;
long mode;{
/*
if (mode == 3)
        XSetPlaneMask (dpy->display,gc, AllPlanes);
else
        XSetPlaneMask (dpy->display, gc, dpy->bitplane);
*/
XSetFunction (dpy->display, gc, mode);
}


x11_set_line_style (dpy,gc, width, style)
struct LLDisplay *dpy; 
GC gc;
unsigned long width; 
long style;{
        
XSetLineAttributes (dpy->display, gc, width, style, CapButt, JoinMiter);
}


x11_set_pattern (dpy, gc,pattern)
struct LLDisplay *dpy; 
GC gc;
Pixmap pattern;{
        XSetTile (dpy->display, gc, pattern); 
}



x11_set_foreground (dpy,gc,pix) 
struct LLDisplay *dpy;
GC gc;
long pix; {
        /* 24BP */
        XSetForeground(dpy->display, gc, x11_xcolor(dpy,pix));
}


x11_set_background (dpy, gc,pix) 
struct LLDisplay *dpy;
GC gc;
long pix; {
        /* 24BP */
        XSetBackground(dpy->display, gc, x11_xcolor(dpy,pix));
}


x11_setwindow_background (dpy, window,pix) 
struct LLDisplay *dpy;
Window window;
long pix; {
        /* 24BP */
        XSetWindowBackground(dpy->display, window, x11_xcolor(dpy,pix));
}


void x11_store_bytes (dpy,bytes,length)
struct LLDisplay *dpy;
char *bytes;
long length;
{
        XStoreBytes(dpy->display,bytes,length);
}







/****************************************************/

/* For future Use. */


/* Ceating a stipple a bitmap of depth 1 */
Pixmap x11_create_stipple (dpy,w,h,data)
struct LLDisplay *dpy;
long w,h;
char * data;
{
        Pixmap bitmap;
        bitmap = XCreateBitmapFromData(dpy->display,dpy->root,data,w,h);
        return bitmap;
}

/*
  Setting stipple
*/

x11_set_stipple (dpy,gc,stipple)
struct LLDisplay *dpy; 
GC gc;
Pixmap stipple;{
        XSetStipple (dpy->display, gc, stipple); 
}

/*
  Setting Fill Mode
  */

x11_set_fill_mode (dpy,gc,fill_mode)
struct LLDisplay *dpy; 
GC gc;
long fill_mode;{
        switch (fill_mode) {
        case 0:
                XSetFillStyle(dpy->display, gc,FillSolid);
                break;
        case 1:
                XSetFillStyle(dpy->display, gc,FillTiled);
                break;
        case 2:
                XSetFillStyle(dpy->display, gc,FillOpaqueStippled);
                break;
        case 3:
                XSetFillStyle(dpy->display, gc,FillStippled);
                break;
        }
}

/*
  Fill a rectangle with current fill-mode 
  and preserve the old filled mode (generally FilllSolid)
  must be used like this :
  fill-rectangle ... FillOpaqueStiipled FillSolid
  */


x11_fill_rectangle (dpy, window,gc,x,y,w,h)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long x,y,w,h;
{
        XFillRectangle (dpy->display, window, gc, x,y,w,h);
}



x11_fill_arc (dpy, window,gc,x,y,w,h,angl1,angl2)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long x,y,w,h,angl1,angl2;
{
     long angle1,angle2;
     long xc,yc;
     xc = ((x+x) - w) / 2;
     yc = ((y+y) - h) / 2;
     angle1 = angl1 << 6;
     angle2 = angl2 << 6;
       XFillArc (dpy->display,window, gc, xc,yc,w,h,angle1,angle2);
}


void x11_fill_area (dpy, window,gc,vx, vy,nbpoint,dx,dy)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx, *vy, dx ,dy;
{
        if(!x11_store_points(dpy,nbpoint,vx,vy, dx, dy))
                return;
        XFillPolygon (dpy->display,window, gc, dpy->mem.points,nbpoint,Complex, CoordModeOrigin) ;
}


x11_fill_rectangles(dpy,window,gc,vx,vy,vw,vh,nbrect, dx, dy,flag)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx,*vy,*vw,*vh;
long nbrect;
long dx, dy, flag ; {

        if (x11_store_rects (dpy, nbrect, vx, vy, vw, vh, dx, dy, flag)) {
                XFillRectangles(dpy->display,window,gc,dpy->mem.rects,nbrect);
        }
}


void x11_fill_arcs (dpy, window, gc, vx, vy, vw, vh, vangle1,vangle2,n)
struct LLDisplay *dpy; 
Drawable window;
GC gc;
long *vx,*vy,*vw,*vh,*vangle1,*vangle2;
long n;
{

        if (x11_store_arcs (dpy, n, vx, vy, vw, vh, vangle1, vangle2) == 0) {
                XFillArcs(dpy->display,window,gc, dpy->mem.arcs, n);
        }
}




/********************************************************************/
/*
/*            Strings and fonts
/*
/********************************************************************/



XFontStruct *x11_load_font (dpy, font)
struct LLDisplay *dpy; 
char *font;{
        return XLoadQueryFont (dpy->display, font);
}


long x11_font_ascent (font)
XFontStruct *font;{
        return (font->ascent);
}


long x11_font_height (font)
XFontStruct *font; {
        return (font->ascent + font->descent);
}


long x11_width_string (font, string, start, length)
XFontStruct *font;
long start, length;
char *string;{
        string += start;
        return XTextWidth (font, string, length);
}


long x11_height_string (font, string, start, length)
XFontStruct *font;
long start, length;
char *string;{
        XCharStruct overall;
        int direction, ascent, descent;

        string += start;
        XTextExtents (font, string, length,
                      &direction, &ascent, &descent, &overall); 
        return (overall.ascent + overall.descent);
}


long x11_x_base_string (font, string, start, length)
XFontStruct *font;
long start, length;
char *string;{
        XCharStruct overall;
        int direction, ascent, descent;
        
        string += start;
        XTextExtents (font, string, length,
                      &direction, &ascent, &descent, &overall); 
        return overall.lbearing;
}


long x11_y_base_string (font, string, start, length)
XFontStruct *font;
long start, length;
char *string;{
        XCharStruct overall;
        int direction, ascent, descent;
        
        string += start;
        XTextExtents (font, string, length,
                      &direction, &ascent, &descent, &overall); 
        return overall.ascent;
}





/*
  search for font information for FONTNAME
  if FONTNAME wasn't loaded we locally load it and free it
*/

long x11_font_info (dpy, fontname,font,info)
struct LLDisplay *dpy; 
char *fontname;
XFontStruct *font;
struct lisp_font_info *info;{
XFontStruct *tmpfont;
unsigned int value;
        if(!font)
            tmpfont = XLoadQueryFont (dpy->display, fontname);
        else  tmpfont = font;
        if(!tmpfont) return 0;

        info->ascent = tmpfont->ascent & 0xFFFF;
        info->descent = tmpfont->descent & 0xFFFF;
       
        info->minrbearing = tmpfont->min_bounds.rbearing & 0xFFFF;
        info->minlbearing = tmpfont->min_bounds.lbearing & 0xFFFF;
        info->minascent = tmpfont->min_bounds.ascent & 0xFFFF;
        info->mindescent = tmpfont->min_bounds.descent & 0xFFFF;
        info->minwidth = tmpfont->min_bounds.width & 0xFFFF;
        
        info->maxrbearing = tmpfont->max_bounds.rbearing & 0xFFFF;
        info->maxlbearing = tmpfont->max_bounds.lbearing & 0xFFFF;
        info->maxascent = tmpfont->max_bounds.ascent & 0xFFFF;
        info->maxdescent = tmpfont->max_bounds.descent & 0xFFFF;
        info->maxwidth = tmpfont->max_bounds.width & 0xFFFF;
        if(XGetFontProperty(tmpfont,XA_ITALIC_ANGLE,&value)) 
                info->angle = value;

        if(XGetFontProperty(tmpfont,XA_WEIGHT,&value)) 
                info->weight = value;

            
if(!font) XFreeFont(dpy->display,tmpfont);
return  1;
}


LL_OBJECT x11_list_fonts(dpy,pattern,maxnames,list_lisp,lisp_nil)
struct LLDisplay *dpy;
char *pattern;
long maxnames;
long *list_lisp;
long *lisp_nil;
{
char **list_names;
int number_fonts;
int i;
        list_names = XListFonts(dpy->display,pattern,maxnames,&number_fonts);
        if(number_fonts <= 0) return (LL_OBJECT) lisp_nil;
        for(i=0;i<number_fonts;i++) 
#ifdef VMS
         (*llpusharg)(LLT_STRING,convert_cstring_to_descriptor(list_names[i]));
#else
                pusharg(LLT_STRING,list_names[i]);
#endif
        XFreeFontNames(list_names);
#ifdef VMS
        return (LL_OBJECT)(*lllispcall)(LLT_T,number_fonts,list_lisp);
#else 
        return (LL_OBJECT)lispcall(LLT_T,number_fonts,list_lisp);
#endif
}


void x11_free_font (dpy,font)
struct LLDisplay *dpy;
XFontStruct *font;
{
        XFreeFont(dpy->display,font);
}
