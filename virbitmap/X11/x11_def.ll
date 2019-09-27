;;;;
;;;; ATTENTION : ce fichier doit e^tre recompile' sur chaque systeme
;;;;             d'exploitation.

;;; Fichier des defexterns



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;    UNIX PART    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


#+#:system:unixp
(progn
(defextern-cache t)

;;; For stipples Not used 
(defextern x11_create_stipple (external fix fix string) external)
(defextern x11_set_stipple (external external external))
(defextern x11_set_fill_mode (external external fix))
(defextern x11_fill_rectangle (external external external fix fix fix fix))
(defextern x11_fill_arc 
  (external external external fix fix fix fix fix fix))
(defextern x11_fill_area 
  (external external external vector vector fix fix fix))
(defextern x11_fill_rectangles
  (external external external vector vector vector vector fix fix fix  fix))
(defextern x11_fill_arcs
  (external external external vector vector vector vector  vector vector
            fix))
;;;

;; 24BP
(defextern x11_xcolor (external fix) external)
(defextern x11_lispcolor (external external) fix)
(defextern x11_xcolorp (external fix) external)
(defextern x11_lispcolorp (external external) fix)
(defextern x11_query_color_from_pixel (external external vector) fix)

(defextern x11_get_byte_line (external external fix fix string fix))
(defextern x11_free_cursor (external external) )
(defextern x11_set_byte_line (external external fix fix string fix))
(defextern x11_byteref (external external fix fix) fix)
(defextern x11_byteset (external external fix fix fix))
(defextern x11_initialise (t  t t))
(defextern x11_bitprologue (string fix fix vector) external)
(defextern x11_x_version (external) fix)
(defextern x11_x_release (external) fix)
(defextern x11_x_revision (external) fix)
(defextern x11_init_pixels (external fix fix fix))
(defextern x11_bitepilogue (external))
(defextern x11_bitmap_flush (external))
(defextern x11_bitmap_sync (external))
(defextern x11_bitmap_refresh (external external))
(defextern x11_root_window (external) external)
(defextern x11_pop_window (external external))
(defextern x11_move_behind_window (external external))
(defextern x11_kill_window (external external external))
(defextern x11_kill_ll_window (external external external))
(defextern x11_find_window (external fix fix) t)
(defextern x11_map_window (external external fix fix vector))
(defextern x11_eventp (external) t)
(defextern x11_flush_event (external))
(defextern x11_grab_event (external external external))
(defextern x11_ungrab_event (external))
(defextern x11_read_event (external t))
(defextern x11_peek_event (external t))
(defextern x11_read_mouse (external vector))
(defextern x11_load_font (external string) external)
(defextern x11_font_height (external) fix)
(defextern x11_font_ascent (external) fix)


(defextern x11_width_string (external string fix fix) fix)
(defextern x11_height_string (external string fix fix) fix)
(defextern x11_x_base_string (external string fix fix) fix)
(defextern x11_y_base_string (external string fix fix) fix)
(defextern x11_create_bitmap (external fix fix) external)
(defextern x11_kill_bitmap (external external))
(defextern x11_get_bit_line (external external fix fix string fix))
(defextern x11_set_bit_line (external external fix fix string fix external))
(defextern x11_bmref (external external fix fix) fix)
(defextern x11_bmset (external external fix fix fix external))
(defextern x11_default_gc (external) external)
(defextern x11_pixmap_to_bitmap (external external fix fix) external)
(defextern x11_set_cursor (external external external))
(defextern x11_create_cursor (external fix) external)
(defextern x11_move_cursor (external fix fix))
(defextern x11_make_color (external fix fix fix vector) fix)
(defextern x11_make_mutable_color (external fix fix fix) fix)
(defextern x11_make_named_color (external string vector) fix)
(defextern x11_kill_color (external fix))
(defextern x11_color_component (external fix fix fix fix fix) t)
(defextern x11_get_default (external string string) string)
(defextern x11_bitblit
  (external external external fix fix fix fix fix fix external))
(defextern x11_make_cursor 
  (external external external fix fix fix fix fix fix fix fix) external)
(defextern x11_synchronize (external fix) fix)


;;;; The New Parts



(defextern x11_create_window (external t vector external external fix) 
external)
(defextern x11_create_subwindow (external t vector external external fix)
  external)
(defextern x11_create_transparentwindow 
  (external t fix fix fix fix fix t external) external)
(defextern x11_move_window (external external fix fix))
(defextern x11_resize_window (external external fix fix))
(defextern x11_moveresize_window (external external fix fix fix fix))
(defextern x11_changewindow_border (external external fix))
(defextern x11_changewindow_bordercolor (external external fix))
(defextern x11_build_mask (vector fix) t)
(defextern x11_changeeventmask_window (external external fix))
(defextern x11_changelongmask_window (external external t))
(defextern x11_change_title (external external string))
(defextern x11_change_icontitle (external external string))
(defextern x11_create_graph_env (external external external fix fix external fix)
  external)
(defextern x11_new_create_graph_env 
  (external external external fix fix external fix fix fix fix)
  external)
(defextern x11_free_graph_env (external external))
(defextern x11_window_map (external external))
(defextern x11_window_unmap (external external))
(defextern x11_clear_window (external external fix fix fix fix fix))
(defextern x11_set_font (external external external))
(defextern x11_set_clip (external external fix fix fix fix))
(defextern x11_set_clips (external external vector vector vector vector fix))
(defextern x11_draw_string
  (external external external fix fix string fix fix))
(defextern x11_draw_image_string
  (external external external fix fix string fix fix))
(defextern x11_set_mode (external external fix))
(defextern x11_set_arc_mode (external external fix))
(defextern x11_set_line_style (external external fix fix))
(defextern x11_set_pattern (external external external))
(defextern x11_draw_point (external external external fix fix))
(defextern x11_draw_points
  (external external external vector vector fix fix fix))
(defextern x11_draw_segments
  (external external external vector vector vector vector fix fix fix))
(defextern x11_draw_line
  (external external external fix fix fix fix))
(defextern x11_draw_lines
  (external external external vector vector fix fix fix))
(defextern x11_draw_rectangle
  (external external external fix fix fix fix))
(defextern x11_draw_rectangles 
  (external external external vector vector vector vector fix fix fix fix))
(defextern x11_draw_arc (external external external fix fix fix fix fix fix))
(defextern x11_draw_arcs
  (external external  external vector vector vector vector vector vector fix))
(defextern x11_fill_oldrectangle
  (external external external fix fix fix fix fix))
(defextern x11_fill_oldrectangles 
  (external external external vector vector vector  vector fix fix fix fix fix))
(defextern x11_fill_oldarc (external external external fix fix fix fix fix fix fix))
(defextern x11_fill_oldarcs 
  (external external external vector vector vector vector vector vector fix fix))
(defextern x11_fill_oldarea
  (external external external vector vector fix fix fix fix))
(defextern x11_set_foreground (external external fix))
(defextern x11_set_background (external external fix))
(defextern x11_setwindow_background (external external fix))
(defextern x11_imagebyteorder (external) fix)
(defextern x11_bitmapbitorder (external) fix)
(defextern x11_seticon_pixmap (external external external))
(defextern x11_setwindow_state (external external fix))
(defextern x11_set_window_pixmap (external external external))

(defextern x11_store_bytes (external string fix))
(defextern x11_fetch_bytes (external vector) external)
(defextern x11_bytes_to_llstring (external string fix))

(defextern x11_topmove_window (external external fix fix t))
(defextern x11_topresize_window (external external fix fix t))
(defextern x11_topmoveresize_window (external external fix fix fix fix t))
(defextern x11_topchangewindow_border (external external fix t))

(defextern x11_depth (external) fix)
(defextern x11_get_format () fix)
(defextern x11_get_data_string () string)
(defextern x11_change_gc_values (external external vector
                                           external 
                                           fix
                                           external
                                           fix fix
                                           fix fix))


(defextern x11_change_attributes (external external vector vector))
(defextern x11_graph_subwindow_mode (external external fix))
(defextern x11_list_fonts (external string fix t t) t)
(defextern x11_font_info (external string external vector) fix)
(defextern x11_set_planemask (external external external))
(defextern x11_xdisplay (external) external)
(defextern x11_subst_colors (external external vector vector fix fix fix))
(defextern x11_lookup_named_color (external string vector vector) fix)
(defextern x11_query_color (external fix vector) fix)
(defextern x11_setappname(string))
(defextern x11_setappclass(string))
(defextern-cache ())

(defmacro vms_init_lispcall (a b c)
  ())
)








;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;    VMS PART    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;



#+#:system:vmsp
(progn

(defextern x11_create_stipple lelisp_decw(external fix fix string) external)
(defextern x11_set_stipple lelisp_decw (external external external))
(defextern x11_set_fill_mode lelisp_decw (external external fix))
(defextern x11_fill_rectangle lelisp_decw (external external external fix 
                                                       fix fix fix))
(defextern x11_fill_arc lelisp_decw
  (external external external fix fix fix fix fix fix))
(defextern x11_fill_area lelisp_decw
  (external external external vector vector fix fix fix))
(defextern x11_fill_rectangles lelisp_decw
  (external external external vector vector vector vector fix fix fix fix ))
(defextern x11_fill_arcs lelisp_decw
  (external external external vector vector vector vector  vector vector
            fix  ))


(defextern x11_get_byte_line  lelisp_decw
                 (cexternal cexternal fix fix cstring fix))
(defextern x11_free_cursor  lelisp_decw (cexternal cexternal) )
(defextern x11_set_byte_line  lelisp_decw
                        (cexternal cexternal fix fix cstring fix))
(defextern x11_byteref  lelisp_decw (cexternal cexternal fix fix) fix)
(defextern x11_byteset  lelisp_decw (cexternal cexternal fix fix fix))
(defextern x11_initialise lelisp_decw (ct  ct ct))
(defextern x11_bitprologue lelisp_decw (cstring cstring
                        fix fix vector) external)
(defextern x11_x_version  lelisp_decw (cexternal) fix)
(defextern x11_x_release  lelisp_decw (cexternal) fix)
(defextern x11_x_revision  lelisp_decw (cexternal) fix)
(defextern x11_init_pixels  lelisp_decw (cexternal fix fix fix))
(defextern x11_bitepilogue  lelisp_decw (cexternal))
(defextern x11_bitmap_flush  lelisp_decw (cexternal))
(defextern x11_bitmap_sync  lelisp_decw (cexternal))
(defextern x11_bitmap_refresh  lelisp_decw (cexternal cexternal))
(defextern x11_root_window  lelisp_decw (cexternal) external)
(defextern x11_pop_window  lelisp_decw (cexternal cexternal))
(defextern x11_move_behind_window  lelisp_decw (cexternal cexternal))
(defextern x11_kill_window  lelisp_decw (cexternal cexternal cexternal))
(defextern x11_kill_ll_window  lelisp_decw (cexternal cexternal cexternal))
(defextern x11_find_window  lelisp_decw (cexternal fix fix) t)
(defextern x11_map_window  lelisp_decw (cexternal cexternal fix fix vector))
(defextern x11_eventp  lelisp_decw (cexternal) t)
(defextern x11_flush_event  lelisp_decw (cexternal))
(defextern x11_grab_event  lelisp_decw (cexternal cexternal
                                cexternal))
(defextern x11_ungrab_event  lelisp_decw (cexternal))
(defextern x11_read_event  lelisp_decw (cexternal t))
(defextern x11_peek_event  lelisp_decw (cexternal t))
(defextern x11_read_mouse  lelisp_decw (cexternal vector))
(defextern x11_load_font  lelisp_decw (cexternal cstring) external)
(defextern x11_font_height  lelisp_decw (cexternal) fix)
(defextern x11_font_ascent  lelisp_decw (cexternal) fix)


(defextern x11_width_string  lelisp_decw (cexternal cstring fix fix) fix)
(defextern x11_height_string  lelisp_decw (cexternal cstring fix fix) fix)
(defextern x11_x_base_string  lelisp_decw (cexternal cstring fix fix) fix)
(defextern x11_y_base_string  lelisp_decw (cexternal cstring fix fix) fix)
(defextern x11_create_bitmap  lelisp_decw (cexternal fix fix) external)
(defextern x11_kill_bitmap  lelisp_decw (cexternal cexternal))
(defextern x11_get_bit_line  lelisp_decw
                 (cexternal cexternal fix fix cstring fix))
(defextern x11_set_bit_line  lelisp_decw
                 (cexternal cexternal fix fix cstring fix cexternal))
(defextern x11_bmref lelisp_decw (cexternal cexternal fix fix) fix)
(defextern x11_bmset lelisp_decw (cexternal cexternal fix fix fix cexternal))
(defextern x11_default_gc  lelisp_decw (cexternal) external)
(defextern x11_pixmap_to_bitmap  lelisp_decw
                 (cexternal cexternal fix fix) external)
(defextern x11_set_cursor  lelisp_decw (cexternal cexternal cexternal))
(defextern x11_create_cursor  lelisp_decw (cexternal fix) external)
(defextern x11_move_cursor  lelisp_decw (cexternal fix fix))
(defextern x11_make_color  lelisp_decw (cexternal fix fix fix vector) fix)
(defextern x11_make_mutable_color  lelisp_decw (cexternal fix fix fix) fix)
(defextern x11_make_named_color  lelisp_decw (cexternal cstring vector) fix)
(defextern x11_kill_color  lelisp_decw (cexternal fix))
(defextern x11_color_component  lelisp_decw (cexternal fix fix fix fix fix) t)
(defextern x11_get_default  lelisp_decw (cexternal cstring cstring) string)
(defextern x11_bitblit lelisp_decw
  (cexternal cexternal cexternal fix fix fix fix fix fix cexternal))
(defextern x11_make_cursor lelisp_decw
        (cexternal cexternal cexternal fix fix fix fix fix fix fix fix)
                 external)
(defextern x11_synchronize  lelisp_decw (cexternal fix) fix)


;;;; The New Parts



(defextern x11_create_window  lelisp_decw
  (cexternal ct vector cexternal cexternal fix) external)
(defextern x11_create_subwindow  lelisp_decw
        (cexternal ct vector cexternal cexternal fix) external)
(defextern x11_create_transparentwindow
   lelisp_decw (cexternal ct fix fix fix fix fix ct cexternal) external)
(defextern x11_move_window  lelisp_decw (cexternal cexternal fix fix))
(defextern x11_resize_window  lelisp_decw (cexternal cexternal fix fix))
(defextern x11_moveresize_window lelisp_decw
  (cexternal cexternal fix fix fix fix))
(defextern x11_changewindow_border  lelisp_decw (cexternal cexternal fix))
(defextern x11_changewindow_bordercolor  lelisp_decw (cexternal cexternal fix))
(defextern x11_build_mask lelisp_decw (vector fix) t)
(defextern x11_changeeventmask_window  lelisp_decw (cexternal cexternal fix))
(defextern x11_changelongmask_window  lelisp_decw (cexternal cexternal t))
(defextern x11_change_title  lelisp_decw (cexternal cexternal cstring))
(defextern x11_change_icontitle  lelisp_decw (cexternal cexternal cstring))
(defextern x11_create_graph_env  lelisp_decw
        (cexternal cexternal cexternal fix fix cexternal fix)
                external)
(defextern x11_new_create_graph_env lelisp_decw
  (cexternal cexternal cexternal fix fix cexternal fix fix fix fix) external)
(defextern x11_free_graph_env  lelisp_decw (cexternal cexternal))
(defextern x11_window_map  lelisp_decw (cexternal cexternal))
(defextern x11_window_unmap lelisp_decw (cexternal cexternal))
(defextern x11_clear_window lelisp_decw
  (cexternal cexternal fix fix fix fix fix))
(defextern x11_set_font  lelisp_decw (cexternal cexternal cexternal))
(defextern x11_set_clip  lelisp_decw (cexternal cexternal fix fix fix fix))
(defextern x11_set_clips lelisp_decw
  (cexternal cexternal vector vector vector vector fix))
(defextern x11_draw_string
   lelisp_decw (cexternal cexternal cexternal fix fix cstring fix fix))
(defextern x11_draw_image_string lelisp_decw
  (cexternal cexternal cexternal fix fix cstring fix fix))
(defextern x11_set_mode  lelisp_decw (cexternal cexternal fix))
(defextern x11_set_arc_mode  lelisp_decw (cexternal cexternal fix))
(defextern x11_set_line_style  lelisp_decw (cexternal cexternal fix fix))
(defextern x11_set_pattern  lelisp_decw (cexternal cexternal cexternal))
(defextern x11_draw_point lelisp_decw
  (cexternal cexternal cexternal fix fix))
(defextern x11_draw_points lelisp_decw
  (cexternal cexternal cexternal vector vector fix fix fix))
(defextern x11_draw_segments lelisp_decw
  (cexternal cexternal cexternal vector vector vector vector fix fix fix))
(defextern x11_draw_line  lelisp_decw
  (cexternal cexternal cexternal fix fix fix fix))
(defextern x11_draw_lines lelisp_decw
  (cexternal cexternal cexternal vector vector fix fix fix))
(defextern x11_draw_rectangle  lelisp_decw
  (cexternal cexternal cexternal fix fix fix fix))
(defextern x11_draw_rectangles lelisp_decw
  (cexternal cexternal cexternal vector vector vector vector fix fix fix fix))
(defextern x11_draw_arc  lelisp_decw
  (cexternal cexternal cexternal fix fix fix fix fix fix))
(defextern x11_draw_arcs lelisp_decw
        (cexternal cexternal
         cexternal vector vector vector vector vector vector fix))
(defextern x11_fill_oldrectangle  lelisp_decw
  (cexternal cexternal cexternal fix fix fix fix fix))
(defextern x11_fill_oldrectangles lelisp_decw
  (cexternal cexternal cexternal vector vector vector vector fix fix fix fix fix))
(defextern x11_fill_oldarc lelisp_decw
  (cexternal cexternal cexternal fix fix fix fix fix fix fix))
(defextern x11_fill_oldarcs lelisp_decw
  (cexternal cexternal cexternal vector vector vector vector vector vector fix fix))
(defextern x11_fill_oldarea lelisp_decw
  (cexternal cexternal cexternal vector vector fix fix fix fix))
(defextern x11_set_foreground  lelisp_decw (cexternal cexternal fix))
(defextern x11_set_background  lelisp_decw (cexternal cexternal fix))
(defextern x11_setwindow_background  lelisp_decw (cexternal cexternal fix))
(defextern x11_imagebyteorder  lelisp_decw (cexternal) fix)
(defextern x11_bitmapbitorder  lelisp_decw (cexternal) fix)
(defextern x11_seticon_pixmap  lelisp_decw (cexternal cexternal cexternal))
(defextern x11_setwindow_state  lelisp_decw (cexternal cexternal fix))
(defextern x11_set_window_pixmap  lelisp_decw (cexternal cexternal cexternal))

(defextern x11_store_bytes  lelisp_decw (cexternal cstring fix))
(defextern x11_fetch_bytes  lelisp_decw (cexternal vector) external)
(defextern x11_bytes_to_llstring  lelisp_decw (cexternal cstring fix))
(defextern x11_topmove_window  lelisp_decw (cexternal cexternal fix fix t))
(defextern x11_topresize_window  lelisp_decw (cexternal cexternal fix fix t))
(defextern x11_topmoveresize_window
        lelisp_decw (cexternal cexternal fix fix fix fix t))
(defextern x11_topchangewindow_border  lelisp_decw (cexternal cexternal fix t))

(defextern x11_depth  lelisp_decw (cexternal) fix)
(defextern x11_get_format lelisp_decw () fix)
(defextern x11_get_data_string lelisp_decw () string)
(defextern x11_change_gc_values  lelisp_decw (cexternal cexternal vector
                                           cexternal
                                           fix
                                           cexternal
                                           fix fix
                                           fix fix))
(defextern x11_change_attributes  lelisp_decw
        (cexternal cexternal vector vector))
(defextern x11_graph_subwindow_mode  lelisp_decw (cexternal cexternal fix))
(defextern x11_list_fonts  lelisp_decw (cexternal cstring fix ct ct) t)
(defextern x11_font_info  lelisp_decw (cexternal cstring cexternal vector) fix)
(defextern x11_set_planemask  lelisp_decw (cexternal cexternal fix))
(defextern x11_xdisplay  lelisp_decw (cexternal) external)
(defextern x11_subst_colors  lelisp_decw
        (cexternal cexternal vector vector fix fix fix))
(defextern x11_lookup_named_color  lelisp_decw
        (cexternal cstring vector vector) fix)
(defextern x11_query_color  lelisp_decw
         (cexternal fix vector) fix)
(defextern x11_setappname  lelisp_decw (cstring))
(defextern x11_setappclass  lelisp_decw (cstring))
(defextern vms_init_lispcall lelisp_decw (cexternal cexternal cexternal))

)
(defextern x11_forget_window_gravity (external external))

(eval-when (load eval)
           (vms_init_lispcall (getglobal "getsym" "")
                              (getglobal "pusharg" "")
                              (getglobal "lispcall" "")
                              ))
