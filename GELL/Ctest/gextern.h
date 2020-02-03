/* GELL 15.26: include file for the module: "gextern" */
/*             translation done:            "Tue Aug  24 93 15:52:34 " */

/*      impure LLM3 predefined  */
extern Ptr GIdlink, GIllink, GIfcons, GIevalst;


/*      LLM3 functions  */
extern Ptr GXunbind7(), GXunbind5(), GXunbind3(), GXunbind1();
extern Ptr GXpopja4(), GXpopj9(), GXpopj8(), GXpopj7();
extern Ptr GXpopj6(), GXpopj5(), GXpopj4(), GXpopj3();
extern Ptr GXpopj2(), GXpopj1(), GXpopj0();

/*      intern functions        */
static Ptr GLgextern_1(), GLgextern_2(), GLgextern_3(), GLgextern_4();
static Ptr GLgextern_5(), GLgextern_6(), GLgextern_7(), GLgextern_8();
static Ptr GLgextern_9(), GLgextern_10(), GLgextern_11(), GLgextern_12();
static Ptr GLgextern_13(), GLgextern_14(), GLgextern_15(), GLgextern_16();
static Ptr GLgextern_17(), GLgextern_18(), GLgextern_19(), GLgextern_20();
static Ptr GLgextern_21(), GLgextern_22(), GLgextern_23(), GLgextern_24();
static Ptr GLgextern_25(), GLgextern_26(), GLgextern_27(), GLgextern_28();
static Ptr GLgextern_29(), GLgextern_30(), GLgextern_31(), GLgextern_32();
static Ptr GLgextern_33(), GLgextern_34(), GLgextern_35(), GLgextern_36();
static Ptr GLgextern_37(), GLgextern_38(), GLgextern_39(), GLgextern_40();
static Ptr GLgextern_41(), GLgextern_42(), GLgextern_43(), GLgextern_44();
static Ptr GLgextern_45(), GLgextern_46(), GLgextern_47(), GLgextern_48();
static Ptr GLgextern_49(), GLgextern_50(), GLgextern_51(), GLgextern_52();
static Ptr GLgextern_53(), GLgextern_54(), GLgextern_55(), GLgextern_56();
static Ptr GLgextern_57(), GLgextern_58(), GLgextern_59(), GLgextern_60();
static Ptr GLgextern_61(), GLgextern_62(), GLgextern_63(), GLgextern_64();
static Ptr GLgextern_65(), GLgextern_66(), GLgextern_68(), GLgextern_70();
static Ptr GLgextern_71(), GLgextern_72(), GLgextern_73(), GLgextern_74();
static Ptr GLgextern_75(), GLgextern_77(), GLgextern_79(), GLgextern_80();
static Ptr GLgextern_81(), GLgextern_82(), GLgextern_83(), GLgextern_84();
static Ptr GLgextern_86(), GLgextern_88(), GLgextern_89(), GLgextern_90();
static Ptr GLgextern_91(), GLgextern_92(), GLgextern_93(), GLgextern_94();
static Ptr GLgextern_95(), GLgextern_96(), GLgextern_97(), GLgextern_98();
static Ptr GLgextern_99(), GLgextern_100(), GLgextern_101(), GLgextern_102();
static Ptr GLgextern_103(), GLgextern_104(), GLgextern_105(), GLgextern_106();
static Ptr GLgextern_107(), GLgextern_108(), GLgextern_109(), GLgextern_110();
static Ptr GLgextern_111(), GLgextern_112(), GLgextern_113(), GLgextern_114();
static Ptr GLgextern_115(), GLgextern_116(), GLgextern_117(), GLgextern_118();
static Ptr GLgextern_119(), GLgextern_120(), GLgextern_121(), GLgextern_122();
static Ptr GLgextern_123(), GLgextern_124(), GLgextern_125(), GLgextern_126();
static Ptr GLgextern_127(), GLgextern_128(), GLgextern_129(), GLgextern_130();
static Ptr GLgextern_131(), GLgextern_132(), GLgextern_133(), GLgextern_134();
static Ptr GLgextern_135(), GLgextern_136(), GLgextern_137(), GLgextern_138();
static Ptr GLgextern_139(), GLgextern_140(), GLgextern_141(), GLgextern_143();
static Ptr GLgextern_144(), GLgextern_146(), GLgextern_147(), GLgextern_148();
static Ptr GLgextern_149(), GLgextern_150(), GLgextern_151(), GLgextern_152();
static Ptr GLgextern_153(), GLgextern_154(), GLgextern_155(), GLgextern_156();
static Ptr GLgextern_157(), GLgextern_158(), GLgextern_159(), GLgextern_160();
static Ptr GLgextern_161(), GLgextern_162(), GLgextern_163(), GLgextern_164();
static Ptr GLgextern_165(), GLgextern_166(), GLgextern_167(), GLgextern_168();
static Ptr GLgextern_169(), GLgextern_170(), GLgextern_171(), GLgextern_172();
static Ptr GLgextern_173(), GLgextern_174(), GLgextern_175(), GLgextern_176();
static Ptr GLgextern_177(), GLgextern_178(), GLgextern_179(), GLgextern_180();
static Ptr GLgextern_181(), GLgextern_182(), GLgextern_183(), GLgextern_184();
static Ptr GLgextern_185(), GLgextern_186(), GLgextern_187(), GLgextern_188();
static Ptr GLgextern_189(), GLgextern_190(), GLgextern_191(), GLgextern_192();

/*      trace functions */
static Ptr GDgextern_193(), GDgextern_194(), GDgextern_195(), GDgextern_196();
static Ptr GDgextern_197(), GDgextern_198(), GDgextern_199(), GDgextern_200();
static Ptr GDgextern_201(), GDgextern_202(), GDgextern_203(), GDgextern_204();
static Ptr GDgextern_205(), GDgextern_206(), GDgextern_207(), GDgextern_208();
static Ptr GDgextern_209(), GDgextern_210(), GDgextern_211(), GDgextern_212();
static Ptr GDgextern_213(), GDgextern_214(), GDgextern_215(), GDgextern_216();
static Ptr GDgextern_217(), GDgextern_218(), GDgextern_219(), GDgextern_220();
static Ptr GDgextern_221(), GDgextern_222(), GDgextern_223(), GDgextern_224();
static Ptr GDgextern_225(), GDgextern_226(), GDgextern_227(), GDgextern_228();
static Ptr GDgextern_229(), GDgextern_230(), GDgextern_231(), GDgextern_232();
static Ptr GDgextern_233(), GDgextern_234(), GDgextern_235(), GDgextern_236();
static Ptr GDgextern_237(), GDgextern_238(), GDgextern_239(), GDgextern_240();
static Ptr GDgextern_241(), GDgextern_242(), GDgextern_243(), GDgextern_244();
static Ptr GDgextern_245(), GDgextern_246(), GDgextern_247(), GDgextern_248();
static Ptr GDgextern_249(), GDgextern_250(), GDgextern_251(), GDgextern_252();
static Ptr GDgextern_253(), GDgextern_254(), GDgextern_255(), GDgextern_256();
static Ptr GDgextern_257(), GDgextern_258(), GDgextern_259(), GDgextern_260();
static Ptr GDgextern_261(), GDgextern_262(), GDgextern_263(), GDgextern_264();
static Ptr GDgextern_265(), GDgextern_266(), GDgextern_267(), GDgextern_268();
static Ptr GDgextern_269(), GDgextern_270(), GDgextern_271(), GDgextern_272();
static Ptr GDgextern_273(), GDgextern_274(), GDgextern_275(), GDgextern_276();
static Ptr GDgextern_277(), GDgextern_278(), GDgextern_279(), GDgextern_280();
static Ptr GDgextern_281(), GDgextern_282(), GDgextern_283(), GDgextern_284();
static Ptr GDgextern_285(), GDgextern_286(), GDgextern_287(), GDgextern_288();
static Ptr GDgextern_289(), GDgextern_290(), GDgextern_291(), GDgextern_292();
static Ptr GDgextern_293(), GDgextern_294(), GDgextern_295(), GDgextern_296();
static Ptr GDgextern_297(), GDgextern_298(), GDgextern_299(), GDgextern_300();
static Ptr GDgextern_301(), GDgextern_302(), GDgextern_303(), GDgextern_304();
static Ptr GDgextern_305(), GDgextern_306(), GDgextern_307(), GDgextern_308();
static Ptr GDgextern_309(), GDgextern_310(), GDgextern_311(), GDgextern_312();
static Ptr GDgextern_313(), GDgextern_314(), GDgextern_315(), GDgextern_316();
static Ptr GDgextern_317(), GDgextern_318(), GDgextern_319(), GDgextern_320();
static Ptr GDgextern_321(), GDgextern_322(), GDgextern_323(), GDgextern_324();
static Ptr GDgextern_325(), GDgextern_326(), GDgextern_327(), GDgextern_328();
static Ptr GDgextern_329(), GDgextern_330();

static Ptr GYgextern[304];

static const char GNgextern[] = "gextern";
static const char GTgextern[] = "Tue Aug  24 93 15:52:34 ";

static struct GellEntry GWgextern[] = {
        {GLgextern_1,   GDgextern_193,  1},     /* (_tlno) */
        {GLgextern_2,   GDgextern_194,  1},     /* (tlfix 0) */
        {GLgextern_3,   GDgextern_195,  1},     /* (tlfix 1) */
        {GLgextern_4,   GDgextern_196,  1},     /* (tlfix -1) */
        {GLgextern_5,   GDgextern_197,  1},     /* (tlfix 32767) */
        {GLgextern_6,   GDgextern_198,  1},     /* (tlfix -32767) */
        {GLgextern_7,   GDgextern_199,  1},     /* (tlfix #$8000) */
        {GLgextern_8,   GDgextern_200,  1},     /* (tlfloat 1.) */
        {GLgextern_9,   GDgextern_201,  1},     /* (tlfloat -1.) */
        {GLgextern_10,  GDgextern_202,  1},     /* (tlfloat_ 1.) */
        {GLgextern_11,  GDgextern_203,  1},     /* (tlfloat_ -1.) */
        {GLgextern_12,  GDgextern_204,  1},     /* (tlfloat_1 0.) */
        {GLgextern_13,  GDgextern_205,  1},     /* (tlfloat_1 1.) */
        {GLgextern_14,  GDgextern_206,  1},     /* (tlfloat_1 -1.) */
        {GLgextern_15,  GDgextern_207,  1},     /* (tlfloat_1 32767.) */
        {GLgextern_16,  GDgextern_208,  1},     /* (tlfloat_1 -32767.) */
        {GLgextern_17,  GDgextern_209,  1},     /* (tlfloat_1 0.001) */
        {GLgextern_18,  GDgextern_210,  1},     /* (tlfloat_1 0.5) */
        {GLgextern_19,  GDgextern_211,  1},     /* (tlfloat_1 -0.5) */
        {GLgextern_20,  GDgextern_212,  1},     /* (tlfloat_2 0. 0.) */
        {GLgextern_21,  GDgextern_213,  1},     /* (tlfloat_2 1. 2.) */
        {GLgextern_22,  GDgextern_214,  1},     /* (_tlstring a) */
        {GLgextern_23,  GDgextern_215,  1},     /* (_tlstring ) */
        {GLgextern_24,  GDgextern_216,  1},     /* (_tlstring3 a a a) */
        {GLgextern_25,  GDgextern_217,  1},     /* (_tlstring3 a a ) */
        {GLgextern_26,  GDgextern_218,  1},     /* (_tlstring3   ) */
        {GLgextern_27,  GDgextern_219,  1},     /* (tlvector a (vlength a)) */
        {GLgextern_28,  GDgextern_220,  1},     /* (_trfix 3) */
        {GLgextern_29,  GDgextern_221,  1},     /* (_trfix 0) */
        {GLgextern_30,  GDgextern_222,  1},     /* (_trfix -3) */
        {GLgextern_31,  GDgextern_223,  1},     /* (_trfix 16383) */
        {GLgextern_32,  GDgextern_224,  1},     /* (_trfix -16384) */
        {GLgextern_33,  GDgextern_225,  1},     /* (trfloat 5.) */
        {GLgextern_34,  GDgextern_226,  1},     /* (trfloat 32.) */
        {GLgextern_35,  GDgextern_227,  1},     /* (trfloat1 1.) */
        {GLgextern_36,  GDgextern_228,  1},     /* (trfloat1 0.) */
        {GLgextern_37,  GDgextern_229,  1},     /* (ttabint 3 (setq v #[1 2 3])) */
        {GLgextern_38,  GDgextern_230,  1},     /* (ttabint 2 v) */
        {GLgextern_39,  GDgextern_231,  1},     /* (ttabint 3 (setq v #[-3 16383 -16384]))
 */
        {GLgextern_40,  GDgextern_232,  1},     /* (ttabintonly v) */
        {GLgextern_41,  GDgextern_233,  1},     /* (ttabflt 3 (setq v #[1. 2. 3.4])) */
        {GLgextern_42,  GDgextern_234,  1},     /* (tflt_lispcall 3 (setq v #[1. 2. 3.4]))
 */
        {GLgextern_43,  GDgextern_235,  1},     /* (tflt_getsym 3 (setq v #[1. 2. 3.4])) */
        {GLgextern_44,  GDgextern_236,  1},     /* (tlt 'a) */
        {GLgextern_45,  GDgextern_237,  1},     /* (tlexternal (loc 'a)) */
        {GLgextern_46,  GDgextern_238,  1},     /* (tcfloat 0) */
        {GLgextern_47,  GDgextern_239,  1},     /* (tcfloat -1) */
        {GLgextern_48,  GDgextern_240,  1},     /* (tcfloat 1) */
        {GLgextern_49,  GDgextern_241,  1},     /* (tcfloat 32767) */
        {GLgextern_50,  GDgextern_242,  1},     /* (tcfloat -32767) */
        {GLgextern_51,  GDgextern_243,  1},     /* (tcfloat2 0. 0.) */
        {GLgextern_52,  GDgextern_244,  1},     /* (tcfloat2 123. 456.) */
        {GLgextern_53,  GDgextern_245,  1},     /* (f_s_to_d) */
        {GLgextern_54,  GDgextern_246,  1},     /* (tcstring 0) */
        {GLgextern_55,  GDgextern_247,  1},     /* (tcstring 1) */
        {GLgextern_56,  GDgextern_248,  1},     /* (tcstring 2) */
        {GLgextern_57,  GDgextern_249,  1},     /* (tcstring 3) */
        {GLgextern_58,  GDgextern_250,  1},     /* (tcstring 4) */
        {GLgextern_59,  GDgextern_251,  1},     /* (tcstring -1) */
        {GLgextern_60,  GDgextern_252,  1},     /* (tcstring 5) */
        {GLgextern_61,  GDgextern_253,  1},     /* (conv1_tcstring one_strg) */
        {GLgextern_62,  GDgextern_254,  1},     /* (conv2_tcstring one_strg two_strg) */
        {GLgextern_63,  GDgextern_255,  1},     /* 
(progn (setq foo (malloc_for_test 6)) (memory foo 24930) (memory (addadr foo 2
) 25444) (memory (addadr foo 4) 0)) */
        {GLgextern_71,  GDgextern_256,  1},     /* (string_in_malloc foo) */
        {GLgextern_72,  GDgextern_257,  1},     /* 
(progn (setq foo (llmalloc_for_test 6)) (memory foo 25958) (memory (addadr foo
 2) 26472) (memory (addadr foo 4) 0)) */
        {GLgextern_80,  GDgextern_258,  1},     /* (llstring_in_malloc foo) */
        {GLgextern_81,  GDgextern_259,  1},     /* 
(progn (setq foo (llmalloc_for_test1 6)) (memory foo 26986) (memory (addadr fo
o 2) 27500) (memory (addadr foo 4) 0)) */
        {GLgextern_89,  GDgextern_260,  1},     /* (llstring_in_malloc1 foo) */
        {GLgextern_90,  GDgextern_261,  1},     /* (loc (tct 1)) */
        {GLgextern_92,  GDgextern_262,  1},     /* (loc (tct -1)) */
        {GLgextern_94,  GDgextern_263,  1},     /* (tcexternal 1) */
        {GLgextern_95,  GDgextern_264,  1},     /* (tcexternal -1) */
        {GLgextern_96,  GDgextern_265,  1},     /* (tlnadic 1 2 3 4 5 6 7 8 9 10 11) */
        {GLgextern_97,  GDgextern_266,  1},     /* (tlnadic 11 2 3 4 5 6 7 8 9 10 1) */
        {GLgextern_98,  GDgextern_267,  1},     /* 
(tnbmaxi 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 
27 28 29 30 31 32) */
        {GLgextern_99,  GDgextern_268,  1},     /* 
(tnbmaxf 1. 2. 3. 4. 5. 6. 7. 8. 9. 10. 11. 12. 13. 14. 15. 16. 17. 18. 19. 20
. 21. 22. 23. 24. 25. 26. 27. 28. 29. 30. 31. 32.) */
        {GLgextern_100, GDgextern_269,  1},     /* 
(tnbmaxri 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26
 27 28 29 30 31 32) */
        {GLgextern_101, GDgextern_270,  1},     /* 
(tnbmaxrf 1. 2. 3. 4. 5. 6. 7. 8. 9. 10. 11. 12. 13. 14. 15. 16. 17. 18. 19. 2
0. 21. 22. 23. 24. 25. 26. 27. 28. 29. 30. 31. 32.) */
        {GLgextern_102, GDgextern_271,  1},     /* (trfixrfloat 3 5.) */
        {GLgextern_103, GDgextern_272,  1},     /* 
(ttabother 10 3 (setq v1 #[1 2 3]) 1.2 0.5 100 (setq v2 (makevector 1000 10.))
 (setq v3 #[1000 2000 3000 4000]) 4 1000) */
        {GLgextern_104, GDgextern_273,  1},     /* 
(and (consp (setq x (struct_un 1 2. abc))) (atom (cdr x))) */
        {GLgextern_106, GDgextern_274,  1},     /* (tltout -100 1200. hello #[46] 3) */
        {GLgextern_107, GDgextern_275,  1},     /* (neq (tlmalloc 100) 0) */
        {GLgextern_109, GDgextern_276,  1},     /* (neq (tlmalloc 1000) 0) */
        {GLgextern_111, GDgextern_277,  1},     /* (neq (tlmalloc 10000) 0) */
        {GLgextern_113, GDgextern_278,  1},     /* (getsym concat) */
        {GLgextern_114, GDgextern_279,  1},     /* (symbolp (getsym bar)) */
        {GLgextern_116, GDgextern_280,  1},     /* (eq 'getsym (getsym getsym)) */
        {GLgextern_118, GDgextern_281,  1},     /* (cons_en_c 1 2) */
        {GLgextern_119, GDgextern_282,  1},     /* (trace cons) */
        {GLgextern_120, GDgextern_283,  1},     /* (untrace) */
        {GLgextern_121, GDgextern_284,  1},     /* 
(let ((#:sys-package:itsoft (cons 'testgc #:sys-package:itsoft)) (gcalarm ()) 
(consab ())) (until gcalarm (setq consab (cons_en_c 'a 'b))) consab) */
        {GLgextern_125, GDgextern_285,  1},     /* (vect_to_list #[1 2 3 4 5] 3) */
        {GLgextern_126, GDgextern_286,  1},     /* (vect_to_list #[] 0) */
        {GLgextern_127, GDgextern_287,  1},     /* 
(vect_to_list #[q w e r t y u i o p] 10) */
        {GLgextern_128, GDgextern_288,  1},     /* 
(let ((#:sys-package:itsoft (cons 'testgc #:sys-package:itsoft)) (gcalarm ()) 
(liste ())) (until gcalarm (setq liste (vect_to_list #[q w e r t y u i o p] 10
))) liste) */
        {GLgextern_132, GDgextern_289,  1},     /* (init_fib) */
        {GLgextern_133, GDgextern_290,  1},     /* (fib 4) */
        {GLgextern_134, GDgextern_291,  1},     /* (trace fib cfib) */
        {GLgextern_135, GDgextern_292,  1},     /* (fib 20) */
        {GLgextern_136, GDgextern_293,  1},     /* (tpafloat) */
        {GLgextern_137, GDgextern_294,  1},     /* (tpamultifloat 2.1) */
        {GLgextern_138, GDgextern_295,  1},     /* (tlcstring) */
        {GLgextern_139, GDgextern_296,  1},     /* (tpastring) */
        {GLgextern_140, GDgextern_297,  1},     /* (tpamultistrg b) */
        {GLgextern_141, GDgextern_298,  1},     /* 
(progn (when (oddp #:user:strg) (setq #:user:llsav ()) (newl #:user:llsav (mak
estring 1 97))) 0) */
        {GLgextern_147, GDgextern_299,  1},     /* (crac #:user:strg) */
        {GLgextern_148, GDgextern_300,  1},     /* (crac2 #:user:strg) */
        {GLgextern_149, GDgextern_301,  1},     /* (croc #:user:strg) */
        {GLgextern_150, GDgextern_302,  1},     /* (cric #:user:strg) */
        {GLgextern_151, GDgextern_303,  1},     /* (ll_f1 v1 (vlength v1)) */
        {GLgextern_152, GDgextern_304,  1},     /* (ll_i1 v1 (vlength v1)) */
        {GLgextern_153, GDgextern_305,  1},     /* (test_float_lispcall) */
        {GLgextern_154, GDgextern_306,  1},     /* 
(progn (setq co (test_openo llfile.tst)) 0) */
        {GLgextern_156, GDgextern_307,  1},     /* (with ((outchan co)) (print 123)) */
        {GLgextern_162, GDgextern_308,  1},     /* (test_close co) */
        {GLgextern_163, GDgextern_309,  1},     /* 
(progn (setq ci (test_openi llfile.tst)) 0) */
        {GLgextern_165, GDgextern_310,  1},     /* 
(with ((inchan ci)) (test_read_in_file)) */
        {GLgextern_171, GDgextern_311,  1},     /* (test_close ci) */
        {GLgextern_172, GDgextern_312,  1},     /* (test_flush) */
        {GLgextern_173, GDgextern_313,  1},     /* (test_renamefile llfile.tst llfole.tst)
 */
        {GLgextern_174, GDgextern_314,  1},     /* (test_copyfile llfole.tst llfile.tst)
 */
        {GLgextern_175, GDgextern_315,  1},     /* (test_probefile llfole.tst) */
        {GLgextern_176, GDgextern_316,  1},     /* (test_deletefile llfole.tst) */
        {GLgextern_177, GDgextern_317,  1},     /* (test_deletefile llfile.tst) */
        {GLgextern_178, GDgextern_318,  1},     /* (test_probefile llfile.tst) */
        {GLgextern_179, GDgextern_319,  1},     /* (> (test_runtime) 0.) */
        {GLgextern_181, GDgextern_320,  1},     /* (test_sleep 1.) */
        {GLgextern_182, GDgextern_321,  1},     /* (progn (test_date) 0) */
        {GLgextern_184, GDgextern_322,  1},     /* (test_float 1) */
        {GLgextern_185, GDgextern_323,  1},     /* (test_fix 1.2) */
        {GLgextern_186, GDgextern_324,  1},     /* (test_string 1.2) */
        {GLgextern_187, GDgextern_325,  1},     /* (test_version) */
        {GLgextern_188, GDgextern_326,  1},     /* (test_getglobal cboucle) */
        {GLgextern_189, GDgextern_327,  1},     /* (test_fadd 1.2 3.4) */
        {GLgextern_190, GDgextern_328,  1},     /* (test_power 2. 3.) */
        {GLgextern_191, GDgextern_329,  1},     /* (do_not_kill1) */
        {GLgextern_192, GDgextern_330,  1},     /* (c_kill1) */
};

struct GellModule GZgextern = {
        GELLMODULESTAMP,
        GNgextern,
        GTgextern,
        GYgextern,
        138,
        GWgextern};
