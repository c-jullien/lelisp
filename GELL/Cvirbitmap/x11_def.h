/* GELL 15.26: include file for the module: "x11_def" */
/*             translation done:            "Tue Aug  24 93 10:48:11 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;

extern Ptr x11_create_stipple();
extern long x11_set_stipple();
extern long x11_set_fill_mode();
extern long x11_fill_rectangle();
extern long x11_fill_arc();
extern long x11_fill_area();
extern long x11_fill_rectangles();
extern long x11_fill_arcs();
extern Ptr x11_xcolor();
extern long x11_lispcolor();
extern Ptr x11_xcolorp();
extern long x11_lispcolorp();
extern long x11_query_color_from_pixel();
extern long x11_get_byte_line();
extern long x11_free_cursor();
extern long x11_set_byte_line();
extern long x11_byteref();
extern long x11_byteset();
extern long x11_initialise();
extern Ptr x11_bitprologue();
extern long x11_x_version();
extern long x11_x_release();
extern long x11_x_revision();
extern long x11_init_pixels();
extern long x11_bitepilogue();
extern long x11_bitmap_flush();
extern long x11_bitmap_sync();
extern long x11_bitmap_refresh();
extern Ptr x11_root_window();
extern long x11_pop_window();
extern long x11_move_behind_window();
extern long x11_kill_window();
extern long x11_kill_ll_window();
extern Ptr x11_find_window();
extern long x11_map_window();
extern Ptr x11_eventp();
extern long x11_flush_event();
extern long x11_grab_event();
extern long x11_ungrab_event();
extern long x11_read_event();
extern long x11_peek_event();
extern long x11_read_mouse();
extern Ptr x11_load_font();
extern long x11_font_height();
extern long x11_font_ascent();
extern long x11_width_string();
extern long x11_height_string();
extern long x11_x_base_string();
extern long x11_y_base_string();
extern Ptr x11_create_bitmap();
extern long x11_kill_bitmap();
extern long x11_get_bit_line();
extern long x11_set_bit_line();
extern long x11_bmref();
extern long x11_bmset();
extern Ptr x11_default_gc();
extern Ptr x11_pixmap_to_bitmap();
extern long x11_set_cursor();
extern Ptr x11_create_cursor();
extern long x11_move_cursor();
extern long x11_make_color();
extern long x11_make_mutable_color();
extern long x11_make_named_color();
extern long x11_kill_color();
extern Ptr x11_color_component();
extern Ptr x11_get_default();
extern long x11_bitblit();
extern Ptr x11_make_cursor();
extern long x11_synchronize();
extern Ptr x11_create_window();
extern Ptr x11_create_subwindow();
extern Ptr x11_create_transparentwindow();
extern long x11_move_window();
extern long x11_resize_window();
extern long x11_moveresize_window();
extern long x11_changewindow_border();
extern long x11_changewindow_bordercolor();
extern Ptr x11_build_mask();
extern long x11_changeeventmask_window();
extern long x11_changelongmask_window();
extern long x11_change_title();
extern long x11_change_icontitle();
extern Ptr x11_create_graph_env();
extern Ptr x11_new_create_graph_env();
extern long x11_free_graph_env();
extern long x11_window_map();
extern long x11_window_unmap();
extern long x11_clear_window();
extern long x11_set_font();
extern long x11_set_clip();
extern long x11_set_clips();
extern long x11_draw_string();
extern long x11_draw_image_string();
extern long x11_set_mode();
extern long x11_set_line_style();
extern long x11_set_pattern();
extern long x11_draw_point();
extern long x11_draw_points();
extern long x11_draw_segments();
extern long x11_draw_line();
extern long x11_draw_lines();
extern long x11_draw_rectangle();
extern long x11_draw_rectangles();
extern long x11_draw_arc();
extern long x11_draw_arcs();
extern long x11_fill_oldrectangle();
extern long x11_fill_oldrectangles();
extern long x11_fill_oldarc();
extern long x11_fill_oldarcs();
extern long x11_fill_oldarea();
extern long x11_set_foreground();
extern long x11_set_background();
extern long x11_setwindow_background();
extern long x11_imagebyteorder();
extern long x11_bitmapbitorder();
extern long x11_seticon_pixmap();
extern long x11_setwindow_state();
extern long x11_set_window_pixmap();
extern long x11_store_bytes();
extern Ptr x11_fetch_bytes();
extern long x11_bytes_to_llstring();
extern long x11_topmove_window();
extern long x11_topresize_window();
extern long x11_topmoveresize_window();
extern long x11_topchangewindow_border();
extern long x11_depth();
extern long x11_get_format();
extern Ptr x11_get_data_string();
extern long x11_change_gc_values();
extern long x11_change_attributes();
extern long x11_graph_subwindow_mode();
extern Ptr x11_list_fonts();
extern long x11_font_info();
extern long x11_set_planemask();
extern Ptr x11_xdisplay();
extern long x11_subst_colors();
extern long x11_lookup_named_color();
extern long x11_query_color();
extern long x11_setappname();
extern long x11_setappclass();
extern long x11_forget_window_gravity();

/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLx11def_1(), GLx11def_2(), GLx11def_3(), GLx11def_4();
static Ptr GLx11def_5(), GLx11def_6(), GLx11def_7(), GLx11def_8();
static Ptr GLx11def_9(), GLx11def_10(), GLx11def_11(), GLx11def_12();
static Ptr GLx11def_13(), GLx11def_14(), GLx11def_15(), GLx11def_16();
static Ptr GLx11def_17(), GLx11def_18(), GLx11def_19(), GLx11def_20();
static Ptr GLx11def_21(), GLx11def_22(), GLx11def_23(), GLx11def_24();
static Ptr GLx11def_25(), GLx11def_26(), GLx11def_27(), GLx11def_28();
static Ptr GLx11def_29(), GLx11def_30(), GLx11def_31(), GLx11def_32();
static Ptr GLx11def_33(), GLx11def_34(), GLx11def_35(), GLx11def_36();
static Ptr GLx11def_37(), GLx11def_38(), GLx11def_39(), GLx11def_40();
static Ptr GLx11def_41(), GLx11def_42(), GLx11def_43(), GLx11def_44();
static Ptr GLx11def_45(), GLx11def_46(), GLx11def_47(), GLx11def_48();
static Ptr GLx11def_49(), GLx11def_50(), GLx11def_51(), GLx11def_52();
static Ptr GLx11def_53(), GLx11def_54(), GLx11def_55(), GLx11def_56();
static Ptr GLx11def_57(), GLx11def_58(), GLx11def_59(), GLx11def_60();
static Ptr GLx11def_61(), GLx11def_62(), GLx11def_63(), GLx11def_64();
static Ptr GLx11def_65(), GLx11def_66(), GLx11def_67(), GLx11def_68();
static Ptr GLx11def_69(), GLx11def_70(), GLx11def_71(), GLx11def_72();
static Ptr GLx11def_73(), GLx11def_74(), GLx11def_75(), GLx11def_76();
static Ptr GLx11def_77(), GLx11def_78(), GLx11def_79(), GLx11def_80();
static Ptr GLx11def_81(), GLx11def_82(), GLx11def_83(), GLx11def_84();
static Ptr GLx11def_85(), GLx11def_86(), GLx11def_87(), GLx11def_88();
static Ptr GLx11def_89(), GLx11def_90(), GLx11def_91(), GLx11def_92();
static Ptr GLx11def_93(), GLx11def_94(), GLx11def_95(), GLx11def_96();
static Ptr GLx11def_97(), GLx11def_98(), GLx11def_99(), GLx11def_100();
static Ptr GLx11def_101(), GLx11def_102(), GLx11def_103(), GLx11def_104();
static Ptr GLx11def_105(), GLx11def_106(), GLx11def_107(), GLx11def_108();
static Ptr GLx11def_109(), GLx11def_110(), GLx11def_111(), GLx11def_112();
static Ptr GLx11def_113(), GLx11def_114(), GLx11def_115(), GLx11def_116();
static Ptr GLx11def_117(), GLx11def_118(), GLx11def_119(), GLx11def_120();
static Ptr GLx11def_121(), GLx11def_122(), GLx11def_123(), GLx11def_124();
static Ptr GLx11def_125(), GLx11def_126(), GLx11def_127(), GLx11def_128();
static Ptr GLx11def_129(), GLx11def_130(), GLx11def_131(), GLx11def_132();
static Ptr GLx11def_133(), GLx11def_134(), GLx11def_135(), GLx11def_136();
static Ptr GLx11def_137(), GLx11def_138(), GLx11def_139(), GLx11def_140();
static Ptr GLx11def_141(), GLx11def_142();

/*      trace functions */
static Ptr GDx11def_143(), GDx11def_144(), GDx11def_145(), GDx11def_146();
static Ptr GDx11def_147(), GDx11def_148(), GDx11def_149(), GDx11def_150();
static Ptr GDx11def_151(), GDx11def_152(), GDx11def_153(), GDx11def_154();
static Ptr GDx11def_155(), GDx11def_156(), GDx11def_157(), GDx11def_158();
static Ptr GDx11def_159(), GDx11def_160(), GDx11def_161(), GDx11def_162();
static Ptr GDx11def_163(), GDx11def_164(), GDx11def_165(), GDx11def_166();
static Ptr GDx11def_167(), GDx11def_168(), GDx11def_169(), GDx11def_170();
static Ptr GDx11def_171(), GDx11def_172(), GDx11def_173(), GDx11def_174();
static Ptr GDx11def_175(), GDx11def_176(), GDx11def_177(), GDx11def_178();
static Ptr GDx11def_179(), GDx11def_180(), GDx11def_181(), GDx11def_182();
static Ptr GDx11def_183(), GDx11def_184(), GDx11def_185(), GDx11def_186();
static Ptr GDx11def_187(), GDx11def_188(), GDx11def_189(), GDx11def_190();
static Ptr GDx11def_191(), GDx11def_192(), GDx11def_193(), GDx11def_194();
static Ptr GDx11def_195(), GDx11def_196(), GDx11def_197(), GDx11def_198();
static Ptr GDx11def_199(), GDx11def_200(), GDx11def_201(), GDx11def_202();
static Ptr GDx11def_203(), GDx11def_204(), GDx11def_205(), GDx11def_206();
static Ptr GDx11def_207(), GDx11def_208(), GDx11def_209(), GDx11def_210();
static Ptr GDx11def_211(), GDx11def_212(), GDx11def_213(), GDx11def_214();
static Ptr GDx11def_215(), GDx11def_216(), GDx11def_217(), GDx11def_218();
static Ptr GDx11def_219(), GDx11def_220(), GDx11def_221(), GDx11def_222();
static Ptr GDx11def_223(), GDx11def_224(), GDx11def_225(), GDx11def_226();
static Ptr GDx11def_227(), GDx11def_228(), GDx11def_229(), GDx11def_230();
static Ptr GDx11def_231(), GDx11def_232(), GDx11def_233(), GDx11def_234();
static Ptr GDx11def_235(), GDx11def_236(), GDx11def_237(), GDx11def_238();
static Ptr GDx11def_239(), GDx11def_240(), GDx11def_241(), GDx11def_242();
static Ptr GDx11def_243(), GDx11def_244(), GDx11def_245(), GDx11def_246();
static Ptr GDx11def_247(), GDx11def_248(), GDx11def_249(), GDx11def_250();
static Ptr GDx11def_251(), GDx11def_252(), GDx11def_253(), GDx11def_254();
static Ptr GDx11def_255(), GDx11def_256(), GDx11def_257(), GDx11def_258();
static Ptr GDx11def_259(), GDx11def_260(), GDx11def_261(), GDx11def_262();
static Ptr GDx11def_263(), GDx11def_264(), GDx11def_265(), GDx11def_266();
static Ptr GDx11def_267(), GDx11def_268(), GDx11def_269(), GDx11def_270();
static Ptr GDx11def_271(), GDx11def_272(), GDx11def_273(), GDx11def_274();
static Ptr GDx11def_275(), GDx11def_276(), GDx11def_277(), GDx11def_278();
static Ptr GDx11def_279(), GDx11def_280(), GDx11def_281(), GDx11def_282();
static Ptr GDx11def_283(), GDx11def_284();

static Ptr GYx11def[150];

static const char GNx11def[] = "x11def";
static const char GTx11def[] = "Tue Aug  24 93 10:48:11 ";

static struct GellEntry GWx11def[] = {
        {GLx11def_1,    GDx11def_143,   5},     /* x11_create_stipple */
        {GLx11def_2,    GDx11def_144,   4},     /* x11_set_stipple */
        {GLx11def_3,    GDx11def_145,   4},     /* x11_set_fill_mode */
        {GLx11def_4,    GDx11def_146,   5},     /* x11_fill_rectangle */
        {GLx11def_5,    GDx11def_147,   5},     /* x11_fill_arc */
        {GLx11def_6,    GDx11def_148,   5},     /* x11_fill_area */
        {GLx11def_7,    GDx11def_149,   5},     /* x11_fill_rectangles */
        {GLx11def_8,    GDx11def_150,   5},     /* x11_fill_arcs */
        {GLx11def_9,    GDx11def_151,   3},     /* x11_xcolor */
        {GLx11def_10,   GDx11def_152,   3},     /* x11_lispcolor */
        {GLx11def_11,   GDx11def_153,   3},     /* x11_xcolorp */
        {GLx11def_12,   GDx11def_154,   3},     /* x11_lispcolorp */
        {GLx11def_13,   GDx11def_155,   4},     /* x11_query_color_from_pixel */
        {GLx11def_14,   GDx11def_156,   5},     /* x11_get_byte_line */
        {GLx11def_15,   GDx11def_157,   3},     /* x11_free_cursor */
        {GLx11def_16,   GDx11def_158,   5},     /* x11_set_byte_line */
        {GLx11def_17,   GDx11def_159,   5},     /* x11_byteref */
        {GLx11def_18,   GDx11def_160,   5},     /* x11_byteset */
        {GLx11def_19,   GDx11def_161,   4},     /* x11_initialise */
        {GLx11def_20,   GDx11def_162,   5},     /* x11_bitprologue */
        {GLx11def_21,   GDx11def_163,   2},     /* x11_x_version */
        {GLx11def_22,   GDx11def_164,   2},     /* x11_x_release */
        {GLx11def_23,   GDx11def_165,   2},     /* x11_x_revision */
        {GLx11def_24,   GDx11def_166,   5},     /* x11_init_pixels */
        {GLx11def_25,   GDx11def_167,   2},     /* x11_bitepilogue */
        {GLx11def_26,   GDx11def_168,   2},     /* x11_bitmap_flush */
        {GLx11def_27,   GDx11def_169,   2},     /* x11_bitmap_sync */
        {GLx11def_28,   GDx11def_170,   3},     /* x11_bitmap_refresh */
        {GLx11def_29,   GDx11def_171,   2},     /* x11_root_window */
        {GLx11def_30,   GDx11def_172,   3},     /* x11_pop_window */
        {GLx11def_31,   GDx11def_173,   3},     /* x11_move_behind_window */
        {GLx11def_32,   GDx11def_174,   4},     /* x11_kill_window */
        {GLx11def_33,   GDx11def_175,   4},     /* x11_kill_ll_window */
        {GLx11def_34,   GDx11def_176,   4},     /* x11_find_window */
        {GLx11def_35,   GDx11def_177,   5},     /* x11_map_window */
        {GLx11def_36,   GDx11def_178,   2},     /* x11_eventp */
        {GLx11def_37,   GDx11def_179,   2},     /* x11_flush_event */
        {GLx11def_38,   GDx11def_180,   4},     /* x11_grab_event */
        {GLx11def_39,   GDx11def_181,   2},     /* x11_ungrab_event */
        {GLx11def_40,   GDx11def_182,   3},     /* x11_read_event */
        {GLx11def_41,   GDx11def_183,   3},     /* x11_peek_event */
        {GLx11def_42,   GDx11def_184,   3},     /* x11_read_mouse */
        {GLx11def_43,   GDx11def_185,   3},     /* x11_load_font */
        {GLx11def_44,   GDx11def_186,   2},     /* x11_font_height */
        {GLx11def_45,   GDx11def_187,   2},     /* x11_font_ascent */
        {GLx11def_46,   GDx11def_188,   5},     /* x11_width_string */
        {GLx11def_47,   GDx11def_189,   5},     /* x11_height_string */
        {GLx11def_48,   GDx11def_190,   5},     /* x11_x_base_string */
        {GLx11def_49,   GDx11def_191,   5},     /* x11_y_base_string */
        {GLx11def_50,   GDx11def_192,   4},     /* x11_create_bitmap */
        {GLx11def_51,   GDx11def_193,   3},     /* x11_kill_bitmap */
        {GLx11def_52,   GDx11def_194,   5},     /* x11_get_bit_line */
        {GLx11def_53,   GDx11def_195,   5},     /* x11_set_bit_line */
        {GLx11def_54,   GDx11def_196,   5},     /* x11_bmref */
        {GLx11def_55,   GDx11def_197,   5},     /* x11_bmset */
        {GLx11def_56,   GDx11def_198,   2},     /* x11_default_gc */
        {GLx11def_57,   GDx11def_199,   5},     /* x11_pixmap_to_bitmap */
        {GLx11def_58,   GDx11def_200,   4},     /* x11_set_cursor */
        {GLx11def_59,   GDx11def_201,   3},     /* x11_create_cursor */
        {GLx11def_60,   GDx11def_202,   4},     /* x11_move_cursor */
        {GLx11def_61,   GDx11def_203,   5},     /* x11_make_color */
        {GLx11def_62,   GDx11def_204,   5},     /* x11_make_mutable_color */
        {GLx11def_63,   GDx11def_205,   4},     /* x11_make_named_color */
        {GLx11def_64,   GDx11def_206,   3},     /* x11_kill_color */
        {GLx11def_65,   GDx11def_207,   5},     /* x11_color_component */
        {GLx11def_66,   GDx11def_208,   4},     /* x11_get_default */
        {GLx11def_67,   GDx11def_209,   5},     /* x11_bitblit */
        {GLx11def_68,   GDx11def_210,   5},     /* x11_make_cursor */
        {GLx11def_69,   GDx11def_211,   3},     /* x11_synchronize */
        {GLx11def_70,   GDx11def_212,   5},     /* x11_create_window */
        {GLx11def_71,   GDx11def_213,   5},     /* x11_create_subwindow */
        {GLx11def_72,   GDx11def_214,   5},     /* x11_create_transparentwindow */
        {GLx11def_73,   GDx11def_215,   5},     /* x11_move_window */
        {GLx11def_74,   GDx11def_216,   5},     /* x11_resize_window */
        {GLx11def_75,   GDx11def_217,   5},     /* x11_moveresize_window */
        {GLx11def_76,   GDx11def_218,   4},     /* x11_changewindow_border */
        {GLx11def_77,   GDx11def_219,   4},     /* x11_changewindow_bordercolor */
        {GLx11def_78,   GDx11def_220,   3},     /* x11_build_mask */
        {GLx11def_79,   GDx11def_221,   4},     /* x11_changeeventmask_window */
        {GLx11def_80,   GDx11def_222,   4},     /* x11_changelongmask_window */
        {GLx11def_81,   GDx11def_223,   4},     /* x11_change_title */
        {GLx11def_82,   GDx11def_224,   4},     /* x11_change_icontitle */
        {GLx11def_83,   GDx11def_225,   5},     /* x11_create_graph_env */
        {GLx11def_84,   GDx11def_226,   5},     /* x11_new_create_graph_env */
        {GLx11def_85,   GDx11def_227,   3},     /* x11_free_graph_env */
        {GLx11def_86,   GDx11def_228,   3},     /* x11_window_map */
        {GLx11def_87,   GDx11def_229,   3},     /* x11_window_unmap */
        {GLx11def_88,   GDx11def_230,   5},     /* x11_clear_window */
        {GLx11def_89,   GDx11def_231,   4},     /* x11_set_font */
        {GLx11def_90,   GDx11def_232,   5},     /* x11_set_clip */
        {GLx11def_91,   GDx11def_233,   5},     /* x11_set_clips */
        {GLx11def_92,   GDx11def_234,   5},     /* x11_draw_string */
        {GLx11def_93,   GDx11def_235,   5},     /* x11_draw_image_string */
        {GLx11def_94,   GDx11def_236,   4},     /* x11_set_mode */
        {GLx11def_95,   GDx11def_237,   5},     /* x11_set_line_style */
        {GLx11def_96,   GDx11def_238,   4},     /* x11_set_pattern */
        {GLx11def_97,   GDx11def_239,   5},     /* x11_draw_point */
        {GLx11def_98,   GDx11def_240,   5},     /* x11_draw_points */
        {GLx11def_99,   GDx11def_241,   5},     /* x11_draw_segments */
        {GLx11def_100,  GDx11def_242,   5},     /* x11_draw_line */
        {GLx11def_101,  GDx11def_243,   5},     /* x11_draw_lines */
        {GLx11def_102,  GDx11def_244,   5},     /* x11_draw_rectangle */
        {GLx11def_103,  GDx11def_245,   5},     /* x11_draw_rectangles */
        {GLx11def_104,  GDx11def_246,   5},     /* x11_draw_arc */
        {GLx11def_105,  GDx11def_247,   5},     /* x11_draw_arcs */
        {GLx11def_106,  GDx11def_248,   5},     /* x11_fill_oldrectangle */
        {GLx11def_107,  GDx11def_249,   5},     /* x11_fill_oldrectangles */
        {GLx11def_108,  GDx11def_250,   5},     /* x11_fill_oldarc */
        {GLx11def_109,  GDx11def_251,   5},     /* x11_fill_oldarcs */
        {GLx11def_110,  GDx11def_252,   5},     /* x11_fill_oldarea */
        {GLx11def_111,  GDx11def_253,   4},     /* x11_set_foreground */
        {GLx11def_112,  GDx11def_254,   4},     /* x11_set_background */
        {GLx11def_113,  GDx11def_255,   4},     /* x11_setwindow_background */
        {GLx11def_114,  GDx11def_256,   2},     /* x11_imagebyteorder */
        {GLx11def_115,  GDx11def_257,   2},     /* x11_bitmapbitorder */
        {GLx11def_116,  GDx11def_258,   4},     /* x11_seticon_pixmap */
        {GLx11def_117,  GDx11def_259,   4},     /* x11_setwindow_state */
        {GLx11def_118,  GDx11def_260,   4},     /* x11_set_window_pixmap */
        {GLx11def_119,  GDx11def_261,   4},     /* x11_store_bytes */
        {GLx11def_120,  GDx11def_262,   3},     /* x11_fetch_bytes */
        {GLx11def_121,  GDx11def_263,   4},     /* x11_bytes_to_llstring */
        {GLx11def_122,  GDx11def_264,   5},     /* x11_topmove_window */
        {GLx11def_123,  GDx11def_265,   5},     /* x11_topresize_window */
        {GLx11def_124,  GDx11def_266,   5},     /* x11_topmoveresize_window */
        {GLx11def_125,  GDx11def_267,   5},     /* x11_topchangewindow_border */
        {GLx11def_126,  GDx11def_268,   2},     /* x11_depth */
        {GLx11def_127,  GDx11def_269,   1},     /* x11_get_format */
        {GLx11def_128,  GDx11def_270,   1},     /* x11_get_data_string */
        {GLx11def_129,  GDx11def_271,   5},     /* x11_change_gc_values */
        {GLx11def_130,  GDx11def_272,   5},     /* x11_change_attributes */
        {GLx11def_131,  GDx11def_273,   4},     /* x11_graph_subwindow_mode */
        {GLx11def_132,  GDx11def_274,   5},     /* x11_list_fonts */
        {GLx11def_133,  GDx11def_275,   5},     /* x11_font_info */
        {GLx11def_134,  GDx11def_276,   4},     /* x11_set_planemask */
        {GLx11def_135,  GDx11def_277,   2},     /* x11_xdisplay */
        {GLx11def_136,  GDx11def_278,   5},     /* x11_subst_colors */
        {GLx11def_137,  GDx11def_279,   5},     /* x11_lookup_named_color */
        {GLx11def_138,  GDx11def_280,   4},     /* x11_query_color */
        {GLx11def_139,  GDx11def_281,   2},     /* x11_setappname */
        {GLx11def_140,  GDx11def_282,   2},     /* x11_setappclass */
        {GLx11def_141,  GDx11def_283,   12},    /* vms_init_lispcall */
        {GLx11def_142,  GDx11def_284,   3},     /* x11_forget_window_gravity */
};

struct GellModule GZx11def = {
        GELLMODULESTAMP,
        GNx11def,
        GTx11def,
        GYx11def,
        142,
        GWx11def};
