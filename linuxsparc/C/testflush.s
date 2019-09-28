	.file	"testflush.c"
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LLC0:
	.asciz	"add %x\r\n"
	.section	".text"
	.align 4
	.type	flushbyte, #function
	.proc	020
flushbyte:
	!#PROLOGUE# 0
	save	%sp, -112, %sp
	!#PROLOGUE# 1
	sethi	%hi(.LLC0), %o0
	or	%o0, %lo(.LLC0), %o0
	call	printf, 0
	mov	%i0, %o1
	nop
	ret
	restore
	.size	flushbyte, .-flushbyte
	.align 4
	.global iflushb
	.type	iflushb, #function
	.proc	020
iflushb:
	!#PROLOGUE# 0
	save	%sp, -112, %sp
	!#PROLOGUE# 1
	cmp	%i0, %i1
	bgeu	.LL7
	nop
.LL5:
	call	flushbyte, 0
	mov	%i0, %o0
	add	%i0, 1, %i0
	cmp	%i0, %i1
	blu	.LL5
	nop
.LL7:
	ret
	restore
	.size	iflushb, .-iflushb
	.ident	"GCC: (GNU) 3.4.2"
