;;;; .EnTete	"Le-Lisp version 15.2x" " " "win_def.ll"
;;;; .Date	"2003/05/25"
;;;; .EnPied	"win_def.ll"
;;;; .Version	"1.00"
;;;; .Auteur 	"C. Jullien"
;;;; .Annexe I	""

;;;;
;;;; ATTENTION : ce fichier doit e^tre recompile' sur chaque systeme
;;;;             d'exploitation.

;;; Fichier des defexterns


; window

(defextern windows_bitprologue (vector vector fix) external)
(defextern windows_bitepilogue (external) fix)
(defextern windows_root_window (t) external)
(defextern windows_create_window (vector string external fix t) external)
;(defextern windows_create_window_owner (external vector string external fix t) external)
(defextern windows_create_subwindow (vector string external fix external t) external)
(defextern windows_create_transwindow (fix fix fix fix external fix external t) external)
(defextern windows_move_window (external fix fix) fix)
(defextern windows_resize_window (external fix fix) fix)
(defextern windows_moveresize_window (external fix fix fix fix) fix)
(defextern windows_topmove_window (external fix fix fix) fix)
(defextern windows_topresize_window (external fix fix) fix)
(defextern windows_topmoveresize_window (external fix fix fix fix) fix)
(defextern windows_window_map (external) fix)
(defextern windows_window_transient (external fix) fix)
(defextern windows_free_graph_env (external) fix)
(defextern windows_window_unmap (external) fix)
(defextern windows_set_foreground_window (external) fix)
(defextern windows_clear_window (external external fix fix fix fix) fix)
(defextern windows_set_clip (external fix fix fix fix) fix)
(defextern windows_set_clips (external vector vector vector vector fix) fix)
(defextern windows_change_title (external string) fix)
(defextern windows_set_window_state (external fix) fix)
(defextern windows_topchangewindow_border (external fix) fix)
(defextern windows_move_behind_window (external external) fix)
(defextern windows_pop_window (external) fix)
(defextern windows_push_window (external) fix)
(defextern windows_kill_window (external external) fix)
(defextern windows_keyboard_focus (external fix) fix)
(defextern windows_find_window (fix fix) t)
(defextern windows_map_window (external fix fix vector) fix)
(defextern winversion () float)

; graph
 
(defextern windows_current_window (external external vector) fix)
(defextern windows_new_create_graph_env (external fix fix fix external fix fix fix fix fix) external)
(defextern windows_set_foreground (external fix fix fix) fix)
(defextern windows_set_background (external fix) fix)
(defextern windows_set_window_background (external fix) fix)
(defextern windows_set_line_style (external fix fix fix) fix)
(defextern windows_set_mode (external fix) fix)
;(defextern windows_set_pattern (external external fix) fix)
(defextern windows_create_cursor (string string fix) external)
(defextern windows_named_cursor (string) external)
(defextern windows_set_cursor (external external) fix)
(defextern windows_free_cursor (external external) fix)
(defextern windows_set_font (external fix) fix)
(defextern windows_width_string (external string fix fix) fix) 
(defextern windows_height_string (external string fix fix) fix)
(defextern windows_font_ascent (fix) fix)
(defextern windows_font_height (fix) fix)
(defextern windows_get_fonts (string fix) fix)
(defextern windows_font_info (fix vector) fix)
(defextern windows_system_font_size () fix)
(defextern windows_load_font (fix) fix)
(defextern windows_set_fill_mode (external external fix fix) fix)  
(defextern windows_hilight (fix))
(defextern windows_mutable (fix))
(defextern windows_system_parameters (fix vector) fix)
(defextern windows_system_color (fix vector) fix)
(defextern windows_system_work_area (vector) fix)
(defextern windows_palette_color (fix vector) fix)
(defextern windows_set_optional_fontname (string) fix)

; draw

(defextern windows_draw_cn (external external fix fix fix) fix)
(defextern windows_draw_string (external external fix fix string fix fix) fix) 
(defextern windows_draw_cn_noback (external external fix fix fix) fix)
(defextern windows_draw_string_noback (external external fix fix string fix fix) fix) 
(defextern windows_draw_point (external external fix fix) fix)
(defextern windows_draw_points (external external vector vector fix fix fix) fix)
(defextern windows_draw_line (external external fix fix fix fix) fix)
(defextern windows_draw_lines (external external vector vector fix fix fix) fix)
(defextern windows_draw_segments (external external vector vector vector vector fix fix fix) fix)
(defextern windows_draw_rectangle (external external fix fix fix fix) fix)
(defextern windows_draw_rectangles (external external vector vector vector vector fix fix fix fix) fix)
(defextern windows_draw_arc (external external fix fix fix fix fix fix) fix)
(defextern windows_draw_arcs (external external vector vector vector vector vector vector fix) fix)
(defextern windows_fill_arc (external external fix fix fix fix fix fix) fix)
(defextern windows_fill_arcs (external external vector vector vector vector vector vector fix) fix) 
(defextern windows_fill_chord (external external fix fix fix fix fix fix) fix)
(defextern windows_fill_chords (external external vector vector vector vector vector vector fix) fix) 
(defextern windows_fill_rectangle (external external fix fix fix fix) fix)
(defextern windows_fill_rectangles (external external vector vector vector vector fix fix fix fix) fix) 
(defextern windows_fill_area (external external vector vector fix fix fix) fix) 

; color

(defextern windows_init_table_color () fix)
(defextern windows_make_color (fix fix fix fix) fix)
(defextern windows_select_palette (external) fix)
(defextern windows_color_component (fix fix fix fix fix) fix)
(defextern windows_kill_color (fix) fix)

; bitmap

(defextern windows_create_bitmap (fix fix) external)
(defextern windows_kill_bitmap (external) fix)
(defextern windows_bmref (external fix fix fix fix) fix)
(defextern windows_bmset (external fix fix fix fix fix fix) fix)
(defextern windows_set_bit_line (external fix fix string fix fix fix fix) fix)
(defextern windows_get_bit_line (external fix fix string fix fix fix) fix)
(defextern windows_byteref (external fix fix fix) fix)
(defextern windows_byteset (external fix fix fix fix) fix)
(defextern windows_set_byte_line (external fix fix string fix fix) fix)
(defextern windows_get_byte_line (external fix fix string fix fix fix) fix)
(defextern windows_bitblit (external external fix fix fix fix fix fix external fix fix) fix)
(defextern windows_subst_colors (external vector vector fix fix fix fix) fix)
(defextern windows_create_stipple (fix fix string) external)

; event

(defextern windows_flush_event () fix)
(defextern windows_eventp () fix)
(defextern windows_read_event (vector) t)
(defextern windows_peek_event (vector) t)
(defextern windows_read_mouse (vector) t)
(defextern windows_grab_event (external) fix)
(defextern windows_ungrab_event () fix)
(defextern windows_move_cursor (fix fix) fix)
(defextern windows_dblclks_flag (fix) fix)
