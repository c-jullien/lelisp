	.386p
	.387

	include	string.dat

	assume	cs:FLAT,ds:FLAT,es:FLAT,fs:FLAT,gs:FLAT,ss:FLAT

_TEXT	segment para use32 public 'CODE'
	include	string.equ
ini_str	proc	near
	mov	eax,6
	mov	ebx,offset FLAT:pnmac681
	mov	ecx,offset FLAT:string000
	mov	edx,offset FLAT:zstring000
	push	z_string000
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac682
	mov	ecx,offset FLAT:plength
	mov	edx,offset FLAT:zplength
	push	z_plength
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac683
	mov	ecx,offset FLAT:slength
	mov	edx,offset FLAT:zslength
	push	z_slength
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac684
	mov	ecx,offset FLAT:slen
	mov	edx,offset FLAT:zslen
	push	z_slen
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac685
	mov	ecx,offset FLAT:sref
	mov	edx,offset FLAT:zsref
	push	z_sref
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac686
	mov	ecx,offset FLAT:sset
	mov	edx,offset FLAT:zsset
	push	z_sset
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac687
	mov	ecx,offset FLAT:typestrg
	mov	edx,offset FLAT:ztypestrg
	push	z_typestrg
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac688
	mov	ecx,offset FLAT:exchstrg
	mov	edx,offset FLAT:zexchstrg
	push	z_exchstrg
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac689
	mov	ecx,offset FLAT:caten
	mov	edx,offset FLAT:zcaten
	push	z_caten
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac690
	mov	ecx,offset FLAT:eqstring
	mov	edx,offset FLAT:zeqstring
	push	z_eqstring
	call	near ptr inisymb
	mov	eax,15
	mov	ebx,offset FLAT:pnmac691
	mov	ecx,offset FLAT:subsequal
	mov	edx,offset FLAT:zsubsequal
	push	z_subsequal
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac692
	mov	ecx,offset FLAT:substring
	mov	edx,offset FLAT:zsubstring
	push	z_substring
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac693
	mov	ecx,offset FLAT:makestrg
	mov	edx,offset FLAT:zmakestrg
	push	z_makestrg
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac694
	mov	ecx,offset FLAT:duplstrg
	mov	edx,offset FLAT:zduplstrg
	push	z_duplstrg
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac695
	mov	ecx,offset FLAT:bltstrg
	mov	edx,offset FLAT:zbltstrg
	push	z_bltstrg
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac696
	mov	ecx,offset FLAT:fillstrg
	mov	edx,offset FLAT:zfillstrg
	push	z_fillstrg
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac697
	mov	ecx,offset FLAT:scanstrg
	mov	edx,offset FLAT:zscanstrg
	push	z_scanstrg
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac698
	mov	ecx,offset FLAT:spanstrg
	mov	edx,offset FLAT:zspanstrg
	push	z_spanstrg
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac699
	mov	ecx,offset FLAT:chrpos
	mov	edx,offset FLAT:zchrpos
	push	z_chrpos
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac700
	mov	ecx,offset FLAT:chrnth
	mov	edx,offset FLAT:zchrnth
	push	z_chrnth
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac701
	mov	ecx,offset FLAT:chrset
	mov	edx,offset FLAT:zchrset
	push	z_chrset
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac702
	mov	ecx,offset FLAT:ffindex
	mov	edx,offset FLAT:zffindex
	push	z_ffindex
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac703
	mov	ecx,offset FLAT:hash
	mov	edx,offset FLAT:zhash
	push	z_hash
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac704
	mov	ecx,offset FLAT:ffsymbol
	mov	edx,offset FLAT:zffsymbol
	push	z_ffsymbol
	call	near ptr inisymb
	mov	eax,5
	mov	ebx,offset FLAT:pnmac705
	mov	ecx,offset FLAT:fpnam
	mov	edx,offset FLAT:zfpnam
	push	z_fpnam
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac706
	mov	ecx,offset FLAT:concat
	mov	edx,offset FLAT:zconcat
	push	z_concat
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac707
	mov	ecx,offset FLAT:gensym
	mov	edx,offset FLAT:zgensym
	push	z_gensym
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac708
	mov	ecx,offset FLAT:alphales
	mov	edx,offset FLAT:zalphales
	push	z_alphales
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac709
	mov	ecx,offset FLAT:bltscrn
	mov	edx,offset FLAT:zbltscrn
	push	z_bltscrn
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac710
	mov	ecx,offset FLAT:typevect
	mov	edx,offset FLAT:ztypevect
	push	z_typevect
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac711
	mov	ecx,offset FLAT:exchvect
	mov	edx,offset FLAT:zexchvect
	push	z_exchvect
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac712
	mov	ecx,offset FLAT:makevect
	mov	edx,offset FLAT:zmakevect
	push	z_makevect
	call	near ptr inisymb
	mov	eax,7
	mov	ebx,offset FLAT:pnmac713
	mov	ecx,offset FLAT:vlength
	mov	edx,offset FLAT:zvlength
	push	z_vlength
	call	near ptr inisymb
	mov	eax,8
	mov	ebx,offset FLAT:pnmac714
	mov	ecx,offset FLAT:eqvector
	mov	edx,offset FLAT:zeqvector
	push	z_eqvector
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac715
	mov	ecx,offset FLAT:vref
	mov	edx,offset FLAT:zvref
	push	z_vref
	call	near ptr inisymb
	mov	eax,4
	mov	ebx,offset FLAT:pnmac716
	mov	ecx,offset FLAT:vset
	mov	edx,offset FLAT:zvset
	push	z_vset
	call	near ptr inisymb
	mov	eax,9
	mov	ebx,offset FLAT:pnmac717
	mov	ecx,offset FLAT:bltvect
	mov	edx,offset FLAT:zbltvect
	push	z_bltvect
	call	near ptr inisymb
	mov	eax,6
	mov	ebx,offset FLAT:pnmac718
	mov	ecx,offset FLAT:vector
	mov	edx,offset FLAT:zvector
	push	z_vector
	call	near ptr inisymb
	mov	eax,10
	mov	ebx,offset FLAT:pnmac719
	mov	ecx,offset FLAT:fillvect
	mov	edx,offset FLAT:zfillvect
	push	z_fillvect
	call	near ptr inisymb
	mov	eax,13
	mov	ebx,offset FLAT:pnmac720
	mov	ecx,offset FLAT:zgenstrg
	call	near ptr inicst
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [12+eax],ebp
	push	eax
	mov	eax,1
	mov	ebx,103
	call	near ptr makestrg
	pop	ecx
	mov	dword ptr [ecx],eax
	mov	eax,14
	mov	ebx,offset FLAT:pnmac721
	mov	ecx,offset FLAT:zgenscpt
	call	near ptr inicst
	mov	ebp,dword ptr [zllsystem]
	mov	dword ptr [12+eax],ebp
	mov	dword ptr [eax],100
	mov	eax,1024
	xor	ebx,ebx
	call	near ptr makestrg
	mov	dword ptr [bufstrg],eax
	ret
strgallc	label	near
	or	bx,bx
	jge	near ptr strgall0
	xor	ebx,ebx
strgall0	label	near
	mov	eax,dword ptr [fstrg]
	cmp	eax,esi
	je	near ptr strgall3
	mov	ebp,dword ptr [cheap]
	mov	dword ptr [ocheap],ebp
	mov	ebp,dword ptr [cheap]
	lea	ebp,dword ptr [ebp+ebx+10]
	test	bp,1
	jz	short l__1
	inc	ebp
l__1:
	mov	dword ptr [cheap],ebp
	mov	ebp,dword ptr [cheap]
	cmp	dword ptr [eheap],ebp
	jb	near ptr strgall4
strgall2	label	near
	mov	ebp,dword ptr [eax]
	mov	dword ptr [fstrg],ebp
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [eax],ebp
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [4+ebp],ebx
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [ebp],eax
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+ebx+8],0
	mov	ebp,dword ptr [zstring000]
	mov	dword ptr [4+eax],ebp
	ret
strgall3	label	near
	call	near ptr gcstrg
	jmp	near ptr strgallc
strgall4	label	near
	mov	eax,esi
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [cheap],ebp
	call	near ptr hgc
	mov	eax,dword ptr [fstrg]
	mov	ebp,dword ptr [cheap]
	mov	dword ptr [ocheap],ebp
	mov	ebp,dword ptr [cheap]
	lea	ebp,dword ptr [ebp+ebx+10]
	test	bp,1
	jz	short l__2
	inc	ebp
l__2:
	mov	dword ptr [cheap],ebp
	mov	ebp,dword ptr [eheap]
	cmp	dword ptr [cheap],ebp
	jb	near ptr strgall2
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [cheap],ebp
	mov	eax,esi
	jmp	near ptr errfh
getnumi	label	near
	cmp	ax,32768
	je	near ptr getmin
	or	ax,ax
	jge	near ptr getpos
	mov	edx,45
	call	near ptr getnumch
	neg	ax
getpos	label	near
	mov	edx,eax
	cmp	dword ptr [obase],0
	jz	short l9__3
	push	eax
	mov	eax,edx
	cwd
	idiv	word ptr [obase]
	movzx	edx,dx
	pop	eax
l9__3:
	add	dx,48
	cmp	dx,57
	jle	near ptr getpos2
	add	dx,7
getpos2	label	near
	cmp	dword ptr [obase],0
	jz	short l9__4
	push	edx
	cwd
	idiv	word ptr [obase]
	movzx	eax,ax
	pop	edx
l9__4:
	or	ax,ax
	je	near ptr getnumch
	push	edx
	call	near ptr getpos
	pop	edx
	jmp	near ptr getnumch
getmin	label	near
	mov	edx,35
	call	near ptr getnumch
	mov	edx,36
	call	near ptr getnumch
	mov	edx,56
	call	near ptr getnumch
	mov	edx,48
	call	near ptr getnumch
	call	near ptr getnumch
getnumch	label	near
	mov	ebp,dword ptr [ecx]
	mov	byte ptr [ebp+ebx+8],dl
	inc	bx
	ret
badstr2	label	near
	mov	eax,ebx
badstr1	label	near
	mov	ebx,dword ptr [savea4]
	jmp	near ptr errnsa
badvec2	label	near
	mov	eax,ebx
badvec1	label	near
	mov	ebx,dword ptr [savea4]
	jmp	near ptr errvec
badnbar5	label	near
	mov	eax,5
	jmp	near ptr badnba31
badnbar3	label	near
	mov	eax,3
badnba31	label	near
	mov	ebx,dword ptr [savea4]
	jmp	near ptr errwna
badnbar4	label	near
	mov	eax,4
	jmp	near ptr badnba31
badoob1	label	near
	mov	ebx,dword ptr [savea4]
	jmp	near ptr erroob
badfix2	label	near
	mov	eax,ebx
badfix1	label	near
	mov	ebx,dword ptr [savea4]
	jmp	near ptr errnia
badfix3	label	near
	mov	eax,ecx
	jmp	near ptr badfix1
badfix4	label	near
	mov	eax,edx
	jmp	near ptr badfix1
badind2	label	near
	mov	eax,ebx
badind1	label	near
	mov	ebx,dword ptr [savea4]
	jmp	near ptr erroob
badind3	label	near
	mov	eax,ecx
	jmp	near ptr badind1
badind4	label	near
	mov	eax,edx
	jmp	near ptr badind1
mina1a2	label	near
	cmp	bx,ax
	jg	near ptr mina1a2x
	ret
mina1a2x	label	near
	mov	ebx,eax
	ret
mina1a3	label	near
	cmp	cx,ax
	jg	near ptr mina1a3x
	ret
mina1a3x	label	near
	mov	ecx,eax
	ret
mina1a4	label	near
	cmp	dx,ax
	jg	near ptr mina1a4x
	ret
mina1a4x	label	near
	mov	edx,eax
	ret
mina3a1	label	near
	cmp	ax,cx
	jg	near ptr mina3a1x
	ret
mina3a1x	label	near
	mov	eax,ecx
	ret
mina3a4	label	near
	cmp	dx,cx
	jg	near ptr mina3a4x
	ret
mina3a4x	label	near
	mov	edx,ecx
	ret
mina4a1	label	near
	cmp	ax,dx
	jg	near ptr mina4a1x
	ret
mina4a1x	label	near
	mov	eax,edx
	ret
mina4a3	label	near
	cmp	cx,dx
	jg	near ptr mina4a3x
	ret
mina4a3x	label	near
	mov	ecx,edx
	ret
strfalse	label	near
	mov	eax,esi
	ret
ini_str	endp

string000	proc	near
	cmp	dword ptr [bstrg],eax
	ja	short lmac722
	cmp	eax,esi
	jb	near ptr stringr
lmac722:
	cmp	eax,esi
	jb	near ptr stringc
	cmp	eax,edi
	jae	near ptr stringc
	mov	ebx,dword ptr [20+eax]
	cmp	dword ptr [bstrg],ebx
	ja	short lmac723
	cmp	ebx,esi
	jb	near ptr stringr2
lmac723:
	mov	ebx,dword ptr [28+eax]
	cmp	dword ptr [bstrg],ebx
	ja	short lmac724
	cmp	ebx,esi
	jb	near ptr stringr2
lmac724:
	mov	ebx,dword ptr [20+ebx]
stringr2	label	near
	mov	eax,ebx
stringr	label	near
	ret
stringc	label	near
	mov	ebp,dword ptr [zstring000]
	mov	dword ptr [savea4],ebp
	jmp	near ptr strgrest
stringa1	label	near
	cmp	dword ptr [bstrg],eax
	ja	near ptr strgrest
	cmp	eax,esi
	jae	near ptr strgrest
	ret
strgsymb	label	near
	push	ebx
	mov	ebx,dword ptr [20+eax]
	cmp	dword ptr [bstrg],ebx
	ja	short lmac725
	cmp	ebx,esi
	jb	near ptr strgsyre
lmac725:
	mov	ebx,dword ptr [28+eax]
	cmp	dword ptr [bstrg],ebx
	ja	short lmac726
	cmp	ebx,esi
	jb	near ptr strgsyre
lmac726:
	mov	ebx,dword ptr [20+ebx]
strgsyre	label	near
	mov	eax,ebx
	pop	ebx
	ret
strgrest	label	near
	cmp	eax,esi
	jb	short lmac727
	cmp	eax,edi
	jb	near ptr strgsymb
lmac727:
	cmp	dword ptr [bvect],eax
	ja	short lmac728
	cmp	dword ptr [bstrg],eax
	ja	near ptr badstr1
lmac728:
	push	ebx
	push	ecx
	mov	ecx,dword ptr [bufstrg]
	or	eax,eax
	jns	near ptr strgnf
	push	ebp
	mov	ebp,dword ptr [ecx]
	add	ebp,8
	mov	dword ptr [crwork],ebp
	pop	ebp
	;; Prepare a C function call with 1 arguments.
	push	eax
	push	ebx
	push	ecx
	push	edx
	push	esi
	push	edi
	push	dword ptr [crwork]
	shl	eax,1
	mov	_accusingle1,eax
	fld	dword ptr [_accusingle1]
	fstp	qword ptr [_accudouble1]
	push	dword ptr [_accudouble1+4]
	push	dword ptr [_accudouble1]
	call	near ptr _llrt_cvftoa
	mov	dword ptr [crwork],eax
	add	esp,12
	pop	edi
	pop	esi
	pop	edx
	pop	ecx
	pop	ebx
	pop	eax
	;; We are back to Lisp!
	mov	ebx,dword ptr [crwork]
	jmp	near ptr strgfol
strgnf	label	near
	xor	ebx,ebx
	push	edx
	cmp	dword ptr [bfloat],eax
	jbe	near ptr strgnn
	call	near ptr getnumi
	jmp	near ptr strgfol4
strgnn	label	near
	cmp	eax,esi
	je	near ptr strgfol4
	cmp	eax,edi
	jl	near ptr badstr1
	mov	edx,dword ptr [eax]
	cmp	dword ptr [bfloat],edx
	jbe	near ptr badstr1
	call	near ptr getnumch
	cmp	bx,1024
	jge	near ptr badstr1
	mov	eax,dword ptr [4+eax]
	jmp	near ptr strgnn
strgfol4	label	near
	pop	edx
strgfol	label	near
	call	near ptr strgallc
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [ecx]
	add	esi,8
	mov	edi,dword ptr [eax]
	add	edi,8
	mov	ecx,ebx
	jecxz	short l__5
	cmp	esi,edi
	jae	short l__5
	dec	ecx
	add	esi,ecx
	add	edi,ecx
	std
	movsb
l__5:
	rep	movsb
	cld
	pop	esi
	pop	edi
	pop	ecx
	pop	ecx
	pop	ebx
	ret
stringa2	label	near
	cmp	dword ptr [bstrg],ebx
	ja	near ptr stra2c
	cmp	ebx,esi
	jae	near ptr stra2c
	ret
stra2c	label	near
	push	eax
	mov	eax,ebx
	call	near ptr strgrest
	mov	ebx,eax
	pop	eax
	ret
stringa3	label	near
	cmp	dword ptr [bstrg],ecx
	ja	near ptr stra3c
	cmp	ecx,esi
	jae	near ptr stra3c
	ret
stra3c	label	near
	push	eax
	mov	eax,ecx
	call	near ptr strgrest
	mov	ecx,eax
	pop	eax
	ret
string000	endp

plength	proc	near
	mov	ebp,dword ptr [zplength]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	ret
plength	endp

slength	proc	near
	mov	ebp,dword ptr [zslength]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	ret
slength	endp

slen	proc	near
	mov	ebp,dword ptr [zslen]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bstrg],eax
	ja	near ptr badstr1
	cmp	eax,esi
	jae	near ptr badstr1
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	ret
slen	endp

caten	proc	near
	mov	ebp,dword ptr [zcaten]
	mov	dword ptr [savea4],ebp
caten0	label	near
	mov	ecx,edx
	xor	ebx,ebx
	jmp	near ptr caten2
caten1	label	near
	mov	eax,dword ptr [esp+edx*4]
	call	near ptr stringa1
	mov	dword ptr [esp+edx*4],eax
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	add	bx,ax
	jo	near ptr catenstl
caten2	label	near
	dec	dx
	jge	near ptr caten1
	push	ecx
	call	near ptr strgallc
	pop	edx
	jmp	near ptr caten4
caten3	label	near
	pop	ecx
	mov	ebp,dword ptr [ecx]
	mov	ebp,dword ptr [4+ebp]
	mov	dword ptr [savea1],ebp
	sub	bx,word ptr [savea1]
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [ecx]
	add	esi,8
	mov	edi,dword ptr [eax]
	lea	edi,dword ptr [edi+ebx+8]
	mov	ecx,dword ptr [savea1]
	jecxz	short l__6
	cmp	esi,edi
	jae	short l__6
	dec	ecx
	add	esi,ecx
	add	edi,ecx
	std
	movsb
l__6:
	rep	movsb
	cld
	pop	esi
	pop	edi
	pop	ecx
caten4	label	near
	dec	dx
	jge	near ptr caten3
	ret
catenstl	label	near
	mov	eax,32767
	mov	ebx,dword ptr [zcaten]
	jmp	near ptr errstl
caten	endp

subsequal	proc	near
	mov	ebp,dword ptr [zsubsequal]
	mov	dword ptr [savea4],ebp
	cmp	dx,5
	jne	near ptr badnbar5
	mov	eax,dword ptr [esp+4*3]
	cmp	dword ptr [bstrg],eax
	ja	near ptr badstr1
	cmp	eax,esi
	jae	near ptr badstr1
	mov	ebx,dword ptr [esp+4]
	cmp	dword ptr [bstrg],ebx
	ja	near ptr badstr2
	cmp	ebx,esi
	jae	near ptr badstr2
	mov	ecx,dword ptr [esp+4*2]
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr badfix3
	or	cx,cx
	jl	near ptr badind3
	mov	edx,dword ptr [esp]
	cmp	dword ptr [bfloat],edx
	jbe	near ptr badfix4
	or	dx,dx
	jl	near ptr badind4
	mov	dword ptr [savea1],eax
	mov	dword ptr [savea2],ebx
	mov	eax,dword ptr [esp+4*4]
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	or	ax,ax
	jl	near ptr badind1
	mov	ebx,eax
	add	bx,cx
	mov	ebp,dword ptr [savea1]
	mov	ebp,dword ptr [ebp]
	mov	ebp,dword ptr [4+ebp]
	mov	dword ptr [savea3],ebp
	cmp	bx,word ptr [savea3]
	jg	near ptr badind1
	mov	ebx,eax
	add	bx,dx
	mov	ebp,dword ptr [savea2]
	mov	ebp,dword ptr [ebp]
	mov	ebp,dword ptr [4+ebp]
	mov	dword ptr [savea3],ebp
	cmp	bx,word ptr [savea3]
	jg	near ptr badind1
	add	esp,20
	cld
	push	ecx
	push	edi
	push	esi
	mov	ebp,dword ptr [savea1]
	mov	esi,dword ptr [ebp]
	lea	esi,dword ptr [esi+ecx+8]
	mov	ebp,dword ptr [savea2]
	mov	edi,dword ptr [ebp]
	lea	edi,dword ptr [edi+edx+8]
	mov	ecx,eax
	or	ecx,ecx
	repz	cmpsb
	pop	esi
	pop	edi
	pop	ecx
	jz	near ptr subseqr
	mov	eax,esi
subseqr	label	near
	ret
subsequal	endp

eqstring	proc	near
	mov	ebp,dword ptr [zeqstring]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	call	near ptr stringa2
eqstrgi	label	near
	cmp	eax,ebx
	je	near ptr sret
	mov	ebp,dword ptr [eax]
	mov	ecx,dword ptr [4+ebp]
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	cmp	cx,dx
	jne	near ptr sfalse
	mov	edx,dword ptr [4+eax]
	cmp	edx,esi
	jb	near ptr eqstrg2
	cmp	edx,edi
	jae	near ptr eqstrg2
	cmp	edx,dword ptr [4+ebx]
	jne	near ptr sfalse
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [eax]
	add	esi,8
	mov	edi,dword ptr [ebx]
	add	edi,8
	mov	ecx,ecx
	or	ecx,ecx
	repz	cmpsb
	pop	esi
	pop	edi
	pop	ecx
	jz	near ptr sret
sfalse	label	near
	mov	eax,esi
sret	label	near
	ret
eqstrg2	label	near
	push	eax
	push	ebx
	push	ecx
	mov	eax,edx
	mov	ebx,dword ptr [4+ebx]
	call	near ptr equal
	mov	edx,eax
	pop	ecx
	pop	ebx
	pop	eax
	cmp	edx,esi
	je	near ptr sfalse2
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [eax]
	add	esi,8
	mov	edi,dword ptr [ebx]
	add	edi,8
	mov	ecx,ecx
	or	ecx,ecx
	repz	cmpsb
	pop	esi
	pop	edi
	pop	ecx
	jz	near ptr sret2
sfalse2	label	near
	mov	eax,esi
sret2	label	near
	ret
eqstring	endp

substring	proc	near
	mov	ebp,dword ptr [zsubstring]
	mov	dword ptr [savea4],ebp
	mov	eax,32767
	cmp	dx,2
	je	near ptr substr1
	cmp	dx,3
	jne	near ptr badnbar3
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
substr1	label	near
	pop	edx
	cmp	dword ptr [bfloat],edx
	jbe	near ptr badfix4
	or	dx,dx
	jl	near ptr badind4
	pop	ecx
	call	near ptr stringa3
	mov	ebp,dword ptr [ecx]
	mov	ebx,dword ptr [4+ebp]
	sub	bx,dx
	jo	near ptr substr2
substr2	label	near
	call	near ptr mina1a2
	call	near ptr strgallc
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [ecx]
	lea	esi,dword ptr [esi+edx+8]
	mov	edi,dword ptr [eax]
	add	edi,8
	mov	ecx,ebx
	jecxz	short l__7
	cmp	esi,edi
	jae	short l__7
	dec	ecx
	add	esi,ecx
	add	edi,ecx
	std
	movsb
l__7:
	rep	movsb
	cld
	pop	esi
	pop	edi
	pop	ecx
	ret
substring	endp

makestrg	proc	near
	mov	ebp,dword ptr [zmakestrg]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	or	ax,ax
	jge	near ptr makstrg0
	xor	eax,eax
makstrg0	label	near
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr badfix2
	push	ebx
	mov	ebx,eax
	call	near ptr strgallc
	pop	ecx
	jmp	near ptr makstrg2
makstrg1	label	near
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+ebx+8],cl
makstrg2	label	near
	dec	bx
	jge	near ptr makstrg1
	ret
makestrg	endp

duplstrg	proc	near
	mov	ebp,dword ptr [zduplstrg]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	or	ax,ax
	jl	near ptr dupserr
	call	near ptr stringa2
	mov	ecx,ebx
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	mov	ebx,edx
	imul	bx,ax
	jo	near ptr dupsstl
	mov	dword ptr [savea1],eax
	call	near ptr strgallc
	xor	ebx,ebx
	jmp	near ptr dupstrg2
dupstrg1	label	near
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [ecx]
	add	esi,8
	mov	edi,dword ptr [eax]
	lea	edi,dword ptr [edi+ebx+8]
	mov	ecx,edx
	jecxz	short l__8
	cmp	esi,edi
	jae	short l__8
	dec	ecx
	add	esi,ecx
	add	edi,ecx
	std
	movsb
l__8:
	rep	movsb
	cld
	pop	esi
	pop	edi
	pop	ecx
	add	bx,dx
dupstrg2	label	near
	dec	word ptr [savea1]
	jge	near ptr dupstrg1
	ret
dupserr	label	near
	mov	ebx,dword ptr [zduplstrg]
	jmp	near ptr erroob
dupsstl	label	near
	mov	ebx,dword ptr [zduplstrg]
	jmp	near ptr errstl
duplstrg	endp

bltstrg	proc	near
	mov	ebp,dword ptr [zbltstrg]
	mov	dword ptr [savea4],ebp
	cmp	dx,5
	je	near ptr bltstrg0
	mov	ecx,32767
	cmp	dx,4
	je	near ptr bltstrg1
	xor	ebx,ebx
	cmp	dx,3
	jne	near ptr badnbar3
	jmp	near ptr bltstrg2
bltstrg0	label	near
	pop	ecx
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr badfix3
bltstrg1	label	near
	pop	ebx
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr badfix2
	or	bx,bx
	jl	near ptr badind2
bltstrg2	label	near
	mov	dword ptr [savea2],ebx
	pop	ebx
	call	near ptr stringa2
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	or	ax,ax
	jl	near ptr badind1
	mov	dword ptr [savea1],eax
	mov	eax,dword ptr [esp]
	cmp	dword ptr [bstrg],eax
	ja	near ptr badstr1
	cmp	eax,esi
	jae	near ptr badstr1
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	sub	ax,word ptr [savea1]
	jo	near ptr bltstr3
bltstr3	label	near
	call	near ptr mina1a3
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	sub	dx,word ptr [savea2]
	jo	near ptr bltstr4
bltstr4	label	near
	call	near ptr mina4a3
	pop	eax
	or	cx,cx
	jle	near ptr bltstrg6
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [ebx]
	mov	ebp,dword ptr [savea2]
	lea	esi,dword ptr [esi+ebp+8]
	mov	edi,dword ptr [eax]
	mov	ebp,dword ptr [savea1]
	lea	edi,dword ptr [edi+ebp+8]
	mov	ecx,ecx
	jecxz	short l__9
	cmp	esi,edi
	jae	short l__9
	dec	ecx
	add	esi,ecx
	add	edi,ecx
	std
	movsb
l__9:
	rep	movsb
	cld
	pop	esi
	pop	edi
	pop	ecx
bltstrg6	label	near
	ret
bltstrg	endp

fillstrg	proc	near
	mov	ebp,dword ptr [zfillstrg]
	mov	dword ptr [savea4],ebp
	mov	eax,32767
	cmp	dx,3
	je	near ptr fillstr0
	cmp	dx,4
	jne	near ptr badnbar4
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
fillstr0	label	near
	pop	ecx
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr badfix3
	pop	ebx
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr badfix2
	or	bx,bx
	jl	near ptr badind2
	mov	edx,eax
	mov	eax,dword ptr [esp]
	cmp	dword ptr [bstrg],eax
	ja	near ptr badstr1
	cmp	eax,esi
	jae	near ptr badstr1
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	sub	ax,bx
	jo	near ptr fillstr6
fillstr6	label	near
	call	near ptr mina1a4
	pop	eax
	jmp	near ptr fillstr8
fillstr7	label	near
	mov	ebp,dword ptr [eax]
	mov	byte ptr [ebp+ebx+8],cl
	inc	bx
fillstr8	label	near
	dec	dx
	jge	near ptr fillstr7
	ret
fillstrg	endp

scanstrg	proc	near
	mov	ebp,dword ptr [zscanstrg]
	mov	dword ptr [savea4],ebp
sanstrg1	label	near
	xor	ecx,ecx
	cmp	dx,2
	je	near ptr sanstrg2
	cmp	dx,3
	jne	near ptr badnbar3
	pop	ecx
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr badfix3
	or	cx,cx
	jl	near ptr badind3
sanstrg2	label	near
	pop	ebx
	call	near ptr stringa2
	pop	eax
	call	near ptr stringa1
	mov	ebp,dword ptr [eax]
	mov	edx,dword ptr [4+ebp]
	sub	dx,cx
	jo	near ptr sanstrg4
	jmp	near ptr sanstrg4
sanstrg3	label	near
	push	eax
	push	ecx
	push	edx
	mov	ebp,dword ptr [eax]
	movzx	edx,byte ptr [ebp+ecx+8]
	mov	ebp,dword ptr [ebx]
	mov	ecx,dword ptr [4+ebp]
	jmp	near ptr sanpos6
sanpos5	label	near
	mov	ebp,dword ptr [ebx]
	movzx	eax,byte ptr [ebp+ecx+8]
	cmp	edx,eax
	je	near ptr sanpos9
sanpos6	label	near
	dec	cx
	jge	near ptr sanpos5
	mov	ebp,dword ptr [savea4]
	cmp	dword ptr [zscanstrg],ebp
	jne	near ptr sanstrg6
	jmp	near ptr sanposf
sanpos9	label	near
	mov	ebp,dword ptr [savea4]
	cmp	dword ptr [zspanstrg],ebp
	jne	near ptr sanstrg6
sanposf	label	near
	pop	edx
	pop	ecx
	pop	eax
	inc	cx
sanstrg4	label	near
	dec	dx
	jge	near ptr sanstrg3
	jmp	near ptr strfalse
sanstrg6	label	near
	pop	edx
	pop	eax
	pop	edx
	ret
scanstrg	endp

spanstrg	proc	near
	mov	ebp,dword ptr [zspanstrg]
	mov	dword ptr [savea4],ebp
	jmp	near ptr sanstrg1
spanstrg	endp

chrpos	proc	near
	mov	ebp,dword ptr [zchrpos]
	mov	dword ptr [savea4],ebp
	xor	ecx,ecx
	cmp	dx,2
	je	near ptr chrpos1
	cmp	dx,3
	jne	near ptr badnbar3
	pop	ecx
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr badfix3
	or	cx,cx
	jl	near ptr badind3
chrpos1	label	near
	pop	ebx
	call	near ptr stringa2
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	and	ax,255
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	sub	dx,cx
	jo	near ptr chrpos3
	jmp	near ptr chrpos3
chrpos2	label	near
	mov	ebp,dword ptr [ebx]
	movzx	ebp,byte ptr [ebp+ecx+8]
	mov	dword ptr [savea1],ebp
	cmp	dword ptr [savea1],eax
	je	near ptr chrpos5
	inc	cx
chrpos3	label	near
	dec	dx
	jge	near ptr chrpos2
	mov	eax,esi
	ret
chrpos5	label	near
	mov	eax,ecx
	ret
chrpos	endp

sref	proc	near
	mov	ebp,dword ptr [zsref]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bstrg],eax
	ja	near ptr badstr1
	cmp	eax,esi
	jae	near ptr badstr1
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr badfix2
	or	bx,bx
	jl	near ptr badind2
	mov	ebp,dword ptr [eax]
	mov	ecx,dword ptr [4+ebp]
	cmp	bx,cx
	jge	near ptr badind2
	mov	ebp,dword ptr [eax]
	movzx	eax,byte ptr [ebp+ebx+8]
	ret
sref	endp

chrnth	proc	near
	mov	ebp,dword ptr [zchrnth]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa2
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	or	ax,ax
	jl	near ptr strfalse
	mov	ebp,dword ptr [ebx]
	mov	ecx,dword ptr [4+ebp]
	cmp	ax,cx
	jge	near ptr strfalse
	mov	ebp,dword ptr [ebx]
	movzx	eax,byte ptr [ebp+eax+8]
	ret
chrnth	endp

sset	proc	near
	mov	ebp,dword ptr [zsset]
	mov	dword ptr [savea4],ebp
	mov	edx,eax
	mov	eax,ebx
	mov	ebx,edx
	cmp	dword ptr [bstrg],ebx
	ja	near ptr badstr2
	cmp	ebx,esi
	jae	near ptr badstr2
	push	ecx
	call	near ptr chrset5
	pop	eax
	ret
sset	endp

chrset	proc	near
	mov	ebp,dword ptr [zchrset]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa2
chrset5	label	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	or	ax,ax
	jl	near ptr badind1
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr badfix3
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	cmp	ax,dx
	jge	near ptr badind1
	mov	ebp,dword ptr [ebx]
	mov	byte ptr [ebp+eax+8],cl
	mov	eax,ecx
	ret
chrset	endp

typestrg	proc	near
	mov	ebx,dword ptr [ztypestrg]
	cmp	dx,1
	je	near ptr typesg
	cmp	dx,2
	je	near ptr typess
	mov	eax,1
	jmp	near ptr errwna
typesg	label	near
	pop	eax
	cmp	dword ptr [bstrg],eax
	ja	near ptr typeser3
	cmp	eax,esi
	jae	near ptr typeser3
typesg2	label	near
	mov	eax,dword ptr [4+eax]
	ret
typess	label	near
	pop	eax
	cmp	eax,esi
	jb	short lmac729
	cmp	eax,edi
	jb	near ptr types2
lmac729:
	cmp	eax,edi
	jl	near ptr typeser2
types2	label	near
	cmp	eax,esi
	je	near ptr typeser2
	pop	ecx
	cmp	dword ptr [bstrg],ecx
	ja	near ptr typeser1
	cmp	ecx,esi
	jae	near ptr typeser1
	mov	dword ptr [4+ecx],eax
	ret
typeser1	label	near
	mov	eax,ecx
typeser3	label	near
	jmp	near ptr errnsa
typeser2	label	near
	jmp	near ptr errsym
typestrg	endp

exchstrg	proc	near
	mov	ebp,dword ptr [zexchstrg]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bstrg],eax
	ja	near ptr badstr1
	cmp	eax,esi
	jae	near ptr badstr1
	cmp	dword ptr [bstrg],ebx
	ja	near ptr badstr2
	cmp	ebx,esi
	jae	near ptr badstr2
	push	dword ptr [4+eax]
	push	dword ptr [4+ebx]
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ocheap],ebp
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [eax],ebp
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [ebx],ebp
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp],eax
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp],ebx
	pop	dword ptr [4+eax]
	pop	dword ptr [4+ebx]
	ret
exchstrg	endp

ffindex	proc	near
	mov	ebp,dword ptr [zffindex]
	mov	dword ptr [savea4],ebp
	xor	ecx,ecx
	cmp	dx,2
	je	near ptr ffindg3
	cmp	dx,3
	jne	near ptr badnbar3
	pop	ecx
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr badfix3
	or	cx,cx
	jl	near ptr badind3
ffindg3	label	near
	pop	ebx
	call	near ptr stringa2
	pop	eax
	call	near ptr stringa1
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	mov	ebp,dword ptr [eax]
	mov	ebp,dword ptr [4+ebp]
	mov	dword ptr [savea1],ebp
	sub	dx,word ptr [savea1]
	sub	dx,cx
	inc	dx
	jmp	near ptr ffindex4
ffindex3	label	near
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [ebx]
	lea	esi,dword ptr [esi+ecx+8]
	mov	edi,dword ptr [eax]
	add	edi,8
	mov	ecx,dword ptr [savea1]
	or	ecx,ecx
	repz	cmpsb
	pop	esi
	pop	edi
	pop	ecx
	jz	near ptr ffindex6
	inc	cx
ffindex4	label	near
	dec	dx
	jge	near ptr ffindex3
	mov	eax,esi
	ret
ffindex6	label	near
	mov	eax,ecx
	ret
ffindex	endp

alphales	proc	near
	mov	ebp,dword ptr [zalphales]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	call	near ptr stringa2
	mov	ebp,dword ptr [eax]
	mov	ecx,dword ptr [4+ebp]
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	call	near ptr mina3a4
	xor	ecx,ecx
	jmp	near ptr alpha2
alpha1	label	near
	mov	ebp,dword ptr [eax]
	movzx	ebp,byte ptr [ebp+ecx+8]
	mov	dword ptr [savea1],ebp
	mov	ebp,dword ptr [ebx]
	movzx	ebp,byte ptr [ebp+ecx+8]
	mov	dword ptr [savea2],ebp
	mov	bp,word ptr [savea2]
	cmp	word ptr [savea1],bp
	jl	near ptr strue
	mov	bp,word ptr [savea2]
	cmp	word ptr [savea1],bp
	jne	near ptr strfalse
	inc	cx
alpha2	label	near
	dec	dx
	jge	near ptr alpha1
	mov	ebp,dword ptr [eax]
	mov	edx,dword ptr [4+ebp]
	cmp	dx,cx
	jne	near ptr strfalse
strue	label	near
	mov	eax,dword ptr [zt]
	ret
alphales	endp

ffsymbol	proc	near
	cmp	ebx,esi
	jb	near ptr ffsymb1
	cmp	ebx,edi
	jae	near ptr ffsymb1
	jmp	near ptr trysympk
ffsymb1	label	near
	mov	ebp,dword ptr [zffsymbol]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa2
	cmp	eax,esi
	jb	near ptr ffsymbr2
	cmp	eax,edi
	jae	near ptr ffsymbr2
	jmp	near ptr trysymp
ffsymbr2	label	near
	mov	ebx,dword ptr [zffsymbol]
	jmp	near ptr errsym
ffsymbol	endp

concat	proc	near
	mov	ebp,dword ptr [esp+edx*4]
	mov	dword ptr [savea2],ebp
	mov	dword ptr [esp+edx*4],offset FLAT:concat9
	mov	ebp,dword ptr [zconcat]
	mov	dword ptr [savea4],ebp
	jmp	near ptr caten0
concat9	label	near
	mov	ebx,eax
	mov	eax,esi
	push	dword ptr [savea2]
	jmp	near ptr trysymp
concat	endp

hash	proc	near
	mov	ebp,dword ptr [zhash]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	jmp	near ptr hashint
hash	endp

fpnam	proc	near
	mov	ebp,dword ptr [zfpnam]
	mov	dword ptr [savea4],ebp
	call	near ptr stringa1
	mov	ebp,dword ptr [eax]
	mov	ebx,dword ptr [4+ebp]
	mov	ecx,eax
	mov	eax,esi
	jmp	near ptr fpnam2
fpnam1	label	near
	mov	ebp,dword ptr [ecx]
	movzx	edx,byte ptr [ebp+ebx+8]
	cmp	dword ptr [fcons],edi
	jb	near ptr l__10
l1__10:
	xchg	dword ptr [fcons],edi
	mov	dword ptr [edi],edx
	xchg	dword ptr [4+edi],eax
	xchg	eax,edi
	xchg	dword ptr [fcons],edi
fpnam2	label	near
	dec	bx
	jge	near ptr fpnam1
	ret
fpnam	endp

gensym	proc	near
	mov	eax,dword ptr [zgenstrg]
	push	dword ptr [eax]
	mov	ebx,dword ptr [zgenscpt]
	mov	eax,dword ptr [ebx]
	inc	ax
gennerr	label	near
	mov	dword ptr [ebx],eax
	push	eax
	mov	edx,2
	jmp	near ptr concat
rdpscrn	label	near
	mov	ebp,dword ptr [ztyrdspl]
	mov	dword ptr [savea4],ebp
	jmp	near ptr bltscrn0
rdpscrn1	label	near
	cld
	push	ecx
	push	edi
	push	esi
	mov	ebp,dword ptr [savea1]
	mov	esi,dword ptr [ebp]
	lea	esi,dword ptr [esi+ecx+8]
	mov	ebp,dword ptr [savea2]
	mov	edi,dword ptr [ebp]
	lea	edi,dword ptr [edi+ecx+8]
	mov	ecx,dword ptr [dlx]
	or	ecx,ecx
	repz	cmpsb
	pop	esi
	pop	edi
	pop	ecx
	jz	near ptr rdpscrn5
	push	ecx
	push	edx
	mov	edx,dword ptr [dlx]
	mov	dword ptr [oldid],ecx
	add	word ptr [oldid],dx
	mov	ebp,dword ptr [xr]
	mov	dword ptr [oldx],ebp
	add	word ptr [oldx],dx
rdpscrn3	label	near
	mov	ebp,dword ptr [savea1]
	mov	ebp,dword ptr [ebp]
	movzx	eax,byte ptr [ebp+ecx+8]
	mov	ebp,dword ptr [savea2]
	mov	ebp,dword ptr [ebp]
	movzx	ebx,byte ptr [ebp+ecx+8]
	mov	ebp,dword ptr [savea2]
	mov	ebp,dword ptr [ebp]
	mov	byte ptr [ebp+ecx+8],al
	cmp	ax,bx
	jne	near ptr scrnaff
rdpscrn4	label	near
	inc	cx
	dec	dx
	jg	near ptr rdpscrn3
	pop	edx
	pop	ecx
rdpscrn5	label	near
	add	cx,word ptr [wd]
	inc	word ptr [yr]
	dec	dx
	jg	near ptr rdpscrn1
	ret
scrnaff	label	near
	push	dword ptr [savea1]
	push	dword ptr [savea2]
	push	edx
	push	ecx
	cmp	ax,32
	jge	near ptr scrnaff0
	mov	eax,46
scrnaff0	label	near
	sub	cx,word ptr [oldid]
	add	word ptr [oldid],cx
	add	word ptr [oldx],cx
	mov	edx,ecx
	push	offset FLAT:scrnaff3
	cmp	cx,1
	jne	near ptr scrnaff4
scrnaff1	label	near
	push	eax
scrnaff2	label	near
	jmp	near ptr tyo
scrnaff3	label	near
	pop	ecx
	pop	edx
	pop	dword ptr [savea2]
	pop	dword ptr [savea1]
	jmp	near ptr rdpscrn4
scrnaff4	label	near
	mov	ebx,dword ptr [esp+4]
	dec	bx
	cmp	cx,3
	jne	near ptr scrnaff7
	dec	bx
	mov	ebp,dword ptr [savea1]
	mov	ebp,dword ptr [ebp]
	movzx	ecx,byte ptr [ebp+ebx+8]
	push	ecx
	inc	bx
scrnaff6	label	near
	mov	ebp,dword ptr [savea1]
	mov	ebp,dword ptr [ebp]
	movzx	ecx,byte ptr [ebp+ebx+8]
	push	ecx
	jmp	near ptr scrnaff1
scrnaff7	label	near
	cmp	cx,2
	je	near ptr scrnaff6
	push	eax
	mov	eax,dword ptr [oldx]
	mov	ebx,dword ptr [yr]
	call	near ptr tycursor
	mov	edx,1
	jmp	near ptr scrnaff2
clipscrn	label	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	xor	edx,edx
	or	ax,ax
	jl	near ptr clipscr3
	mov	ecx,eax
clipscr1	label	near
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr badfix2
	or	bx,bx
	jl	near ptr clipscr4
	add	dx,bx
	ret
clipscr3	label	near
	xor	ecx,ecx
	sub	dx,ax
	jmp	near ptr clipscr1
clipscr4	label	near
	sub	cx,bx
	ret
mina1dlx	label	near
	cmp	word ptr [dlx],ax
	jg	near ptr minx1
	ret
minx1	label	near
	mov	dword ptr [dlx],eax
	ret
mina1dly	label	near
	cmp	word ptr [dly],ax
	jg	near ptr miny1
	ret
miny1	label	near
	mov	dword ptr [dly],eax
	ret
gensym	endp

bltscrn	proc	near
	mov	ebp,dword ptr [zbltscrn]
	mov	dword ptr [savea4],ebp
bltscrn0	label	near
	pop	eax
	cmp	dx,12
	je	near ptr bltscrna
	cmp	dx,4
	jne	near ptr badnbar4
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	pop	ebx
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr badfix2
	mov	dword ptr [dlx],ebx
	mov	dword ptr [dly],eax
	mov	dword ptr [ws],ebx
	mov	dword ptr [wd],ebx
	mov	dword ptr [llid],0
	mov	dword ptr [xr],0
	mov	dword ptr [yr],0
	mov	dword ptr [llis],0
	xor	ecx,ecx
	xor	edx,edx
	jmp	near ptr bltscrnb
bltscrna	label	near
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	mov	dword ptr [dly],eax
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	mov	dword ptr [dlx],eax
	pop	dword ptr [ys]
	pop	ebx
	pop	dword ptr [yr]
	pop	eax
	call	near ptr clipscrn
	mov	dword ptr [xr],ecx
	mov	dword ptr [llid],ecx
	mov	dword ptr [llis],edx
	mov	ebx,dword ptr [ys]
	mov	eax,dword ptr [yr]
	call	near ptr clipscrn
	mov	dword ptr [yr],ecx
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	sub	ax,dx
	call	near ptr mina1dly
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	mov	dword ptr [ws],eax
	sub	ax,word ptr [llis]
	call	near ptr mina1dlx
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	sub	ax,cx
	call	near ptr mina1dly
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	mov	dword ptr [wd],eax
	sub	ax,word ptr [llid]
	call	near ptr mina1dlx
bltscrnb	label	near
	pop	dword ptr [savea2]
	mov	ebp,dword ptr [savea2]
	cmp	dword ptr [bstrg],ebp
	ja	near ptr bltscrn8
	cmp	esi,ebp
	jbe	near ptr bltscrn8
	pop	dword ptr [savea1]
	mov	ebp,dword ptr [savea1]
	cmp	dword ptr [bstrg],ebp
	ja	near ptr bltscrn9
	cmp	esi,ebp
	jbe	near ptr bltscrn9
	cmp	word ptr [dlx],0
	jle	near ptr bltscrn7
	cmp	word ptr [dly],0
	jle	near ptr bltscrn7
	imul	dx,word ptr [ws]
	add	word ptr [llis],dx
	mov	edx,dword ptr [dly]
	imul	cx,word ptr [wd]
	add	cx,word ptr [llid]
	mov	ebp,dword ptr [savea4]
	cmp	dword ptr [ztyrdspl],ebp
	je	near ptr rdpscrn1
	mov	eax,dword ptr [dlx]
	mov	ebx,dword ptr [llis]
bltscrn6	label	near
	cld
	push	ecx
	push	edi
	push	esi
	mov	ebp,dword ptr [savea2]
	mov	esi,dword ptr [ebp]
	lea	esi,dword ptr [esi+ebx+8]
	mov	ebp,dword ptr [savea1]
	mov	edi,dword ptr [ebp]
	lea	edi,dword ptr [edi+ecx+8]
	mov	ecx,eax
	jecxz	short l__11
	cmp	esi,edi
	jae	short l__11
	dec	ecx
	add	esi,ecx
	add	edi,ecx
	std
	movsb
l__11:
	rep	movsb
	cld
	pop	esi
	pop	edi
	pop	ecx
	add	cx,word ptr [wd]
	add	bx,word ptr [ws]
	dec	dx
	jg	near ptr bltscrn6
bltscrn7	label	near
	ret
bltscrn8	label	near
	mov	eax,dword ptr [savea2]
	jmp	near ptr badstr1
bltscrn9	label	near
	mov	eax,dword ptr [savea1]
	jmp	near ptr badstr1
bltscrn	endp

typevect	proc	near
	mov	ebx,dword ptr [ztypevect]
	cmp	dx,1
	je	near ptr typevg
	cmp	dx,2
	je	near ptr typevs
	mov	eax,1
	jmp	near ptr errwna
typevg	label	near
	pop	eax
	cmp	dword ptr [bvect],eax
	ja	near ptr typever3
	cmp	dword ptr [bstrg],eax
	jbe	near ptr typever3
	mov	eax,dword ptr [4+eax]
	ret
typevs	label	near
	pop	eax
	cmp	eax,esi
	jb	short lmac730
	cmp	eax,edi
	jb	near ptr typevs2
lmac730:
	cmp	eax,edi
	jl	near ptr typever2
typevs2	label	near
	cmp	eax,esi
	je	near ptr typever2
	pop	ecx
	cmp	dword ptr [bvect],ecx
	ja	near ptr typever1
	cmp	dword ptr [bstrg],ecx
	jbe	near ptr typever1
	mov	dword ptr [4+ecx],eax
	ret
typever1	label	near
	mov	eax,ecx
typever3	label	near
	jmp	near ptr errvec
typever2	label	near
	jmp	near ptr errsym
typevect	endp

makevect	proc	near
	mov	ebp,dword ptr [zmakevect]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	or	ax,ax
	jl	near ptr badind1
	mov	ecx,eax
makvect0	label	near
	mov	eax,dword ptr [fvect]
	cmp	eax,esi
	je	near ptr makvect3
	mov	ebp,dword ptr [cheap]
	mov	dword ptr [ocheap],ebp
	mov	ebp,dword ptr [cheap]
	lea	ebp,dword ptr [ebp+ecx*4+8]
	mov	dword ptr [cheap],ebp
	mov	ebp,dword ptr [cheap]
	cmp	dword ptr [eheap],ebp
	jb	near ptr makvect4
makvect2	label	near
	mov	ebp,dword ptr [eax]
	mov	dword ptr [fvect],ebp
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [eax],ebp
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [4+ebp],ecx
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [ebp],eax
	jmp	near ptr vectfil4
vectfil1	label	near
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+ecx*4+8],ebx
vectfil4	label	near
	dec	cx
	jge	near ptr vectfil1
	mov	ebp,dword ptr [zvector]
	mov	dword ptr [4+eax],ebp
	ret
makvect3	label	near
	call	near ptr gcvect
	jmp	near ptr makvect0
makvect4	label	near
	mov	eax,esi
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [cheap],ebp
	call	near ptr hgc
	mov	eax,dword ptr [fvect]
	mov	ebp,dword ptr [cheap]
	mov	dword ptr [ocheap],ebp
	mov	ebp,dword ptr [cheap]
	lea	ebp,dword ptr [ebp+ecx*4+8]
	mov	dword ptr [cheap],ebp
	mov	ebp,dword ptr [eheap]
	cmp	dword ptr [cheap],ebp
	jb	near ptr makvect2
	mov	eax,esi
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [cheap],ebp
	jmp	near ptr errfh
makevect	endp

vlength	proc	near
	mov	ebp,dword ptr [zvlength]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bvect],eax
	ja	near ptr badvec1
	cmp	dword ptr [bstrg],eax
	jbe	near ptr badvec1
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	ret
vlength	endp

eqvector	proc	near
	mov	ebp,dword ptr [zeqvector]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bvect],eax
	ja	near ptr badvec1
	cmp	dword ptr [bstrg],eax
	jbe	near ptr badvec1
	cmp	dword ptr [bvect],ebx
	ja	near ptr badvec2
	cmp	dword ptr [bstrg],ebx
	jbe	near ptr badvec2
eqvectri	label	near
	mov	ebp,dword ptr [eax]
	mov	ecx,dword ptr [4+ebp]
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	cmp	cx,dx
	jne	near ptr strfalse
	mov	edx,dword ptr [4+eax]
	cmp	edx,esi
	jb	near ptr eqvect6
	cmp	edx,edi
	jae	near ptr eqvect6
	cmp	edx,dword ptr [4+ebx]
	jne	near ptr strfalse
	jmp	near ptr eqvect5
eqvect4	label	near
	push	eax
	push	ebx
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [ebp+ecx*4+8]
	mov	ebp,dword ptr [ebx]
	mov	ebx,dword ptr [ebp+ecx*4+8]
	push	ecx
	call	near ptr equal
	mov	edx,eax
	pop	ecx
	pop	ebx
	pop	eax
	cmp	edx,esi
	je	near ptr strfalse
eqvect5	label	near
	dec	cx
	jge	near ptr eqvect4
	ret
eqvect6	label	near
	push	eax
	push	ebx
	push	ecx
	mov	eax,edx
	mov	ebx,dword ptr [4+ebx]
	call	near ptr equal
	mov	edx,eax
	pop	ecx
	pop	ebx
	pop	eax
	cmp	edx,esi
	jne	near ptr eqvect5
	mov	eax,esi
	ret
eqvector	endp

vref	proc	near
	mov	ebp,dword ptr [zvref]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr badfix2
	or	bx,bx
	jl	near ptr badind2
	cmp	dword ptr [bvect],eax
	ja	near ptr badvec1
	cmp	dword ptr [bstrg],eax
	jbe	near ptr badvec1
	mov	ebp,dword ptr [eax]
	mov	ecx,dword ptr [4+ebp]
	cmp	bx,cx
	jge	near ptr badind2
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [ebp+ebx*4+8]
	ret
vref	endp

vset	proc	near
	mov	ebp,dword ptr [zvset]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr badfix2
	or	bx,bx
	jl	near ptr badind2
	cmp	dword ptr [bvect],eax
	ja	near ptr badvec1
	cmp	dword ptr [bstrg],eax
	jbe	near ptr badvec1
	mov	ebp,dword ptr [eax]
	mov	edx,dword ptr [4+ebp]
	cmp	bx,dx
	jge	near ptr badind2
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+ebx*4+8],ecx
	mov	eax,ecx
	ret
vset	endp

bltvect	proc	near
	mov	ebp,dword ptr [zbltvect]
	mov	dword ptr [savea4],ebp
	cmp	dx,5
	je	near ptr bltvect0
	mov	ecx,32767
	cmp	dx,4
	je	near ptr bltvect1
	xor	ebx,ebx
	cmp	dx,3
	jne	near ptr badnbar3
	jmp	near ptr bltvect2
bltvect0	label	near
	pop	ecx
	cmp	dword ptr [bfloat],ecx
	jbe	near ptr badfix3
bltvect1	label	near
	pop	ebx
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr badfix2
	or	bx,bx
	jl	near ptr badind2
bltvect2	label	near
	mov	dword ptr [savea2],ebx
	pop	ebx
	cmp	dword ptr [bvect],ebx
	ja	near ptr badvec2
	cmp	dword ptr [bstrg],ebx
	jbe	near ptr badvec2
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
	or	ax,ax
	jl	near ptr badind1
	mov	dword ptr [savea1],eax
	mov	eax,dword ptr [esp]
	cmp	dword ptr [bvect],eax
	ja	near ptr badvec1
	cmp	dword ptr [bstrg],eax
	jbe	near ptr badvec1
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	sub	ax,word ptr [savea1]
	call	near ptr mina1a3
	mov	ebp,dword ptr [ebx]
	mov	edx,dword ptr [4+ebp]
	sub	dx,word ptr [savea2]
	call	near ptr mina4a3
	pop	eax
	or	cx,cx
	jle	near ptr bltvect6
	cld
	push	ecx
	push	edi
	push	esi
	mov	esi,dword ptr [ebx]
	mov	ebp,dword ptr [savea2]
	lea	esi,dword ptr [esi+ebp*4+8]
	mov	edi,dword ptr [eax]
	mov	ebp,dword ptr [savea1]
	lea	edi,dword ptr [edi+ebp*4+8]
	jecxz	short l__12
	cmp	esi,edi
	jae	short l__12
	dec	ecx
	shl	ecx,2
	add	esi,ecx
	add	edi,ecx
	shr	ecx,2
	std
	movsd
l__12:
	rep	movsd
	cld
	pop	esi
	pop	edi
	pop	ecx
bltvect6	label	near
	ret
bltvect	endp

vector	proc	near
	mov	eax,edx
	push	eax
	mov	ebx,esi
	call	near ptr makevect
	pop	edx
	jmp	near ptr vector2
vector1	label	near
	pop	ebx
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+edx*4+8],ebx
vector2	label	near
	dec	dx
	jge	near ptr vector1
	ret
vector	endp

exchvect	proc	near
	mov	ebp,dword ptr [zexchvect]
	mov	dword ptr [savea4],ebp
	cmp	dword ptr [bvect],eax
	ja	near ptr badvec1
	cmp	dword ptr [bstrg],eax
	jbe	near ptr badvec1
	cmp	dword ptr [bvect],ebx
	ja	near ptr badvec2
	cmp	dword ptr [bstrg],ebx
	jbe	near ptr badvec2
	push	dword ptr [4+eax]
	push	dword ptr [4+ebx]
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ocheap],ebp
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [eax],ebp
	mov	ebp,dword ptr [ocheap]
	mov	dword ptr [ebx],ebp
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp],eax
	mov	ebp,dword ptr [ebx]
	mov	dword ptr [ebp],ebx
	pop	dword ptr [4+eax]
	pop	dword ptr [4+ebx]
	ret
exchvect	endp

fillvect	proc	near
	mov	ebp,dword ptr [zfillvect]
	mov	dword ptr [savea4],ebp
	mov	eax,32767
	cmp	dx,3
	je	near ptr fillvec0
	cmp	dx,4
	jne	near ptr badnbar4
	pop	eax
	cmp	dword ptr [bfloat],eax
	jbe	near ptr badfix1
fillvec0	label	near
	pop	ecx
	pop	ebx
	cmp	dword ptr [bfloat],ebx
	jbe	near ptr badfix2
	or	bx,bx
	jl	near ptr badind2
	mov	edx,eax
	mov	eax,dword ptr [esp]
	cmp	dword ptr [bvect],eax
	ja	near ptr badvec1
	cmp	dword ptr [bstrg],eax
	jbe	near ptr badvec1
	mov	ebp,dword ptr [eax]
	mov	eax,dword ptr [4+ebp]
	sub	ax,bx
	jo	near ptr fillvec6
fillvec6	label	near
	call	near ptr mina1a4
	pop	eax
	jmp	near ptr fillvec8
fillvec7	label	near
	mov	ebp,dword ptr [eax]
	mov	dword ptr [ebp+ebx*4+8],ecx
	inc	bx
fillvec8	label	near
	dec	dx
	jge	near ptr fillvec7
	ret
l__10:
	call	near ptr gccons
	jmp	near ptr l1__10
fillvect	endp
_TEXT	ends
	end
