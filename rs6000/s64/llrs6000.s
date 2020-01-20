	.csect	lelisp_txt[PR]
	.globl	ffuncall
	.globl	llinit
	.globl	.llstart
.llstart:	mflr	0
	st	0,8(1)
	stm	13,-76(1)
	stu	1,-360(1)
	l	13,T.lelisp_dat(2)
	st	1,148(13)
	l	1,1060(13)
	lil	3,0
	st	3,1212(13)
	lil	3,0
	st	3,1216(13)
	lil	3,0
	st	3,1044(13)
	lil	3,0
	st	3,1052(13)
	lil	3,0
	st	3,1048(13)
	l	3,4688(13)
	st	3,204(13)
	.globl	C.restore
	bl	C.restore
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.inton
	bl	.inton
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	b	llinit
	.globl	ll_corsav
	.globl	.corsav
	.globl	C.ll_corsav
C.ll_corsav:	mflr	0
	stu	0,-4(1)
ll_corsav:	st	1,192(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.corsav
	bl	.corsav
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	ll_corest
	.globl	.corest
	.globl	C.ll_corest
C.ll_corest:	mflr	0
	stu	0,-4(1)
ll_corest:	st	1,140(13)
	st	1,192(13)
	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.corest
	bl	.corest
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	cmpli	0,3,0
	beq	ll_crest
	lil	3,1
	st	3,208(13)
	l	1,140(13)
	b	ll_corret
ll_crest:	l	1,192(13)
	.globl	C.restore
	bl	C.restore
	st	21,4(1)
ll_corret:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	.llcorgo
.llcorgo:	mflr	0
	st	0,8(1)
	stm	13,-76(1)
	stu	1,-360(1)
	l	13,T.lelisp_dat(2)
	st	1,148(13)
	cal	3,188(13)
	st	3,172(13)
	lil	3,1
	st	3,208(13)
	l	1,192(13)
	.globl	C.restore
	bl	C.restore
	oril	14,21,0
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	ll_exit
	.globl	.outner
	.globl	C.ll_exit
C.ll_exit:	mflr	0
	stu	0,-4(1)
ll_exit:	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.outner
	bl	.outner
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	.outwer
	.globl	exwer
	.globl	C.exwer
C.exwer:	mflr	0
	stu	0,-4(1)
exwer:	lil	6,0
	st	6,208(13)
	st	1,136(13)
	l	1,148(13)
	si	1,1,24
	.globl	.outwer
	bl	.outwer
	cror	15,15,15
	ai	1,1,24
	l	1,136(13)
	lil	6,1
	st	6,208(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	llpanic
	.globl	.setalarm
	.globl	sysprot
	.globl	.ll_break
.ll_break:	mflr	0
	st	0,8(1)
	stm	13,-76(1)
	stu	1,-360(1)
	l	13,T.lelisp_dat(2)
	l	4,1044(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1044(13)
	l	4,1216(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1216(13)
	bl	.inton
	l	3,1044(13)
	exts	3,3
	cmpi	0,3,4
	bge	ll_panic
ll_brear:	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
ll_panic:	l	3,1212(13)
	cmpli	0,3,0
	beq	ll_brear
	l	3,208(13)
	cmpli	0,3,0
	beq	llpanicc
	l	3,208(13)
	cmpli	0,3,1
	beq	llpanicl
	b	llpanice
llpanicc:	l	1,136(13)
	lil	3,1
	st	3,208(13)
	.globl	C.gopanic
	bl	C.gopanic
	xor	3,3,3
	oril	3,3,0xFFFF
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
llpanicl:	l	3,148(13)
	st	3,152(13)
	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	l	3,152(13)
	stu	3,-4(1)
	.globl	C.panicl1
	bl	C.panicl1
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
	b	panicl1
	.globl	C.panicl1
C.panicl1:	mflr	0
	stu	0,-4(1)
panicl1:	l	16,4684(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,4(1)
	st	3,148(13)
	mtlr	16
	br	
llpanice:	l	3,136(13)
	stu	3,-4(1)
	l	3,144(13)
	stu	3,-4(1)
	l	3,148(13)
	stu	3,-4(1)
	st	1,148(13)
	l	1,144(13)
	lil	3,1
	st	3,208(13)
	.globl	C.panice1
	bl	C.panice1
	l	1,152(13)
	lil	3,2
	st	3,208(13)
	ai	1,1,12
	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
	b	panice1
	.globl	C.panice1
C.panice1:	mflr	0
	stu	0,-4(1)
panice1:	.globl	C.restore
	bl	C.restore
	l	16,4684(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	3,148(13)
	st	3,152(13)
	l	17,148(13)
	l	3,0(17)
	st	3,148(13)
	ai	17,17,4
	l	3,0(17)
	st	3,144(13)
	ai	17,17,4
	l	3,0(17)
	st	3,136(13)
	ai	17,17,4
	mtlr	16
	br	
	.globl	C.gopanic
C.gopanic:	mflr	0
	stu	0,-4(1)
	.globl	gopanic
gopanic:	.globl	C.restore
	bl	C.restore
	l	3,1044(13)
	l	4,1216(13)
	sf	4,3,4
	andil.	3,4,0xFFFF
	st	3,1216(13)
	lil	3,0
	st	3,1044(13)
	l	16,4680(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	lil	3,1
	st	3,1212(13)
	mtlr	16
	br	
	.globl	gopanic1
gopanic1:	lil	3,0
	st	3,1212(13)
	b	llpanic
	.globl	C.restore
C.restore:	mflr	0
	stu	0,-4(1)
restore:	l	18,1112(13)
	l	19,1120(13)
	l	20,1128(13)
	l	21,1136(13)
	l	22,1148(13)
	l	23,1144(13)
	cal	24,1756(13)
	cal	25,1712(13)
	cal	26,1216(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	.ll_mouse
.ll_mouse:	mflr	0
	st	0,8(1)
	stm	13,-76(1)
	stu	1,-360(1)
	l	13,T.lelisp_dat(2)
	l	3,1052(13)
	cmpli	0,3,1
	beq	llmous1
	lil	3,1
	st	3,1052(13)
	l	4,1216(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1216(13)
llmous1:	bl	.inton
	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
	.globl	.ll_clock
.ll_clock:	mflr	0
	st	0,8(1)
	stm	13,-76(1)
	stu	1,-360(1)
	l	13,T.lelisp_dat(2)
	l	3,1048(13)
	cmpli	0,3,1
	beq	llclk1
	lil	3,1
	st	3,1048(13)
	l	4,1216(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1216(13)
llclk1:	bl	.inton
	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
	.globl	ithard
	.globl	llbreak
	.globl	llmouse
	.globl	llclock
	b	ithard
	.globl	C.ithard
C.ithard:	mflr	0
	stu	0,-4(1)
ithard:	l	3,1212(13)
	cmpli	0,3,0
	beq	ithardr
	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	.globl	C.ithardd
	bl	C.ithardd
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.ithardd
C.ithardd:	mflr	0
	stu	0,-4(1)
ithardd:	l	16,4676(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	lil	3,1
	st	3,1212(13)
	mtlr	16
	br	
	.globl	ithard0
ithard0:	lil	3,0
	st	3,1212(13)
	l	3,1044(13)
	cmpli	0,3,0
	beq	ithard1
	l	3,1044(13)
	l	4,1216(13)
	sf	4,3,4
	andil.	3,4,0xFFFF
	st	3,1216(13)
	lil	3,0
	st	3,1044(13)
	.globl	C.llbreak
	bl	C.llbreak
ithard1:	l	3,1052(13)
	cmpli	0,3,1
	bne	ithard2
	l	4,1216(13)
	si	4,4,1
	andil.	3,4,0xFFFF
	st	3,1216(13)
	lil	3,0
	st	3,1052(13)
	.globl	C.llmouse
	bl	C.llmouse
ithard2:	l	3,1048(13)
	cmpli	0,3,0
	beq	ithardr
	lil	3,0
	st	3,1216(13)
	lil	3,0
	st	3,1048(13)
	.globl	C.llclock
	bl	C.llclock
ithardr:	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	llmerro
	.globl	.ll_merro
.ll_merro:	mflr	0
	st	0,8(1)
	stm	13,-76(1)
	stu	1,-360(1)
	l	13,T.lelisp_dat(2)
	st	3,1056(13)
	bl	.inton
	l	3,208(13)
	cmpli	0,3,0
	beq	llmerroc
	l	3,208(13)
	cmpli	0,3,1
	beq	llmerrol
	b	llmerroe
llmerroc:	l	1,136(13)
	lil	3,1
	st	3,208(13)
	.globl	C.restore
	bl	C.restore
	l	15,1056(13)
	.globl	C.llmerro
	bl	C.llmerro
	xor	3,3,3
	oril	3,3,0xFFFF
	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
	.globl	llmerrol
llmerrol:	.globl	C.restore
	bl	C.restore
	l	15,1056(13)
	.globl	C.llmerro
	bl	C.llmerro
	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
llmerroe:	l	1,136(13)
	lil	3,1
	st	3,208(13)
	.globl	C.restore
	bl	C.restore
merroe1:	l	15,1056(13)
	.globl	C.llmerro
	bl	C.llmerro
	b	merroe1
	.globl	gcfloat
	.globl	ll_callg
	.globl	C.ll_callg
C.ll_callg:	mflr	0
	stu	0,-4(1)
ll_callg:	st	1,212(13)
	l	3,4(1)
	st	3,232(13)
	stu	14,-4(1)
	stu	15,-4(1)
	stu	16,-4(1)
	stu	17,-4(1)
	l	17,212(13)
	l	3,232(13)
	exts	3,3
	sli	3,3,2
	a	17,17,3
	l	3,0(17)
	st	3,220(13)
	l	3,220(13)
	stu	3,-4(1)
	l	3,136(13)
	stu	3,-4(1)
	.globl	C.call_c1
	bl	C.call_c1
	ai	1,1,8
	l	17,0(1)
	ai	1,1,4
	l	16,0(1)
	ai	1,1,4
	l	15,0(1)
	ai	1,1,4
	l	14,0(1)
	ai	1,1,4
	l	22,1148(13)
	l	3,220(13)
	st	3,1024(13)
	l	3,224(13)
	st	3,1028(13)
	l	3,228(13)
	st	3,1032(13)
	.globl	C.ll_build
	bl	C.ll_build
	l	16,0(1)
	ai	1,1,4
	l	17,0(1)
	ai	1,1,4
	mtlr	16
	br	
	.globl	C.call_c1
C.call_c1:	mflr	0
	stu	0,-4(1)
call_c1:	l	16,4672(13)
	.globl	C.sysprot
	bl	C.sysprot
	.globl	C.extvrest
	bl	C.extvrest
noextv:	l	14,0(1)
	ai	1,1,4
	l	3,4(1)
	st	3,136(13)
	l	3,8(1)
	st	3,220(13)
	mtlr	16
	br	
	.globl	call_c2
call_c2:	st	1,136(13)
	st	1,144(13)
	lil	3,2
	st	3,208(13)
	l	1,148(13)
	l	17,212(13)
	ai	17,17,8
	l	16,232(13)
	st	1,152(13)
	.globl	C.ll_conve
	bl	C.ll_conve
	l	3,0(17)
	st	3,220(13)
	ai	17,17,4
	l	3,0(17)
	st	3,216(13)
	ai	17,17,4
	si	1,1,360
	stm	13,280(1)
	oril	3,14,0
	lm	24,224(3)
	stm	24,248(1)
	lm	5,116(3)
	stm	5,140(1)
	lm	4,4(3)
	stm	4,28(1)
	l	3,0(3)
	lm	13,280(1)
	l	15,1020(13)
	oril	15,15,0
	lfd	1,0(15)
	lfd	2,8(15)
	lfd	3,16(15)
	lfd	4,24(15)
	lfd	5,32(15)
	lfd	6,40(15)
	lfd	7,48(15)
	lfd	8,56(15)
	lfd	9,64(15)
	lfd	10,72(15)
	lfd	11,80(15)
	lfd	12,88(15)
	lfd	13,96(15)
	l	16,216(13)
	mtlr	16
	brl	
call_c5:	st	3,224(13)
	ai	1,1,360
	l	1,136(13)
	lil	3,1
	st	3,208(13)
	.globl	C.restore
	bl	C.restore
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	C.extvrest
C.extvrest:	mflr	0
	stu	0,-4(1)
extvrest:	oril	14,1,0
	ai	14,14,40
	l	3,0(14)
	st	3,1036(13)
	ai	14,14,4
	b	extv1
extv2:	l	17,0(14)
	ai	14,14,4
	cmpli	0,17,7
	bne	extv3
	l	15,0(14)
	ai	14,14,4
	l	15,0(15)
	ai	15,15,8
	l	4,-4(15)
	oril	6,15,0
	b	.lls.2
.lls.1:	l	5,0(6)
	andil.	5,5,0xFFFF
	st	5,0(6)
	ai	6,6,4
.lls.2:	si	4,4,1
	cmpi	0,4,0
	bge	.lls.1
	oril	15,6,0
	b	extv1
extv3:	cmpli	0,17,8
	bne	extv4
	l	15,0(14)
	ai	14,14,4
	l	15,0(15)
	ai	15,15,8
	l	4,-4(15)
	oril	6,15,0
	b	.lls.4
.lls.3:	l	5,0(6)
	sri	5,5,1
	oriu	5,5,0x8000
	st	5,0(6)
	ai	6,6,4
.lls.4:	si	4,4,1
	cmpi	0,4,0
	bge	.lls.3
	oril	15,6,0
	b	extv1
extv4:	ai	14,14,4
extv1:	l	4,1036(13)
	si	4,4,1
	andil.	3,4,0xFFFF
	st	3,1036(13)
	l	3,1036(13)
	exts	3,3
	si	3,3,1
	st	3,1036(13)
	cmpi	0,3,0
	bgt	extv2
	lil	3,0
	st	3,1036(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	ll_conve
	.globl	C.ll_conve
C.ll_conve:	mflr	0
	stu	0,-4(1)
ll_conve:	cal	14,496(13)
	cal	3,756(13)
	st	3,160(13)
	cal	3,1016(13)
	st	3,1020(13)
	si	4,16,2
	andil.	16,4,0xFFFF
	lil	3,0
	st	3,1036(13)
	b	ll_convl
ll_conv0:	si	4,16,1
	andil.	16,4,0xFFFF
	l	4,1036(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1036(13)
	l	3,0(17)
	st	3,1028(13)
	ai	17,17,4
	l	15,0(17)
	ai	17,17,4
ll_conv1:	l	3,1028(13)
	cmpli	0,3,1
	bne	ll_conv2
	oril	5,15,0
	exts	5,5
	stu	5,-4(14)
	b	ll_convl
ll_conv2:	l	3,1028(13)
	cmpli	0,3,2
	bne	ll_conv3
	lfd	1,0(15)
	l	5,1020(13)
	stfdu	1,-8(5)
	l	3,0(5)
	l	4,4(5)
	st	5,1020(13)
	stu	4,-4(14)
	stu	3,-4(14)
	l	4,1036(13)
	ai	4,4,1
	andil.	3,4,0xFFFF
	st	3,1036(13)
	b	ll_convl
ll_conv3:	l	3,1028(13)
	cmpli	0,3,3
	bne	ll_conv4
	l	3,0(15)
	ai	3,3,8
	oril	15,3,0
	stu	15,-4(14)
	b	ll_convl
ll_conv4:	l	3,1028(13)
	cmpli	0,3,4
	bne	ll_conv5
	l	3,0(15)
	ai	3,3,8
	oril	15,3,0
	stu	15,-4(14)
	b	ll_convl
ll_conv5:	l	3,1028(13)
	cmpli	0,3,5
	bne	ll_conv6
	exts	15,15
	l	3,160(13)
	stu	15,-4(3)
	st	3,160(13)
	oril	15,3,0
	stu	15,-4(14)
	b	ll_convl
ll_conv6:	l	3,1028(13)
	cmpli	0,3,6
	bne	ll_conv7
	lfd	1,0(15)
	l	5,160(13)
	si	5,5,8
	stfd	1,0(5)
	st	5,160(13)
	oril	15,5,0
	stu	15,-4(14)
	b	ll_convl
ll_conv7:	l	3,1028(13)
	cmpli	0,3,7
	bne	ll_conv8
	l	15,0(15)
	ai	15,15,8
	l	4,-4(15)
	oril	6,15,0
	b	.lls.6
.lls.5:	l	5,0(6)
	exts	5,5
	st	5,0(6)
	ai	6,6,4
.lls.6:	si	4,4,1
	cmpi	0,4,0
	bge	.lls.5
	stu	15,-4(14)
	b	ll_convl
ll_conv8:	l	3,1028(13)
	cmpli	0,3,8
	bne	ll_conv9
	l	15,0(15)
	ai	15,15,8
	l	4,-4(15)
	oril	6,15,0
	b	.lls.8
.lls.7:	l	5,0(6)
	a	5,5,5
	st	5,0(6)
	ai	6,6,4
.lls.8:	si	4,4,1
	cmpi	0,4,0
	bge	.lls.7
	stu	15,-4(14)
	b	ll_convl
ll_conv9:	stu	15,-4(14)
ll_convl:	exts	16,16
	si	16,16,1
	cmpi	0,16,0
	bgt	ll_conv0
	lil	16,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	ll_build
	.globl	C.ll_build
C.ll_build:	mflr	0
	stu	0,-4(1)
ll_build:ll_buil1:	l	3,1024(13)
	cmpli	0,3,1
	bne	ll_buil2
	l	3,1028(13)
	andil.	3,3,0xFFFF
	st	3,1028(13)
	l	3,1028(13)
	st	3,224(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ll_buil2:	l	3,1024(13)
	cmpli	0,3,2
	bne	ll_buil3
	l	5,1168(13)
	cmpli	0,5,0
	bne	.lls.9
	.globl	C.gcfloat
	bl	C.gcfloat
.lls.9:	l	5,1168(13)
	l	3,0(5)
	st	3,1168(13)
	stfd	1,0(5)
	st	5,1028(13)
	l	3,1028(13)
	st	3,224(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ll_buil3:	l	3,1024(13)
	cmpli	0,3,3
	bne	ll_buil4
	l	14,1028(13)
	oril	15,14,0
	b	.lls.10
.lls.11:	ai	14,14,1
.lls.10:	lbz	3,0(14)
	cmpi	0,3,0
	bne	.lls.11
	sf	14,15,14
	.globl	crastrg
	.globl	C.crastrg
	bl	C.crastrg
	st	14,1028(13)
	l	3,1028(13)
	st	3,224(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ll_buil4:	l	3,1024(13)
	cmpli	0,3,4
	bne	ll_buil5
	l	3,1028(13)
	st	3,224(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ll_buil5:	l	3,1028(13)
	st	3,224(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
	.globl	.lispcall
	.globl	.getsym
	.globl	.pusharg
	.globl	.pushargd
	.globl	.cfloat_to_lfloat
	.globl	.lfloat_to_cfloat
.lispcall:	mflr	0
	st	0,8(1)
	stm	13,-76(1)
	stu	1,-360(1)
	l	13,T.lelisp_dat(2)
	st	3,220(13)
	st	4,232(13)
	st	5,236(13)
	l	3,136(13)
	stu	3,-4(1)
	l	3,208(13)
	stu	3,-4(1)
	l	3,148(13)
	stu	3,-4(1)
	l	3,220(13)
	stu	3,-4(1)
	st	1,148(13)
	l	1,144(13)
	lil	3,1
	st	3,208(13)
	.globl	C.call_l1
	bl	C.call_l1
	oril	1,17,0
	l	3,136(13)
	st	3,144(13)
	l	3,220(13)
	st	3,1024(13)
	.globl	C.ll_resl
	bl	C.ll_resl
	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
	b	call_l1
	.globl	C.call_l1
C.call_l1:	mflr	0
	stu	0,-4(1)
call_l1:	.globl	C.restore
	bl	C.restore
	l	16,4668(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	3,0(1)
	st	3,224(13)
	ai	1,1,4
	l	17,148(13)
	l	3,0(17)
	st	3,220(13)
	ai	17,17,4
	l	3,0(17)
	st	3,148(13)
	ai	17,17,4
	l	3,0(17)
	st	3,208(13)
	ai	17,17,4
	l	3,0(17)
	st	3,136(13)
	ai	17,17,4
	mtlr	16
	br	
	.globl	call_l2
call_l2:	l	17,144(13)
	l	3,232(13)
	exts	3,3
	sli	3,3,2
	a	17,17,3
	l	14,232(13)
	oril	15,14,0
	sli	15,15,2
	sf	17,15,17
	sf	1,15,1
	oril	16,1,0
	b	.lls.13
.lls.12:	l	15,0(17)
	st	15,0(16)
	ai	17,17,4
	ai	16,16,4
.lls.13:	si	14,14,1
	cmpi	0,14,0
	bge	.lls.12
	l	14,236(13)
	l	17,232(13)
	b	ffuncall
	.globl	C.ll_resl
C.ll_resl:	mflr	0
	stu	0,-4(1)
ll_resl:ll_res1:	l	3,1024(13)
	cmpli	0,3,1
	bne	ll_res2
	l	3,224(13)
	exts	4,4
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ll_res2:	l	3,1024(13)
	cmpli	0,3,2
	bne	ll_res3
	l	3,224(13)
	lfd	1,0(3)
	l	5,1020(13)
	stfdu	1,-8(5)
	l	3,0(5)
	l	4,4(5)
	st	5,1020(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ll_res3:	l	3,1024(13)
	cmpli	0,3,3
	bne	ll_res4
	l	3,224(13)
	l	3,0(3)
	ai	3,3,8
	oril	3,3,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ll_res4:	l	3,1024(13)
	cmpli	0,3,4
	bne	ll_res5
	l	3,224(13)
	l	3,0(3)
	ai	3,3,8
	oril	3,3,0
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
ll_res5:	l	3,224(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
.getsym:	mflr	0
	st	0,8(1)
	stm	13,-76(1)
	stu	1,-360(1)
	l	13,T.lelisp_dat(2)
	st	3,224(13)
	l	3,136(13)
	stu	3,-4(1)
	l	3,148(13)
	stu	3,-4(1)
	st	1,148(13)
	l	1,144(13)
	lil	3,1
	st	3,208(13)
	.globl	C.llgetsym1
	bl	C.llgetsym1
	oril	1,17,0
	lil	3,2
	st	3,208(13)
	l	3,224(13)
	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
	b	llgetsym1
	.globl	C.llgetsym1
C.llgetsym1:	mflr	0
	stu	0,-4(1)
llgetsym1:	.globl	C.restore
	bl	C.restore
	l	16,4664(13)
	.globl	C.sysprot
	bl	C.sysprot
	l	14,0(1)
	ai	1,1,4
	l	17,148(13)
	l	3,0(17)
	st	3,148(13)
	ai	17,17,4
	l	3,0(17)
	st	3,136(13)
	ai	17,17,4
	mtlr	16
	br	
	.globl	getsym2
getsym2:	l	16,224(13)
	oril	14,16,0
	oril	15,14,0
	b	.lls.14
.lls.15:	ai	14,14,1
.lls.14:	lbz	3,0(14)
	cmpi	0,3,0
	bne	.lls.15
	sf	14,15,14
	.globl	crastrg
	.globl	C.crastrg
	bl	C.crastrg
	oril	16,14,0
	oril	15,16,0
	l	3,0(15)
	l	14,4(3)
	.globl	C.trysymb
	bl	C.trysymb
	st	14,224(13)
	l	0,0(1)
	ai	1,1,4
	mtlr	0
	br	
.pushargd:.pusharg:	mflr	0
	st	0,8(1)
	stm	13,-76(1)
	stu	1,-360(1)
	l	13,T.lelisp_dat(2)
	st	3,220(13)
	st	4,224(13)
	st	5,228(13)
	l	3,136(13)
	stu	3,-4(1)
	l	3,148(13)
	stu	3,-4(1)
	st	1,148(13)
	l	1,144(13)
	lil	3,1
	st	3,208(13)
	.globl	C.restore
	bl	C.restore
	l	3,224(13)
	st	3,1028(13)
	l	3,228(13)
	st	3,1032(13)
	l	3,220(13)
	st	3,1024(13)
	.globl	C.ll_build
	bl	C.ll_build
	l	14,144(13)
	l	3,224(13)
	stu	3,-4(14)
	st	14,144(13)
	l	3,148(13)
	st	3,152(13)
	l	17,148(13)
	l	3,0(17)
	st	3,148(13)
	ai	17,17,4
	l	3,0(17)
	st	3,136(13)
	ai	17,17,4
	oril	1,17,0
	lil	3,2
	st	3,208(13)
	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
.cfloat_to_lfloat:	mflr	0
	st	0,8(1)
	stm	13,-76(1)
	stu	1,-360(1)
	l	13,T.lelisp_dat(2)
	st	3,224(13)
	st	4,228(13)
	l	3,136(13)
	stu	3,-4(1)
	l	3,148(13)
	stu	3,-4(1)
	st	1,148(13)
	l	1,144(13)
	lil	3,1
	st	3,208(13)
	.globl	C.restore
	bl	C.restore
	l	3,224(13)
	st	3,1028(13)
	l	3,228(13)
	st	3,1032(13)
	l	5,1168(13)
	cmpli	0,5,0
	bne	.lls.16
	.globl	C.gcfloat
	bl	C.gcfloat
.lls.16:	l	5,1168(13)
	l	3,0(5)
	st	3,1168(13)
	stfd	1,0(5)
	st	5,1028(13)
	l	3,148(13)
	st	3,152(13)
	l	17,148(13)
	l	3,0(17)
	st	3,148(13)
	ai	17,17,4
	l	3,0(17)
	st	3,136(13)
	ai	17,17,4
	oril	1,17,0
	lil	3,2
	st	3,208(13)
	l	3,1028(13)
	ai	1,1,360
	lm	13,-76(1)
	l	0,8(1)
	mtlr	0
	br	
.lfloat_to_cfloat:	mflr	0
	st	0,8(1)
	lfd	1,0(3)
	l	0,8(1)
	mtlr	0
	br	
