/* ********************************************************************* */
/*                                                                       */
/*                         FILE x11draw.c                                */
/*                                                                       */
/* Drawing functions and string management.                              */
/*                                                                       */
/* x11.o = x11share.c + x11draw.c + x11lib.c                             */
/* Motif and Olit incarnations will use x11share.c and x11draw.c         */
/*                                                                       */
/* ********************************************************************* */

#include <x11.h>

extern unsigned long x11_xcolor(struct LLDisplay *dpy, long pixel);

void
x11_draw_point(struct LLDisplay *dpy,
               Drawable window,
               GC gc,
               long x,
               long y) {
    XDrawPoint (dpy->display,window, gc, x, y);
}

static long
x11_get_mem(struct LLDisplay *dpy, unsigned long size) {
    /* Assure que dpy->mem pointera sur une zone de taille SIZE au moins. */

    /* printf ("x11_get_mem : demande de %d octets\n\r", size); */
    while (size  > dpy->memsize) {
        dpy->memsize = 2 * dpy->memsize;
        dpy->mem.points = (XPoint *) realloc ((char *) dpy->mem.points,
                                              dpy->memsize);
        if (dpy->mem.points == 0) {
            perror(MESSAGE3);
            return (0);
        }
        /* printf (">>> obtenu %d octets\n\r", dpy->memsize); */
    }
    return (1);
}

static long
x11_store_points(struct LLDisplay *dpy,
                 long n,
                 long *vx,
                 long *vy,
                 long dx,
                 long dy) {
    int i;
    if (x11_get_mem (dpy, n * sizeof (XPoint)) == 0) {
        return (0);
    }
    for (i = 0; i < n; i++) {
        dpy->mem.points[i].x = *vx++ + dx;
        dpy->mem.points[i].y = *vy++ + dy;
    }
    return (1);
}

static long
x11_store_segments(struct LLDisplay *dpy,
                   long n,
                   long *vx1,
                   long *vy1,
                   long *vx2,
                   long *vy2,
                   long dx,
                   long dy) {
    int i;
    if (x11_get_mem (dpy, n * sizeof (XSegment)) == 0) {
        return (0);
    }
    for (i = 0; i < n; i++) {
        dpy->mem.segs[i].x1 = *vx1++ + dx;
        dpy->mem.segs[i].y1 = *vy1++ + dy;
        dpy->mem.segs[i].x2 = *vx2++ + dx;
        dpy->mem.segs[i].y2 = *vy2++ + dy;
    }
    return (1);
}

static long
x11_store_rects(struct LLDisplay *dpy,
                long n,
                long *vx,
                long *vy,
                long *vw,
                long *vh,
                long dx,
                long dy,
                long flag) {
    int i;
    short v; /* XRectangle struct needs short for x & y fields */
    unsigned short vv; /* XRectangle struct needs unsigned short
                              for width & heigth fields */
    XRectangle *rects;

    if (x11_get_mem (dpy, n * sizeof (XRectangle)) == 0) {
        return (0);
    }
    rects = dpy->mem.rects;
    if (flag & 1)
        for (i=0; i < n; i++) {
            rects[i].x = (short)(vx[i] + dx);
        } else {
        v = (short)(vx[0] + dx);
        for (i=0; i < n; i++) {
            rects[i].x = v;
        }
    }
    if (flag & 2)
        for (i=0; i < n; i++) {
            rects[i].y = (short)(vy[i] + dy);
        } else {
        v = (short)(vy[0] + dy);
        for (i=0; i < n; i++) {
            rects[i].y = v;
        }
    }
    if (flag & 4)
        for (i=0; i < n; i++) {
            rects[i].width = (unsigned short)(vw[i]);
        } else {
        vv = (unsigned short)(vw[0]);
        for (i=0; i < n; i++) {
            rects[i].width = vv;
        }
    }
    if (flag & 8)
        for (i=0; i < n; i++) {
            rects[i].height = (unsigned short)vh[i];
        } else {
        vv = (unsigned short)(vh[0]);
        for (i=0; i < n; i++) {
            rects[i].height = vv;
        }
    }
    return (1);
}

static long
x11_store_arcs(struct LLDisplay *dpy,
               long n,
               long *vx,
               long *vy,
               long *vw,
               long *vh,
               long *vangle1,
               long *vangle2) {
    int i;
    if (x11_get_mem (dpy, n * sizeof (XArc)) == 0) {
        return (0);
    }
    for (i = 0; i < n; i++) {
        dpy->mem.arcs[i].x = (2*vx[i] - vw[i])>> 1;
        dpy->mem.arcs[i].y = (2*vy[i] - vh[i])>> 1;
        dpy->mem.arcs[i].width = vw[i];
        dpy->mem.arcs[i].height = vh[i];
        dpy->mem.arcs[i].angle1 = vangle1[i] <<6;
        dpy->mem.arcs[i].angle2 = vangle2[i] <<6;
    }
    return (1);
}

void
x11_draw_points(struct LLDisplay *dpy,
                Drawable window,
                GC gc,
                long *vx,
                long *vy,
                long nbpoint,
                long dx,
                long dy) {
    if (x11_store_points(dpy,nbpoint,vx,vy, dx, dy)) {
        XDrawPoints(dpy->display,window, gc, dpy->mem.points,nbpoint,CoordModeOrigin);
    }
}

void
x11_draw_segments(struct LLDisplay *dpy,
                  Drawable window,
                  GC gc,
                  long *vx1,
                  long *vy1,
                  long *vx2,
                  long *vy2,
                  long nbseg,
                  long dx,
                  long dy) {
    if (x11_store_segments (dpy, nbseg, vx1, vy1, vx2, vy2, dx, dy)) {
        XDrawSegments(dpy->display, window, gc, dpy->mem.segs, nbseg);
    }
}

void
x11_draw_line(struct LLDisplay *dpy,
              Drawable window,
              GC gc,
              long x0,
              long y0,
              long x1,
              long y1) {
    XDrawLine(dpy->display, window,gc, x0,y0,x1,y1);
}

void
x11_draw_lines(struct LLDisplay *dpy,
               Drawable window,
               GC gc,
               long *vx,
               long *vy,
               long nbligne,
               long dx,
               long dy) {
    if (x11_store_points(dpy,nbligne,vx,vy, dx, dy)) {
        XDrawLines(dpy->display, window, gc, dpy->mem.points, nbligne, CoordModeOrigin);
    }
}

void
x11_draw_rectangle(struct LLDisplay *dpy,
                   Drawable window,
                   GC gc,
                   long x,
                   long y,
                   long w,
                   long h) {
    XDrawRectangle(dpy->display, window, gc, x, y, w, h);
}

void
x11_draw_rectangles(struct LLDisplay *dpy,
                    Drawable window,
                    GC gc,
                    long *vx,
                    long *vy,
                    long *vw,
                    long *vh,
                    long nbrect,
                    long dx,
                    long dy,
                    long flag) {
    if (x11_store_rects(dpy, nbrect, vx, vy, vw, vh, dx, dy, flag)) {
        XDrawRectangles(dpy->display, window, gc, dpy->mem.rects, nbrect);
    }
}

void
x11_draw_arc(struct LLDisplay *dpy,
             Drawable window,
             GC gc,
             long x,
             long y,
             long w,
             long h,
             long angl1,
             long angl2) {
    long angle1,angle2;
    long xc,yc;
    xc = ((x + x) - w) >> 1;
    yc = ((y + y) - h) >> 1;
    angle1 = angl1 << 6;
    angle2 = angl2 << 6;
    XDrawArc (dpy->display, window, gc, xc,yc,w,h,angle1,angle2);
}

void
x11_draw_arcs(struct LLDisplay *dpy,
              Drawable window,
              GC gc,
              long *vx,
              long *vy,
              long *vw,
              long *vh,
              long *vangle1,
              long *vangle2,
              long n) {
    if (x11_store_arcs (dpy, n, vx, vy, vw, vh, vangle1, vangle2)) {
        XDrawArcs(dpy->display, window, gc, dpy->mem.arcs, n);
    }
}

void
x11_fill_oldrectangle(struct LLDisplay *dpy,
                      Drawable window,
                      GC gc,
                      long x,
                      long y,
                      long w,
                      long h,
                      long pattern) {
    if ((w > 0) && (h> 0)) {
        if (pattern > 1) {
            XSetFillStyle(dpy->display, gc, FillTiled);
        }
        XFillRectangle(dpy->display, window, gc, x,y,w,h);
        if (pattern > 1) {
            XSetFillStyle(dpy->display, gc, FillSolid);
        }
    }
}

void
x11_fill_oldrectangles(struct LLDisplay *dpy,
                       Drawable window,
                       GC gc,
                       long *vx,
                       long *vy,
                       long *vw,
                       long *vh,
                       long nbrect,
                       long pattern,
                       long dx,
                       long dy,
                       long flag) {
    if (x11_store_rects(dpy, nbrect, vx, vy, vw, vh, dx, dy, flag)) {
        if (pattern > 1) {
            XSetFillStyle(dpy->display, gc, FillTiled);
        }
        XFillRectangles(dpy->display,window,gc,dpy->mem.rects,nbrect);
        if (pattern > 1) {
            XSetFillStyle(dpy->display, gc, FillSolid);
        }
    }
}

void
x11_fill_oldarc(struct LLDisplay *dpy,
                Drawable window,
                GC gc,
                long x,
                long y,
                long w,
                long h,
                long angl1,
                long angl2,
                long pattern) {
    long angle1,angle2;
    long xc,yc;
    xc = ((x+x) - w) / 2;
    yc = ((y+y) - h) / 2;
    angle1 = angl1 << 6;
    angle2 = angl2 << 6;
    if (pattern > 1) {
        XSetFillStyle(dpy->display, gc, FillTiled);
    }
    XFillArc(dpy->display,window, gc, xc,yc,w,h,angle1,angle2);
    if (pattern > 1) {
        XSetFillStyle(dpy->display, gc, FillSolid);
    }
}

void
x11_fill_oldarcs(struct LLDisplay *dpy,
                 Drawable window,
                 GC gc,
                 long *vx,
                 long *vy,
                 long *vw,
                 long *vh,
                 long *vangle1,
                 long *vangle2,
                 long n,
                 long pattern) {
    if (x11_store_arcs (dpy, n, vx, vy, vw, vh, vangle1, vangle2) == 0) {
        if (pattern > 1) {
            XSetFillStyle(dpy->display, gc, FillTiled);
        }
        XFillArcs(dpy->display,window,gc, dpy->mem.arcs, n);
        if (pattern > 1) {
            XSetFillStyle(dpy->display, gc, FillSolid);
        }
    }
}

void
x11_fill_oldarea(struct LLDisplay *dpy,
                 Drawable window,
                 GC gc,
                 long *vx,
                 long *vy,
                 long nbpoint,
                 long pattern,
                 long dx,
                 long dy) {
    if (!x11_store_points(dpy,nbpoint,vx,vy, dx, dy)) {
        return;
    }
    if (pattern > 1) {
        XSetFillStyle(dpy->display, gc, FillTiled);
    }
    XFillPolygon(dpy->display, window, gc,
                 dpy->mem.points,nbpoint,Complex, CoordModeOrigin);
    if (pattern > 1) {
        XSetFillStyle(dpy->display, gc, FillSolid);
    }
}

void
x11_clear_window(struct LLDisplay *dpy,
                 Window window,
                 long x,
                 long y,
                 long w,
                 long h,
                 long flag) {
    if ((w > 0) && (h > 0))
        XClearArea(dpy->display, window, x, y, w, h, flag);
}

void
x11_set_font(struct LLDisplay *dpy, GC gc, XFontStruct *font) {
    XSetFont(dpy->display, gc, font->fid);
}

void
x11_set_clip(struct LLDisplay *dpy,
             GC gc,
             long x,
             long y,
             long w,
             long h) {
    XRectangle clip; /* XRectangle struct needs short for x & y fields */
    /* XRectangle struct needs unsigned short
         for width & heigth fields */

    clip.x = (short)x;
    clip.y = (short)y;
    clip.width  = (unsigned short)(w <= 0 ? 1 : w);
    clip.height = (unsigned short)(h <= 0 ? 1 : h);
    XSetClipRectangles(dpy->display, gc, 0, 0, &clip, 1, Unsorted);
}

void
x11_set_clips(struct LLDisplay *dpy,
              GC gc,
              long *vx,
              long *vy,
              long *vw,
              long *vh,
              long nbrectangle) {
    long flag = 15; /* 4 bits a` 1 */
    if (x11_store_rects(dpy, nbrectangle, vx, vy, vw, vh, 0, 0, flag))
        XSetClipRectangles(dpy->display, gc, 0, 0,
                           dpy->mem.rects, (int)nbrectangle,
                           Unsorted);
}

/*
 Deux fonctions presque identiques :
  - x11_draw_image_string sert plutot pour le mode set
  - x11_draw_string sert plutot pour les autres modes.
 */

void
x11_draw_string(struct LLDisplay *dpy,
                Drawable window,
                GC gc,
                long x,
                long y,
                char *string,
                long start,
                long length) {
    if (start > 0) {
        string += start;
    }
    XDrawString(dpy->display, window, gc, x, y, string, length);
}

void
x11_draw_image_string(struct LLDisplay *dpy,
                      Drawable window,
                      GC gc,
                      long x,
                      long y,
                      char *string,
                      long start,
                      long length) {
    if (start > 0) {
        string += start;
    }
    XDrawImageString(dpy->display, window, gc, x, y, string, length);
}

void
x11_set_mode (struct LLDisplay *dpy, GC gc, long mode) {
    /*
    if (mode == 3)
            XSetPlaneMask (dpy->display,gc, AllPlanes);
    else
            XSetPlaneMask (dpy->display, gc, dpy->bitplane);
    */
    XSetFunction(dpy->display, gc, mode);
}

void
x11_set_line_style(struct LLDisplay *dpy,
                   GC gc,
                   unsigned long width,
                   long style) {
    XSetLineAttributes(dpy->display, gc, width, style, CapButt, JoinMiter);
}

void
x11_set_pattern(struct LLDisplay *dpy, GC gc, Pixmap pattern) {
    XSetTile(dpy->display, gc, pattern);
}

void
x11_set_foreground(struct LLDisplay *dpy, GC gc, long pix) {
    /* 24BP */
    XSetForeground(dpy->display, gc, x11_xcolor(dpy, pix));
}

void
x11_set_background(struct LLDisplay *dpy, GC gc, long pix) {
    /* 24BP */
    XSetBackground(dpy->display, gc, x11_xcolor(dpy, pix));
}

void
x11_setwindow_background(struct LLDisplay *dpy, Window window, long pix) {
    /* 24BP */
    XSetWindowBackground(dpy->display, window, x11_xcolor(dpy, pix));
}

void
x11_store_bytes(struct LLDisplay *dpy, char *bytes, long length) {
    XStoreBytes(dpy->display, bytes, length);
}

/****************************************************/

/* For future Use. */

/* Ceating a stipple a bitmap of depth 1 */
Pixmap
x11_create_stipple(struct LLDisplay *dpy, long w, long h, char *data) {
    Pixmap bitmap;
    bitmap = XCreateBitmapFromData(dpy->display, dpy->root, data, w, h);
    return bitmap;
}

/*
  Setting stipple
*/

void
x11_set_stipple(struct LLDisplay *dpy, GC gc, Pixmap stipple) {
    XSetStipple (dpy->display, gc, stipple);
}

/*
  Setting Fill Mode
  */

void
x11_set_fill_mode(struct LLDisplay *dpy, GC gc, long fill_mode) {
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

void
x11_set_arc_mode(struct LLDisplay *dpy, GC gc, long arc_mode) {
    switch (arc_mode) {
    case 0:
        XSetArcMode(dpy->display, gc,ArcPieSlice);
        break;
    case 1:
        XSetArcMode(dpy->display, gc,ArcChord);
        break;
    }
}

/*
  Fill a rectangle with current fill-mode
  and preserve the old filled mode (generally FilllSolid)
  must be used like this :
  fill-rectangle ... FillOpaqueStiipled FillSolid
  */

void
x11_fill_rectangle(struct LLDisplay *dpy,
                   Drawable window,
                   GC gc,
                   long x,
                   long y,
                   long w,
                   long h) {
    XFillRectangle(dpy->display, window, gc, x, y, w, h);
}

void
x11_fill_arc(struct LLDisplay *dpy,
             Drawable window,
             GC gc,
             long x,
             long y,
             long w,
             long h,
             long angl1,
             long angl2) {
    long angle1,angle2;
    long xc,yc;
    xc = ((x+x) - w) / 2;
    yc = ((y+y) - h) / 2;
    angle1 = angl1 << 6;
    angle2 = angl2 << 6;
    XFillArc(dpy->display, window, gc, xc, yc, w, h, angle1, angle2);
}

void
x11_fill_area(struct LLDisplay *dpy,
              Drawable window,
              GC gc,
              long *vx,
              long *vy,
              long nbpoint,
              long dx,
              long dy) {
    if (!x11_store_points(dpy,nbpoint,vx,vy, dx, dy)) {
        return;
    }
    XFillPolygon(dpy->display,window, gc, dpy->mem.points, nbpoint, Complex, CoordModeOrigin);
}

void
x11_fill_rectangles(struct LLDisplay *dpy,
                    Drawable window,
                    GC gc,
                    long *vx,
                    long *vy,
                    long *vw,
                    long *vh,
                    long nbrect,
                    long dx,
                    long dy,
                    long flag) {

    if (x11_store_rects(dpy, nbrect, vx, vy, vw, vh, dx, dy, flag)) {
        XFillRectangles(dpy->display, window, gc, dpy->mem.rects, nbrect);
    }
}

void
x11_fill_arcs(struct LLDisplay *dpy,
              Drawable window,
              GC gc,
              long *vx,
              long *vy,
              long *vw,
              long *vh,
              long *vangle1,
              long *vangle2,
              long n) {
    if (x11_store_arcs(dpy, n, vx, vy, vw, vh, vangle1, vangle2)) {
        XFillArcs(dpy->display, window, gc, dpy->mem.arcs, n);
    }
}

/********************************************************************/
/*                                                                  */
/*            Strings and fonts                                     */
/*                                                                  */
/********************************************************************/

XFontStruct *
x11_load_font(struct LLDisplay *dpy, char *font) {
    return XLoadQueryFont(dpy->display, font);
}

long
x11_font_ascent(XFontStruct *font) {
    return (font->ascent);
}

long
x11_font_height(XFontStruct *font) {
    return (font->ascent + font->descent);
}

long
x11_width_string(XFontStruct *font, char *string, long start, long length) {
    string += start;
    return XTextWidth(font, string, length);
}

long
x11_height_string(XFontStruct *font, char *string, long start, long length) {
    XCharStruct overall;
    int direction, ascent, descent; /* XTextExtends needs &int */

    string += start;
    XTextExtents(font, string, length,
                 &direction, &ascent, &descent, &overall);
    return (overall.ascent + overall.descent);
}

long
x11_x_base_string(XFontStruct *font, char *string, long start, long length) {
    XCharStruct overall;
    int direction, ascent, descent;

    string += start;
    XTextExtents(font, string, length,
                 &direction, &ascent, &descent, &overall);
    return overall.lbearing;
}

long
x11_y_base_string(XFontStruct *font, char *string, long start, long length) {
    XCharStruct overall;
    int direction, ascent, descent;

    string += start;
    XTextExtents(font, string, length,
                 &direction, &ascent, &descent, &overall);
    return overall.ascent;
}

/*
  search for font information for FONTNAME
  if FONTNAME wasn't loaded we locally load it and free it
*/

long
x11_font_info(struct LLDisplay *dpy,
              char *fontname,
              XFontStruct *font,
              struct lisp_font_info *info) {
    XFontStruct *tmpfont;
    unsigned long value; /* XGetFontProperty needs (unsigned long *)  */
    if (!font) {
        tmpfont = XLoadQueryFont(dpy->display, fontname);
    } else {
        tmpfont = font;
    }
    if (!tmpfont) {
        return 0;
    }

    info->ascent = ((long)(tmpfont->ascent)) & 0xFFFF;
    info->descent = ((long)(tmpfont->descent)) & 0xFFFF;

    info->minrbearing = ((long)(tmpfont->min_bounds.rbearing)) & 0xFFFF;
    info->minlbearing = ((long)(tmpfont->min_bounds.lbearing)) & 0xFFFF;
    info->minascent = ((long)(tmpfont->min_bounds.ascent)) & 0xFFFF;
    info->mindescent = ((long)(tmpfont->min_bounds.descent)) & 0xFFFF;
    info->minwidth = ((long)(tmpfont->min_bounds.width)) & 0xFFFF;

    info->maxrbearing = ((long)(tmpfont->max_bounds.rbearing)) & 0xFFFF;
    info->maxlbearing = ((long)(tmpfont->max_bounds.lbearing)) & 0xFFFF;
    info->maxascent = ((long)(tmpfont->max_bounds.ascent)) & 0xFFFF;
    info->maxdescent = ((long)(tmpfont->max_bounds.descent)) & 0xFFFF;
    info->maxwidth = ((long)(tmpfont->max_bounds.width)) & 0xFFFF;
    if (XGetFontProperty(tmpfont,XA_ITALIC_ANGLE,&value)) {
        info->angle = value;
    }

    if (XGetFontProperty(tmpfont,XA_WEIGHT,&value)) {
        info->weight = value;
    }

    if (!font) {
        XFreeFont(dpy->display,tmpfont);
    }
    return  1;
}

LL_OBJECT
x11_list_fonts(struct LLDisplay *dpy,
               char *pattern,
               long maxnames,
               struct LL_SYMBOL *list_lisp,
               long *lisp_nil) {
    char **list_names;
    int number_fonts;
    int i;
    list_names = XListFonts(dpy->display, pattern, maxnames, &number_fonts);
    if (number_fonts <= 0) {
        return (LL_OBJECT)lisp_nil;
    }
    for (i=0; i<number_fonts; i++) {
        pusharg(LLT_STRING, list_names[i]);
    }
    XFreeFontNames(list_names);
    return (LL_OBJECT)lispcall(LLT_T, number_fonts, list_lisp);
}

void
x11_free_font(struct LLDisplay *dpy, XFontStruct *font) {
    XFreeFont(dpy->display,font);
}
