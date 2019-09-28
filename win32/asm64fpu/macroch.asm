	.386p
	.387

	include	macroch.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	macroch.equ
ini_mach	proc	near
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1244
	mov	ecx,offset FLAT:dmc
	mov	edx,offset FLAT:zdmc
	push	z_dmc
	call	near ptr inisymb
	mov	eax,3
	mov	ebx,offset FLAT:pnmac1245
	mov	ecx,offset FLAT:dms
	mov	edx,offset FLAT:zdms
	push	z_dms
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac1246
	mov	ecx,offset FLAT:defsharp
	mov	edx,offset FLAT:zdefsharp
	push	z_defsharp
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1247
	mov	ecx,offset FLAT:llsharp
	mov	edx,offset FLAT:zllsharp
	push	z_llsharp
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1248
	mov	ecx,offset FLAT:zsharp
	call	near ptr inicst
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1249
	mov	ecx,offset FLAT:llcolon
	mov	edx,offset FLAT:zllcolon
	push	z_llcolon
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1250
	mov	ecx,offset FLAT:zuser
	call	near ptr inicst
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1251
	mov	ecx,offset FLAT:llhat
	mov	edx,offset FLAT:zllhat
	push	z_llhat
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1252
	mov	ecx,offset FLAT:lllbra
	mov	edx,offset FLAT:zlllbra
	push	z_lllbra
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1253
	mov	ecx,offset FLAT:llrbra
	mov	edx,offset FLAT:zllrbra
	push	z_llrbra
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1254
	mov	ecx,offset FLAT:llquote
	mov	edx,offset FLAT:zllquote
	push	z_llquote
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1255
	mov	ecx,offset FLAT:llbquote
	mov	edx,offset FLAT:zllbquote
	push	z_llbquote
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1256
	mov	ecx,offset FLAT:llcomma
	mov	edx,offset FLAT:zllcomma
	push	z_llcomma
	call	near ptr inisymb
	mov	eax,2
	mov	ebx,offset FLAT:pnmac1257
	mov	ecx,offset FLAT:zcommaat
	call	near ptr inicst
	mov	eax,2
	mov	ebx,offset FLAT:pnmac1258
	mov	ecx,offset FLAT:zcommadot
	call	near ptr inicst
	mov	ebp,dword ptr [zsyspkgc]
	mov	dword ptr [cpkgc],ebp
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1259
	mov	ecx,offset FLAT:zsysharp
	call	near ptr inicst
	mov	ebp,dword ptr [zsharp]
	mov	dword ptr [eax],ebp
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1260
	mov	ecx,offset FLAT:zsyscol
	call	near ptr inicst
	mov	ebp,dword ptr [zuser]
	mov	dword ptr [eax],ebp
	mov	ebp,dword ptr [zsharp]
	mov	dword ptr [cpkgc],ebp
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1261
	mov	ecx,offset FLAT:shrpdot
	mov	edx,offset FLAT:zshrpdot
	push	z_shrpdot
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1262
	mov	ecx,offset FLAT:shrpplu
	mov	edx,offset FLAT:zshrpplu
	push	z_shrpplu
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1263
	mov	ecx,offset FLAT:shrpmoi
	mov	edx,offset FLAT:zshrpmoi
	push	z_shrpmoi
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1264
	mov	ecx,offset FLAT:shrpquo
	mov	edx,offset FLAT:zshrpquo
	push	z_shrpquo
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1265
	mov	ecx,offset FLAT:shrpsla
	mov	edx,offset FLAT:zshrpsla
	push	z_shrpsla
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1266
	mov	ecx,offset FLAT:shrpbak
	mov	edx,offset FLAT:zshrpbak
	push	z_shrpbak
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1267
	mov	ecx,offset FLAT:shrphat
	mov	edx,offset FLAT:zshrphat
	push	z_shrphat
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1268
	mov	ecx,offset FLAT:shrpcol
	mov	edx,offset FLAT:zshrpcol
	push	z_shrpcol
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1269
	mov	ecx,offset FLAT:shrpdol
	mov	edx,offset FLAT:zshrpdol
	push	z_shrpdol
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1270
	mov	ecx,offset FLAT:shrpprc
	mov	edx,offset FLAT:zshrpprc
	push	z_shrpprc
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1271
	mov	ecx,offset FLAT:shrpgui
	mov	edx,offset FLAT:zshrpgui
	push	z_shrpgui
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1272
	mov	ecx,offset FLAT:shrpbar
	mov	edx,offset FLAT:zshrpbar
	push	z_shrpbar
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1273
	mov	ecx,offset FLAT:shrppar
	mov	edx,offset FLAT:zshrppar
	push	z_shrppar
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1274
	mov	ecx,offset FLAT:shrpbra
	mov	edx,offset FLAT:zshrpbra
	push	z_shrpbra
	call	near ptr inisymb
	mov	eax,1
	mov	ebx,offset FLAT:pnmac1275
	mov	ecx,offset FLAT:shrprad
	mov	edx,offset FLAT:zshrprad
	push	z_shrprad
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1276
	mov	ecx,offset FLAT:zshrpval
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1277
	mov	ecx,offset FLAT:zslowbyte
	call	near ptr inicst
	mov	dword ptr [cpkgc],esi
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1278
	mov	ecx,offset FLAT:typech
	mov	edx,offset FLAT:ztypech
	push	z_typech
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1279
	mov	ecx,offset FLAT:typecod
	mov	edx,offset FLAT:ztypecod
	push	z_typecod
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1280
	mov	ecx,offset FLAT:zcnull
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1281
	mov	ecx,offset FLAT:zcbcom
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1282
	mov	ecx,offset FLAT:zcecom
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1283
	mov	ecx,offset FLAT:zcquote
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1284
	mov	ecx,offset FLAT:zclpar
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1285
	mov	ecx,offset FLAT:zcrpar
	call	near ptr inicst
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1286
	mov	ecx,offset FLAT:zcdot
	call	near ptr inicst
	mov	eax,4
	mov	ebx,offset FLAT:pnmac1287
	mov	ecx,offset FLAT:zcsep
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1288
	mov	ecx,offset FLAT:zcpackage
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1289
	mov	ecx,offset FLAT:zcsplice
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1290
	mov	ecx,offset FLAT:zcmacro
	call	near ptr inicst
	mov	eax,7
	mov	ebx,offset FLAT:pnmac1291
	mov	ecx,offset FLAT:zcstring
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1292
	mov	ecx,offset FLAT:zcpname
	call	near ptr inicst
	mov	eax,5
	mov	ebx,offset FLAT:pnmac1293
	mov	ecx,offset FLAT:zcsymb
	call	near ptr inicst
	mov	eax,6
	mov	ebx,offset FLAT:pnmac1294
	mov	ecx,offset FLAT:zcmsymb
	call	near ptr inicst
	mov	eax,15
	mov	ebx,esi
	call	near ptr makevect
	mov	dword ptr [tabctyp],eax
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcnull]
	pop	dword ptr [ebp+8]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcbcom]
	pop	dword ptr [ebp+12]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcecom]
	pop	dword ptr [ebp+16]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcquote]
	pop	dword ptr [ebp+20]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zclpar]
	pop	dword ptr [ebp+24]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcrpar]
	pop	dword ptr [ebp+28]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcdot]
	pop	dword ptr [ebp+32]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcsep]
	pop	dword ptr [ebp+36]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcpackage]
	pop	dword ptr [ebp+40]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcsplice]
	pop	dword ptr [ebp+44]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcmacro]
	pop	dword ptr [ebp+48]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcstring]
	pop	dword ptr [ebp+52]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcpname]
	pop	dword ptr [ebp+56]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcsymb]
	pop	dword ptr [ebp+60]
	mov	ebp,dword ptr [eax]
	push	dword ptr [zcmsymb]
	pop	dword ptr [ebp+64]
	mov	eax,15
	mov	ebx,esi
	call	near ptr makevect
	mov	dword ptr [tabccod],eax
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+8],0
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+12],1
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+16],2
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+20],3
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+24],4
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+28],5
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+32],6
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+36],7
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+40],8
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+44],9
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+48],10
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+52],11
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+56],12
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+60],13
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+64],14
	ret
ini_mach	endp

dmc	proc	near
	call	near ptr llde
	push	eax
	push	offset FLAT:dmcret
	push	eax
	push	10
	mov	edx,2
	jmp	near ptr typech
dmcret	label	near
	pop	eax
	ret
dmc	endp

dms	proc	near
	call	near ptr llde
	push	eax
	push	offset FLAT:dmcret
	push	eax
	push	9
	mov	edx,2
	jmp	near ptr typech
dms	endp

defsharp	proc	near
	mov	ebx,dword ptr [eax]
	cmp	ebx,esi
	jb	near ptr defshrer
	cmp	ebx,edi
	jae	near ptr defshrer
	push	ebx
	push	dword ptr [4+eax]
	mov	eax,dword ptr [zsysharp]
	mov	eax,dword ptr [eax]
	call	near ptr trysympk
	mov	ebx,dword ptr [zllexpr]
	pop	ecx
	call	near ptr setfn
	pop	eax
	ret
defshrer	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zdefsharp]
	jmp	near ptr errsym
defsharp	endp

llquote	proc	near
	call	near ptr readi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__1
l1__1:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__2
l1__2:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zquote]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
llquote	endp

llcomma	proc	near
	mov	eax,12
	mov	ebx,dword ptr [zllcomma]
	jmp	near ptr errsxt
commain	label	near
	call	near ptr getch
	cmp	dx,64
	je	near ptr commain1
	cmp	dx,46
	je	near ptr commain2
	call	near ptr rereada4
	mov	eax,dword ptr [zllcomma]
commain0	label	near
	push	eax
	call	near ptr readi
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__3
l1__3:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
commain1	label	near
	mov	eax,dword ptr [zcommaat]
	jmp	near ptr commain0
commain2	label	near
	mov	eax,dword ptr [zcommadot]
	jmp	near ptr commain0
llcomma	endp

llbquote	proc	near
	mov	eax,dword ptr [zllcomma]
	push	dword ptr [8+eax]
	movzx	ebx,word ptr [24+eax]
	push	ebx
	mov	ecx,offset FLAT:llbquot1
	call	near ptr sysprot
	mov	eax,dword ptr [zllcomma]
	mov	bp,word ptr [esp+4]
	mov	word ptr [24+eax],bp
	mov	ebp,dword ptr [esp+4*2]
	mov	dword ptr [8+eax],ebp
	mov	eax,dword ptr [esp]
	add	esp,12
	jmp	ecx
llbquot1	label	near
	mov	dword ptr [8+eax],offset FLAT:commain
	mov	word ptr [24+eax],1
	call	near ptr readi
	jmp	near ptr backquot
backcste	label	near
	cmp	eax,esi
	je	near ptr backcst9
	cmp	eax,edi
	jb	near ptr backcst8
	mov	edx,dword ptr [eax]
	cmp	edx,dword ptr [zquote]
	jne	near ptr backcst8
	mov	edx,dword ptr [4+eax]
	cmp	dword ptr [4+edx],esi
	je	near ptr backcst9
backcst8	label	near
	mov	edx,esi
	ret
backcst9	label	near
	mov	edx,dword ptr [zt]
	ret
backquot	label	near
	cmp	eax,esi
	jne	near ptr backquo0
	ret
backquo0	label	near
	cmp	eax,edi
	jae	near ptr backquo1
	jmp	near ptr kwote
backquo1	label	near
	mov	ebx,dword ptr [eax]
	cmp	ebx,dword ptr [zllcomma]
	jne	near ptr backquo2
	mov	eax,dword ptr [4+eax]
	ret
backquo2	label	near
	cmp	ebx,dword ptr [zcommaat]
	je	near ptr backquor
	cmp	ebx,dword ptr [zcommadot]
	je	near ptr backquor
	cmp	ebx,edi
	jb	near ptr backquo3
	mov	ebp,dword ptr [zcommaat]
	cmp	dword ptr [ebx],ebp
	je	near ptr backquo4
	mov	ebp,dword ptr [zcommadot]
	cmp	dword ptr [ebx],ebp
	je	near ptr backquo5
backquo3	label	near
	push	ebx
	mov	eax,dword ptr [4+eax]
	call	near ptr backquot
	xchg	dword ptr [esp],eax
	call	near ptr backquot
	pop	ebx
	cmp	ebx,esi
	jne	near ptr backqu32
	call	near ptr backcste
	cmp	edx,esi
	je	near ptr backqu31
	mov	eax,dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__4
l1__4:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	jmp	near ptr kwote
backqu31	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__5
l1__5:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__6
l1__6:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zfncons]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
backqu32	label	near
	call	near ptr backcste
	cmp	edx,esi
	je	near ptr backqu34
	mov	ecx,eax
	mov	eax,ebx
	call	near ptr backcste
	cmp	edx,esi
	je	near ptr backqu33
	mov	eax,dword ptr [4+eax]
	mov	eax,dword ptr [eax]
	mov	ecx,dword ptr [4+ecx]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__7
l1__7:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [ecx]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	jmp	near ptr kwote
backqu33	label	near
	mov	eax,ecx
backqu34	label	near
	cmp	ebx,edi
	jb	near ptr backqu36
	mov	ecx,dword ptr [ebx]
	cmp	ecx,dword ptr [zllcons]
	jne	near ptr backqu35
	push	dword ptr [zmcons]
	push	eax
	mov	ebx,dword ptr [4+ebx]
	push	dword ptr [ebx]
	mov	ebx,dword ptr [4+ebx]
	push	dword ptr [ebx]
	mov	edx,4
	jmp	near ptr list
backqu35	label	near
	cmp	ecx,dword ptr [zfncons]
	je	near ptr backqu37
	cmp	ecx,dword ptr [zlist]
	je	near ptr backqu38
	cmp	ecx,dword ptr [zmcons]
	je	near ptr backqu38
backqu36	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__8
l1__8:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],ebx
	mov	ebx,esi
	xchg	dword ptr [4+ebp],ebx
	xchg	dword ptr [fcons],ebx
	mov	ecx,dword ptr [zllcons]
	jmp	near ptr backquo7
backqu37	label	near
	mov	ecx,dword ptr [zlist]
backqu38	label	near
	mov	ebx,dword ptr [4+ebx]
	jmp	near ptr backquo7
backquo4	label	near
	mov	ebx,dword ptr [eax]
	push	dword ptr [4+ebx]
	mov	eax,dword ptr [4+eax]
	call	near ptr backquot
	cmp	eax,esi
	jne	near ptr backqu41
	pop	eax
	ret
backqu41	label	near
	cmp	eax,edi
	jb	near ptr backqu42
	mov	ebp,dword ptr [zappend]
	cmp	dword ptr [eax],ebp
	jne	near ptr backqu42
	mov	eax,dword ptr [4+eax]
	jmp	near ptr backqu43
backqu42	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__9
l1__9:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
backqu43	label	near
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__10
l1__10:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ebx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__11
l1__11:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zappend]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
backquo5	label	near
	cmp	dword ptr [4+eax],esi
	jne	near ptr backqu51
	mov	eax,dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	ret
backqu51	label	near
	push	dword ptr [eax]
	mov	eax,dword ptr [4+eax]
	call	near ptr backquot
	cmp	dword ptr [fcons],edi
	jb	near ptr l__12
l1__12:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	pop	ebx
	cmp	dword ptr [fcons],edi
	jb	near ptr l__13
l1__13:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [4+ebx]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__14
l1__14:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [znconc]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
backquo7	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__15
l1__15:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,ebx
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__16
l1__16:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],ecx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	ret
backquor	label	near
	mov	eax,12
	mov	ebx,dword ptr [zllbquote]
	jmp	near ptr errsxt
llbquote	endp

llsharp	proc	near
	call	near ptr getch
	call	near ptr base10p
	cmp	eax,esi
	je	near ptr rdsh4
	sub	dx,48
	push	edx
	jmp	near ptr rdsh3
rdsh2	label	near
	mov	ebp,dword ptr [esp]
	imul	bp,10
	mov	dword ptr [esp],ebp
	sub	dx,48
	add	word ptr [esp],dx
rdsh3	label	near
	call	near ptr getch
	call	near ptr base10p
	cmp	eax,esi
	jne	near ptr rdsh2
	push	1
	jmp	near ptr rdsh5
rdsh4	label	near
	push	0
rdsh5	label	near
	call	near ptr asciii
	mov	ebx,eax
	push	eax
	mov	eax,dword ptr [zsysharp]
	mov	eax,dword ptr [eax]
	mov	ecx,esi
	call	near ptr getfns
	cmp	eax,esi
	je	near ptr rdshr
	add	esp,4
	pop	edx
	jmp	near ptr ffuncall
rdshr	label	near
	pop	eax
	mov	ebx,dword ptr [zllsharp]
	jmp	near ptr errudf
llsharp	endp

shrpdot	proc	near
	call	near ptr readi
	call	near ptr evala1
shrpdot1	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__17
l1__17:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	ret
shrpdot	endp

shrpplu	proc	near
	call	near ptr readi
	call	near ptr evala1
	cmp	eax,esi
	je	near ptr shrpplu1
shrpplu0	label	near
	push	offset FLAT:shrpdot1
	jmp	near ptr readi
shrpplu1	label	near
	call	near ptr readi
	mov	eax,esi
	ret
shrpplu	endp

shrpmoi	proc	near
	call	near ptr readi
	call	near ptr evala1
	cmp	eax,esi
	jne	near ptr shrpplu1
	jmp	near ptr shrpplu0
shrpmoi	endp

shrpquo	proc	near
	call	near ptr readi
	cmp	dword ptr [fcons],edi
	jb	near ptr l__18
l1__18:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	cmp	dword ptr [fcons],edi
	jb	near ptr l__19
l1__19:
	xchg	dword ptr [fcons],edi
	mov	ebp,dword ptr [zfunction]
	mov	dword ptr [edi],ebp
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
	jmp	near ptr shrpdot1
shrpquo	endp

shrpsla	proc	near
	call	near ptr getch
	mov	eax,edx
	jmp	near ptr lowbyte
shrpsla	endp

shrpbak	proc	near
	mov	ebx,dword ptr [zstatrc]
	push	dword ptr [ebx]
	mov	dword ptr [ebx],esi
	call	near ptr readi
	mov	ebx,dword ptr [zstatrc]
	pop	dword ptr [ebx]
	mov	ebx,dword ptr [zshrpval]
	push	eax
	call	near ptr getprop
	pop	ebx
	cmp	eax,esi
	jne	near ptr lowbyte
shrpbak1	label	near
	mov	eax,ebx
	mov	ebx,dword ptr [zshrpval]
	jmp	near ptr errudv
shrpbak	endp

shrphat	proc	near
	call	near ptr getch
	and	dx,31
	mov	eax,edx
	jmp	near ptr lowbyte
shrphat	endp

shrpcol	proc	near
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	movzx	ebx,byte ptr [ebp+66]
	push	ebx
	push	dword ptr [cpkgc]
	mov	ecx,offset FLAT:shrpcol1
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [cpkgc]
	xchg	dword ptr [esp],eax
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+66],al
	xchg	dword ptr [esp],eax
	add	esp,4
	jmp	ecx
shrpcol1	label	near
	mov	dword ptr [cpkgc],esi
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+66],8
	call	near ptr readi
	cmp	eax,edi
	jb	near ptr shrpcol3
	call	near ptr getcv
	cmp	dx,58
	je	near ptr shrpcol2
	call	near ptr rereada4
	jmp	near ptr shrpcol3
shrpcol2	label	near
	mov	dword ptr [cpkgc],eax
	call	near ptr readi
shrpcol3	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__20
l1__20:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	ret
shrpcoer	label	near
	mov	eax,6
	mov	ebx,dword ptr [zshrpcol]
	jmp	near ptr errsxt
shrpcol	endp

shrpdol	proc	near
	push	dword ptr [zshrpdol]
	mov	eax,16
	jmp	near ptr shrprad1
shrpdol	endp

shrpprc	proc	near
	push	dword ptr [zshrpprc]
	mov	eax,2
	jmp	near ptr shrprad1
shrpprc	endp

shrprad	proc	near
	push	dword ptr [zshrprad]
shrprad1	label	near
	call	near ptr shrprad2
	cmp	eax,edi
	jb	near ptr shrpradr
	mov	ebp,dword ptr [eax]
	cmp	dword ptr [bfloat],ebp
	jbe	near ptr shrpradr
	add	esp,4
	ret
shrprad2	label	near
	push	dword ptr [ibase]
	mov	dword ptr [ibase],eax
	mov	ecx,offset FLAT:readi
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [ibase]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__21
l1__21:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	jmp	ecx
shrpradr	label	near
	pop	ebx
	jmp	near ptr errsxt
shrprad	endp

shrpgui	proc	near
	mov	eax,esi
	jmp	near ptr shrpgui2
shrpgui1	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__22
l1__22:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
shrpgui2	label	near
	call	near ptr getch
	cmp	dx,34
	jne	near ptr shrpgui1
	call	near ptr getch
	cmp	dx,34
	je	near ptr shrpgui1
	call	near ptr rereada4
	call	near ptr nreverse
	cmp	dword ptr [fcons],edi
	jb	near ptr l__23
l1__23:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	ret
shrpgui	endp

shrpbar	proc	near
	call	near ptr getcv
shrpbari	label	near
	cmp	dx,35
	je	near ptr shrpbar0
	cmp	dx,124
	jne	near ptr shrpbar
	call	near ptr getcv
	cmp	dx,35
	jne	near ptr shrpbari
	mov	eax,esi
	ret
shrpbar0	label	near
	call	near ptr getcv
	cmp	dx,124
	jne	near ptr shrpbari
	push	offset FLAT:shrpbar
	jmp	near ptr shrpbar
shrpbar	endp

shrppar	proc	near
	call	near ptr read2
	cmp	eax,edi
	jb	near ptr shrpprr
	mov	ebp,eax
	sub	ebp,edi
	shr	ebp,3
	push	eax
	mov	eax,dword ptr [btbin]
	bts	dword ptr [eax],ebp
	pop	eax
shrpprr	label	near
	cmp	dword ptr [fcons],edi
	jb	near ptr l__24
l1__24:
	mov	ebp,dword ptr [fcons]
	mov	dword ptr [ebp],eax
	mov	eax,esi
	xchg	dword ptr [4+ebp],eax
	xchg	dword ptr [fcons],eax
	ret
shrppar	endp

shrpbra	proc	near
	call	near ptr shrpbra0
	cmp	dword ptr [cpkgc],esi
	je	near ptr shrpbrar
	mov	ebp,dword ptr [cpkgc]
	mov	dword ptr [4+eax],ebp
shrpbrar	label	near
	jmp	near ptr shrpdot1
shrpbra0	label	near
	push	dword ptr [cpkgc]
	mov	ecx,offset FLAT:shrpbra1
	call	near ptr sysprot
	pop	eax
	pop	dword ptr [cpkgc]
	jmp	ecx
shrpbra1	label	near
	mov	dword ptr [cpkgc],esi
	mov	eax,93
	call	near ptr readdltd
	push	eax
	call	near ptr lllength
	push	eax
	mov	ebx,esi
	call	near ptr makevect
	pop	ecx
	pop	ebx
	xor	edx,edx
	jmp	near ptr shrpbra3
shrpbra2	label	near
	mov	ebp,dword ptr [eax]
	push	dword ptr [ebx]
	pop	dword ptr [ebp+edx*4+8]
	mov	ebx,dword ptr [4+ebx]
	inc	dx
shrpbra3	label	near
	cmp	dx,cx
	jne	near ptr shrpbra2
	ret
lowbyte	label	near
	push	offset FLAT:shrpdot1
	call	near ptr getch
	cmp	dx,124
	je	near ptr lowbyte0
	jmp	near ptr rereada4
lowbyte0	label	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr lowbyte5
	shl	ax,8
	call	near ptr getch
	cmp	dx,47
	je	near ptr lowbyte2
	cmp	dx,94
	je	near ptr lowbyte3
	cmp	dx,92
	je	near ptr lowbyte4
	mov	eax,edx
	mov	ebx,dword ptr [zslowbyte]
	jmp	near ptr errsxt
lowbyte2	label	near
	call	near ptr getch
lowbytre	label	near
	or	ax,dx
	ret
lowbyte3	label	near
	call	near ptr getch
	and	dx,31
	jmp	near ptr lowbytre
lowbyte4	label	near
	push	eax
	call	near ptr readi
	push	eax
	mov	ebx,dword ptr [zshrpval]
	call	near ptr getprop
	pop	ebx
	pop	edx
	cmp	eax,esi
	je	near ptr shrpbak1
	cmp	dword ptr [bfloat],eax
	ja	near ptr lowbytre
lowbyte5	label	near
	mov	ebx,eax
	mov	eax,dword ptr [zshrpval]
	jmp	near ptr errnia
shrpbra	endp

llcolon	proc	near
	mov	eax,dword ptr [zsyscol]
	mov	eax,dword ptr [eax]
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+66],8
	mov	ecx,offset FLAT:rdpkgc2
	call	near ptr sysprot
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+66],10
	pop	eax
	jmp	ecx
llcolon	endp

llhat	proc	near
	call	near ptr getch
	and	dx,31
	jmp	near ptr asciii
llhat	endp

lllbra	proc	near
	mov	eax,dword ptr [zlllbra]
lllbra1	label	near
	mov	ebx,dword ptr [zlread]
	jmp	near ptr errudf
lllbra	endp

llrbra	proc	near
	mov	eax,dword ptr [zllrbra]
	jmp	near ptr lllbra1
llrbra	endp

typech	proc	near
	mov	ebx,dword ptr [ztypech]
typech0	label	near
	cmp	dx,1
	je	near ptr typechg1
	cmp	dx,2
	je	near ptr typechs1
	mov	eax,2
	jmp	near ptr errwna
typechs1	label	near
	pop	eax
	cmp	dword ptr [bfloat],eax
	ja	near ptr typechs5
	mov	ecx,14
typechs2	label	near
	mov	ebp,dword ptr [tabctyp]
	mov	ebp,dword ptr [ebp]
	mov	edx,dword ptr [ebp+ecx*4+8]
	cmp	eax,edx
	je	near ptr typechs4
	dec	cx
	jge	near ptr typechs2
	jmp	near ptr typechr1
typechs4	label	near
	mov	eax,ecx
	jmp	near ptr typechs6
typechs5	label	near
	or	ax,ax
	jl	near ptr typechr2
	cmp	ax,14
	jg	near ptr typechr2
typechs6	label	near
	mov	ebp,dword ptr [tabccod]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [ebp+eax*4+8]
	xchg	dword ptr [esp],eax
	cmp	ebx,dword ptr [ztypech]
	je	near ptr typechs7
	cmp	dword ptr [bfloat],eax
	jbe	near ptr typechr1
	or	ax,ax
	jl	near ptr typechr2
	cmp	ax,256
	jge	near ptr typechr2
	jmp	near ptr typechs8
typechs7	label	near
	mov	dword ptr [savea4],ebx
	call	near ptr stringa1
	mov	ebp,dword ptr [eax]
	movzx	eax,byte ptr [ebp+8]
typechs8	label	near
	pop	ebx
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+eax+8],bl
	mov	ebp,dword ptr [tabctyp]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [ebp+ebx*4+8]
	ret
typechg1	label	near
	pop	eax
	cmp	ebx,dword ptr [ztypech]
	je	near ptr typechg5
	cmp	dword ptr [bfloat],eax
	jbe	near ptr typechr1
	or	ax,ax
	jl	near ptr typechr2
	cmp	ax,256
	jge	near ptr typechr2
	jmp	near ptr typechg7
typechg5	label	near
	mov	dword ptr [savea4],ebx
	call	near ptr stringa1
	mov	ebp,dword ptr [eax]
	movzx	eax,byte ptr [ebp+8]
typechg7	label	near
	mov	ebp,dword ptr [tabch]
	mov	ebp,dword ptr [ebp]
	movzx	eax,byte ptr [ebp+eax+8]
	mov	ebp,dword ptr [tabctyp]
	mov	ebp,dword ptr [ebp]
	mov	eax,dword ptr [ebp+eax*4+8]
	ret
typechr1	label	near
	jmp	near ptr errnia
typechr2	label	near
	jmp	near ptr erroob
typech	endp

typecod	proc	near
	mov	ebx,dword ptr [ztypecod]
	jmp	near ptr typech0
l__24:
	call	near ptr gccons
	jmp	near ptr l1__24
l__23:
	call	near ptr gccons
	jmp	near ptr l1__23
l__22:
	call	near ptr gccons
	jmp	near ptr l1__22
l__21:
	call	near ptr gccons
	jmp	near ptr l1__21
l__20:
	call	near ptr gccons
	jmp	near ptr l1__20
l__19:
	call	near ptr gccons
	jmp	near ptr l1__19
l__18:
	call	near ptr gccons
	jmp	near ptr l1__18
l__17:
	call	near ptr gccons
	jmp	near ptr l1__17
l__16:
	call	near ptr gccons
	jmp	near ptr l1__16
l__15:
	call	near ptr gccons
	jmp	near ptr l1__15
l__14:
	call	near ptr gccons
	jmp	near ptr l1__14
l__13:
	call	near ptr gccons
	jmp	near ptr l1__13
l__12:
	call	near ptr gccons
	jmp	near ptr l1__12
l__11:
	call	near ptr gccons
	jmp	near ptr l1__11
l__10:
	call	near ptr gccons
	jmp	near ptr l1__10
l__9:
	call	near ptr gccons
	jmp	near ptr l1__9
l__8:
	call	near ptr gccons
	jmp	near ptr l1__8
l__7:
	call	near ptr gccons
	jmp	near ptr l1__7
l__6:
	call	near ptr gccons
	jmp	near ptr l1__6
l__5:
	call	near ptr gccons
	jmp	near ptr l1__5
l__4:
	call	near ptr gccons
	jmp	near ptr l1__4
l__3:
	call	near ptr gccons
	jmp	near ptr l1__3
l__2:
	call	near ptr gccons
	jmp	near ptr l1__2
l__1:
	call	near ptr gccons
	jmp	near ptr l1__1
typecod	endp
_TEXT	ends
	end
