	.text
	.syntax unified
	.eabi_attribute	67, "2.09"	@ Tag_conformance
	.cpu	cortex-a8
	.eabi_attribute	6, 10	@ Tag_CPU_arch
	.eabi_attribute	7, 65	@ Tag_CPU_arch_profile
	.eabi_attribute	8, 1	@ Tag_ARM_ISA_use
	.eabi_attribute	9, 2	@ Tag_THUMB_ISA_use
	.fpu	neon
	.eabi_attribute	17, 1	@ Tag_ABI_PCS_GOT_use
	.eabi_attribute	20, 2	@ Tag_ABI_FP_denormal
	.eabi_attribute	23, 1	@ Tag_ABI_FP_number_model
	.eabi_attribute	34, 1	@ Tag_CPU_unaligned_access
	.eabi_attribute	24, 1	@ Tag_ABI_align_needed
	.eabi_attribute	25, 1	@ Tag_ABI_align_preserved
	.eabi_attribute	28, 1	@ Tag_ABI_VFP_args
	.eabi_attribute	38, 1	@ Tag_ABI_FP_16bit_format
	.eabi_attribute	18, 4	@ Tag_ABI_PCS_wchar_t
	.eabi_attribute	26, 2	@ Tag_ABI_enum_size
	.eabi_attribute	14, 0	@ Tag_ABI_PCS_R9_use
	.eabi_attribute	68, 1	@ Tag_Virtualization_use
	.file	"/root/Bela/projects/rnbo.example.bela-main/build/DFRobot_VisualRotaryEncoder.bc"
	.file	1 "/usr/include" "stdint.h"
	.globl	_ZN27DFRobot_VisualRotaryEncoderC2Ev
	.p2align	2
	.type	_ZN27DFRobot_VisualRotaryEncoderC2Ev,%function
_ZN27DFRobot_VisualRotaryEncoderC2Ev:   @ @_ZN27DFRobot_VisualRotaryEncoderC2Ev
.Lfunc_begin0:
	.file	2 "/root/Bela/projects/rnbo.example.bela-main" "DFRobot_VisualRotaryEncoder.cpp"
	.loc	2 15 0                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:15:0
	.fnstart
	.cfi_startproc
@ BB#0:
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder:this <- %R0
	.loc	2 15 1 prologue_end     @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:15:1
	movw	r1, :lower16:_ZTV27DFRobot_VisualRotaryEncoder
	movt	r1, :upper16:_ZTV27DFRobot_VisualRotaryEncoder
	add	r1, r1, #8
	str	r1, [r0]
	.loc	2 16 1                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:16:1
	bx	lr
.Ltmp0:
.Lfunc_end0:
	.size	_ZN27DFRobot_VisualRotaryEncoderC2Ev, .Lfunc_end0-_ZN27DFRobot_VisualRotaryEncoderC2Ev
	.cfi_endproc
	.file	3 "/root/Bela/projects/rnbo.example.bela-main" "DFRobot_VisualRotaryEncoder.h"
	.file	4 "/usr/lib/llvm-3.9/bin/../lib/clang/3.9.1/include" "stddef.h"
	.fnend

	.globl	_ZN27DFRobot_VisualRotaryEncoder5beginEv
	.p2align	2
	.type	_ZN27DFRobot_VisualRotaryEncoder5beginEv,%function
_ZN27DFRobot_VisualRotaryEncoder5beginEv: @ @_ZN27DFRobot_VisualRotaryEncoder5beginEv
.Lfunc_begin1:
	.loc	2 20 0                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:20:0
	.fnstart
	.cfi_startproc
@ BB#0:
	.save	{r11, lr}
	push	{r11, lr}
.Ltmp1:
	.cfi_def_cfa_offset 8
.Ltmp2:
	.cfi_offset lr, -4
.Ltmp3:
	.cfi_offset r11, -8
	.setfp	r11, sp
	mov	r11, sp
.Ltmp4:
	.cfi_def_cfa_register r11
	.pad	#8
	sub	sp, sp, #8
	@DEBUG_VALUE: begin:this <- %R0
.Ltmp5:
	.loc	2 22 11 prologue_end    @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:22:11
	ldr	r1, [r0]
	sub	r2, r11, #2
.Ltmp6:
	@DEBUG_VALUE: begin:idBuf <- [%R2+0]
	mov	r3, #2
	ldr	r12, [r1, #8]
	mov	r1, #0
	blx	r12
.Ltmp7:
	mov	r1, r0
	mvn	r0, #0
.Ltmp8:
	.loc	2 22 6 is_stmt 0        @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:22:6
	cmp	r1, #0
	beq	.LBB1_3
@ BB#1:
.Ltmp9:
	.loc	2 28 29 is_stmt 1       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:28:29
	ldrb	r0, [r11, #-2]
	.loc	2 28 24 is_stmt 0       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:28:24
	movw	r2, #502
	.loc	2 28 55                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:28:55
	ldrb	r1, [r11, #-1]
	.loc	2 28 53                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:28:53
	orr	r1, r1, r0, lsl #8
	mvn	r0, #1
.Ltmp10:
	.loc	2 28 7                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:28:7
	cmp	r1, r2
	bne	.LBB1_3
@ BB#2:
	.loc	2 33 3 is_stmt 1        @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:33:3
	movw	r0, #20000
	bl	usleep
	mov	r0, #0
.LBB1_3:
	.loc	2 36 1                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:36:1
	mov	sp, r11
	pop	{r11, pc}
.Ltmp11:
.Lfunc_end1:
	.size	_ZN27DFRobot_VisualRotaryEncoder5beginEv, .Lfunc_end1-_ZN27DFRobot_VisualRotaryEncoder5beginEv
	.cfi_endproc
	.fnend

	.globl	_ZN27DFRobot_VisualRotaryEncoder16refreshBasicInfoEv
	.p2align	2
	.type	_ZN27DFRobot_VisualRotaryEncoder16refreshBasicInfoEv,%function
_ZN27DFRobot_VisualRotaryEncoder16refreshBasicInfoEv: @ @_ZN27DFRobot_VisualRotaryEncoder16refreshBasicInfoEv
.Lfunc_begin2:
	.loc	2 39 0                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:39:0
	.fnstart
	.cfi_startproc
@ BB#0:
	.save	{r4, r10, r11, lr}
	push	{r4, r10, r11, lr}
.Ltmp12:
	.cfi_def_cfa_offset 16
.Ltmp13:
	.cfi_offset lr, -4
.Ltmp14:
	.cfi_offset r11, -8
.Ltmp15:
	.cfi_offset r10, -12
.Ltmp16:
	.cfi_offset r4, -16
	.setfp	r11, sp, #8
	add	r11, sp, #8
.Ltmp17:
	.cfi_def_cfa r11, 8
	.pad	#8
	sub	sp, sp, #8
	@DEBUG_VALUE: refreshBasicInfo:this <- %R0
	mov	r4, r0
.Ltmp18:
	@DEBUG_VALUE: refreshBasicInfo:this <- %R4
	mov	r0, #0
.Ltmp19:
	.loc	2 40 11 prologue_end discriminator 1 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:40:11
	str	r0, [sp, #4]
	mov	r2, sp
.Ltmp20:
	@DEBUG_VALUE: refreshBasicInfo:tempBuf <- [%R2+0]
	str	r0, [sp]
	.loc	2 41 3                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:41:3
	mov	r1, #0
	ldr	r0, [r4]
	mov	r3, #8
	ldr	r12, [r0, #8]
	mov	r0, r4
	blx	r12
.Ltmp21:
	.loc	2 42 29                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:42:29
	ldr	r0, [sp]
	.loc	2 42 17 is_stmt 0       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:42:17
	rev16	r1, r0
	strh	r1, [r4, #4]
	.loc	2 43 40 is_stmt 1       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:43:40
	mov	r1, #65280
	and	r1, r1, r0, lsr #8
	.loc	2 43 45 is_stmt 0       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:43:45
	orr	r0, r1, r0, lsr #24
	.loc	2 43 17                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:43:17
	strh	r0, [r4, #6]
	.loc	2 44 33 is_stmt 1       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:44:33
	ldr	r0, [sp, #4]
	.loc	2 44 21 is_stmt 0       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:44:21
	rev16	r1, r0
	strh	r1, [r4, #8]
	.loc	2 45 33 is_stmt 1       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:45:33
	lsr	r0, r0, #24
	.loc	2 45 21 is_stmt 0       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:45:21
	strb	r0, [r4, #10]
	.loc	2 46 1 is_stmt 1        @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:46:1
	sub	sp, r11, #8
	pop	{r4, r10, r11, pc}
.Ltmp22:
.Lfunc_end2:
	.size	_ZN27DFRobot_VisualRotaryEncoder16refreshBasicInfoEv, .Lfunc_end2-_ZN27DFRobot_VisualRotaryEncoder16refreshBasicInfoEv
	.cfi_endproc
	.fnend

	.globl	_ZN27DFRobot_VisualRotaryEncoder15getEncoderValueEv
	.p2align	2
	.type	_ZN27DFRobot_VisualRotaryEncoder15getEncoderValueEv,%function
_ZN27DFRobot_VisualRotaryEncoder15getEncoderValueEv: @ @_ZN27DFRobot_VisualRotaryEncoder15getEncoderValueEv
.Lfunc_begin3:
	.loc	2 49 0                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:49:0
	.fnstart
	.cfi_startproc
@ BB#0:
	.save	{r11, lr}
	push	{r11, lr}
.Ltmp23:
	.cfi_def_cfa_offset 8
.Ltmp24:
	.cfi_offset lr, -4
.Ltmp25:
	.cfi_offset r11, -8
	.setfp	r11, sp
	mov	r11, sp
.Ltmp26:
	.cfi_def_cfa_register r11
	.pad	#8
	sub	sp, sp, #8
	@DEBUG_VALUE: getEncoderValue:this <- %R0
.Ltmp27:
	.loc	2 50 11 prologue_end discriminator 1 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:50:11
	mov	r1, #0
	sub	r2, r11, #2
	strh	r1, [r11, #-2]
	.loc	2 51 3                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:51:3
	mov	r3, #2
	ldr	r1, [r0]
	ldr	r12, [r1, #8]
	mov	r1, #8
	blx	r12
.Ltmp28:
	.loc	2 53 20                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:53:20
	ldrh	r0, [r11, #-2]
	rev	r0, r0
	lsr	r0, r0, #16
	.loc	2 53 3 is_stmt 0        @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:53:3
	mov	sp, r11
	pop	{r11, pc}
.Ltmp29:
.Lfunc_end3:
	.size	_ZN27DFRobot_VisualRotaryEncoder15getEncoderValueEv, .Lfunc_end3-_ZN27DFRobot_VisualRotaryEncoder15getEncoderValueEv
	.cfi_endproc
	.fnend

	.globl	_ZN27DFRobot_VisualRotaryEncoder15setEncoderValueEt
	.p2align	2
	.type	_ZN27DFRobot_VisualRotaryEncoder15setEncoderValueEt,%function
_ZN27DFRobot_VisualRotaryEncoder15setEncoderValueEt: @ @_ZN27DFRobot_VisualRotaryEncoder15setEncoderValueEt
.Lfunc_begin4:
	.loc	2 57 0 is_stmt 1        @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:57:0
	.fnstart
	.cfi_startproc
@ BB#0:
	@DEBUG_VALUE: setEncoderValue:this <- %R0
	@DEBUG_VALUE: setEncoderValue:value <- %R1
	.loc	2 58 6 prologue_end     @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:58:6
	mov	r2, #0
	cmp	r2, r1, lsr #10
	.loc	2 64 1                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:64:1
	bxne	lr
	.save	{r11, lr}
	push	{r11, lr}
.Ltmp30:
	.cfi_def_cfa_offset 8
.Ltmp31:
	.cfi_offset lr, -4
.Ltmp32:
	.cfi_offset r11, -8
	.setfp	r11, sp
	mov	r11, sp
.Ltmp33:
	.cfi_def_cfa_register r11
	.pad	#8
	sub	sp, sp, #8
.Ltmp34:
	.loc	2 60 18                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:60:18
	lsr	r2, r1, #8
	.loc	2 62 5                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:62:5
	mov	r3, #2
	.loc	2 60 16                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:60:16
	strb	r2, [r11, #-2]
	sub	r2, r11, #2
.Ltmp35:
	@DEBUG_VALUE: tempBuf <- [%R2+0]
	.loc	2 61 16                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:61:16
	strb	r1, [r11, #-1]
	.loc	2 62 5                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:62:5
	ldr	r1, [r0]
.Ltmp36:
	ldr	r12, [r1, #4]
	mov	r1, #8
	blx	r12
.Ltmp37:
	mov	sp, r11
	pop	{r11, lr}
.Ltmp38:
	.loc	2 64 1                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:64:1
	bx	lr
.Ltmp39:
.Lfunc_end4:
	.size	_ZN27DFRobot_VisualRotaryEncoder15setEncoderValueEt, .Lfunc_end4-_ZN27DFRobot_VisualRotaryEncoder15setEncoderValueEt
	.cfi_endproc
	.fnend

	.globl	_ZN27DFRobot_VisualRotaryEncoder18getGainCoefficientEv
	.p2align	2
	.type	_ZN27DFRobot_VisualRotaryEncoder18getGainCoefficientEv,%function
_ZN27DFRobot_VisualRotaryEncoder18getGainCoefficientEv: @ @_ZN27DFRobot_VisualRotaryEncoder18getGainCoefficientEv
.Lfunc_begin5:
	.loc	2 66 0                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:66:0
	.fnstart
	.cfi_startproc
@ BB#0:
	.save	{r11, lr}
	push	{r11, lr}
.Ltmp40:
	.cfi_def_cfa_offset 8
.Ltmp41:
	.cfi_offset lr, -4
.Ltmp42:
	.cfi_offset r11, -8
	.setfp	r11, sp
	mov	r11, sp
.Ltmp43:
	.cfi_def_cfa_register r11
	.pad	#8
	sub	sp, sp, #8
	@DEBUG_VALUE: getGainCoefficient:this <- %R0
.Ltmp44:
	.loc	2 67 11 prologue_end    @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:67:11
	mov	r1, #0
.Ltmp45:
	@DEBUG_VALUE: getGainCoefficient:RotateGain <- 0
	sub	r2, r11, #1
.Ltmp46:
	@DEBUG_VALUE: getGainCoefficient:RotateGain <- [%R2+0]
	strb	r1, [r11, #-1]
	.loc	2 68 3                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:68:3
	mov	r3, #1
	ldr	r1, [r0]
	ldr	r12, [r1, #8]
	mov	r1, #11
	blx	r12
.Ltmp47:
	.loc	2 70 3                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:70:3
	ldrb	r0, [r11, #-1]
	mov	sp, r11
	pop	{r11, pc}
.Ltmp48:
.Lfunc_end5:
	.size	_ZN27DFRobot_VisualRotaryEncoder18getGainCoefficientEv, .Lfunc_end5-_ZN27DFRobot_VisualRotaryEncoder18getGainCoefficientEv
	.cfi_endproc
	.fnend

	.globl	_ZN27DFRobot_VisualRotaryEncoder18setGainCoefficientEh
	.p2align	2
	.type	_ZN27DFRobot_VisualRotaryEncoder18setGainCoefficientEh,%function
_ZN27DFRobot_VisualRotaryEncoder18setGainCoefficientEh: @ @_ZN27DFRobot_VisualRotaryEncoder18setGainCoefficientEh
.Lfunc_begin6:
	.loc	2 73 0                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:73:0
	.fnstart
	.cfi_startproc
@ BB#0:
	.save	{r11, lr}
	push	{r11, lr}
.Ltmp49:
	.cfi_def_cfa_offset 8
.Ltmp50:
	.cfi_offset lr, -4
.Ltmp51:
	.cfi_offset r11, -8
	.setfp	r11, sp
	mov	r11, sp
.Ltmp52:
	.cfi_def_cfa_register r11
	.pad	#8
	sub	sp, sp, #8
	@DEBUG_VALUE: setGainCoefficient:this <- %R0
	@DEBUG_VALUE: setGainCoefficient:gainValue <- %R1
	strb	r1, [r11, #-1]
.Ltmp53:
	.loc	2 74 26 prologue_end    @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:74:26
	sub	r1, r1, #1
.Ltmp54:
	uxtb	r1, r1
	cmp	r1, #50
	bhi	.LBB6_2
.Ltmp55:
@ BB#1:
	@DEBUG_VALUE: setGainCoefficient:this <- %R0
	.loc	2 75 5                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:75:5
	ldr	r1, [r0]
	sub	r2, r11, #1
.Ltmp56:
	@DEBUG_VALUE: setGainCoefficient:gainValue <- [%R2+0]
	mov	r3, #1
	ldr	r12, [r1, #4]
	mov	r1, #11
	blx	r12
.Ltmp57:
.LBB6_2:
	.loc	2 77 1                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:77:1
	mov	sp, r11
	pop	{r11, pc}
.Ltmp58:
.Lfunc_end6:
	.size	_ZN27DFRobot_VisualRotaryEncoder18setGainCoefficientEh, .Lfunc_end6-_ZN27DFRobot_VisualRotaryEncoder18setGainCoefficientEh
	.cfi_endproc
	.fnend

	.globl	_ZN27DFRobot_VisualRotaryEncoder16detectButtonDownEv
	.p2align	2
	.type	_ZN27DFRobot_VisualRotaryEncoder16detectButtonDownEv,%function
_ZN27DFRobot_VisualRotaryEncoder16detectButtonDownEv: @ @_ZN27DFRobot_VisualRotaryEncoder16detectButtonDownEv
.Lfunc_begin7:
	.loc	2 79 0                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:79:0
	.fnstart
	.cfi_startproc
@ BB#0:
	.save	{r4, r5, r11, lr}
	push	{r4, r5, r11, lr}
.Ltmp59:
	.cfi_def_cfa_offset 16
.Ltmp60:
	.cfi_offset lr, -4
.Ltmp61:
	.cfi_offset r11, -8
.Ltmp62:
	.cfi_offset r5, -12
.Ltmp63:
	.cfi_offset r4, -16
	.setfp	r11, sp, #8
	add	r11, sp, #8
.Ltmp64:
	.cfi_def_cfa r11, 8
	.pad	#8
	sub	sp, sp, #8
	@DEBUG_VALUE: detectButtonDown:this <- %R0
	mov	r5, #0
.Ltmp65:
	@DEBUG_VALUE: detectButtonDown:clearStatus <- 0
	mov	r4, r0
.Ltmp66:
	@DEBUG_VALUE: detectButtonDown:ret <- 0
	@DEBUG_VALUE: detectButtonDown:this <- %R4
	.loc	2 81 25 prologue_end    @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:81:25
	strb	r5, [sp, #6]
	add	r2, sp, #7
.Ltmp67:
	@DEBUG_VALUE: detectButtonDown:buttonStatus <- [%R2+0]
	.loc	2 83 3                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:83:3
	ldr	r0, [r4]
	mov	r1, #10
	mov	r3, #1
	ldr	r12, [r0, #8]
	mov	r0, r4
	blx	r12
.Ltmp68:
	.loc	2 85 13                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:85:13
	ldrb	r0, [sp, #7]
.Ltmp69:
	.loc	2 85 7 is_stmt 0        @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:85:7
	tst	r0, #1
	beq	.LBB7_2
.Ltmp70:
@ BB#1:
	@DEBUG_VALUE: detectButtonDown:this <- %R4
	.loc	2 86 5 is_stmt 1        @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:86:5
	ldr	r0, [r4]
	add	r2, sp, #6
.Ltmp71:
	@DEBUG_VALUE: detectButtonDown:clearStatus <- [%R2+0]
	mov	r1, #10
	mov	r3, #1
	ldr	r5, [r0, #4]
	mov	r0, r4
	blx	r5
.Ltmp72:
	@DEBUG_VALUE: detectButtonDown:ret <- 1
	mov	r5, #1
.Ltmp73:
.LBB7_2:
	@DEBUG_VALUE: detectButtonDown:this <- %R4
	.loc	2 90 3                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:90:3
	mov	r0, r5
	sub	sp, r11, #8
	pop	{r4, r5, r11, pc}
.Ltmp74:
.Lfunc_end7:
	.size	_ZN27DFRobot_VisualRotaryEncoder16detectButtonDownEv, .Lfunc_end7-_ZN27DFRobot_VisualRotaryEncoder16detectButtonDownEv
	.cfi_endproc
	.fnend

	.globl	_ZN31DFRobot_VisualRotaryEncoder_I2CC2Ehi
	.p2align	2
	.type	_ZN31DFRobot_VisualRotaryEncoder_I2CC2Ehi,%function
_ZN31DFRobot_VisualRotaryEncoder_I2CC2Ehi: @ @_ZN31DFRobot_VisualRotaryEncoder_I2CC2Ehi
.Lfunc_begin8:
	.loc	2 96 0                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:96:0
	.fnstart
	.cfi_startproc
@ BB#0:                                 @ %.noexc
	.save	{r4, r5, r6, r7, r11, lr}
	push	{r4, r5, r6, r7, r11, lr}
.Ltmp75:
	.cfi_def_cfa_offset 24
.Ltmp76:
	.cfi_offset lr, -4
.Ltmp77:
	.cfi_offset r11, -8
.Ltmp78:
	.cfi_offset r7, -12
.Ltmp79:
	.cfi_offset r6, -16
.Ltmp80:
	.cfi_offset r5, -20
.Ltmp81:
	.cfi_offset r4, -24
	.setfp	r11, sp, #16
	add	r11, sp, #16
.Ltmp82:
	.cfi_def_cfa r11, 8
	.pad	#64
	sub	sp, sp, #64
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:this <- %R0
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:i2cAddr <- %R1
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:bus <- %R2
	mov	r4, r0
.Ltmp83:
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:this <- %R4
	.loc	2 96 1 prologue_end     @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:96:1
	movw	r0, :lower16:_ZTV31DFRobot_VisualRotaryEncoder_I2C
	movt	r0, :upper16:_ZTV31DFRobot_VisualRotaryEncoder_I2C
	mov	r5, r2
.Ltmp84:
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:bus <- %R5
	mov	r6, r1
.Ltmp85:
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:i2cAddr <- %R6
	add	r1, r0, #8
	add	r0, r0, #36
.Ltmp86:
	@DEBUG_VALUE: initI2C_RW:address <- %R6
	@DEBUG_VALUE: initI2C_RW:fileHnd <- -1
	@DEBUG_VALUE: initI2C_RW:bus <- %R5
	add	r2, r4, #12
	str	r1, [r4]
	mvn	r1, #0
	stm	r2, {r0, r5, r6}
.Ltmp87:
	.file	5 "./include" "I2c.h"
	.loc	5 50 2                  @ ./include/I2c.h:50:2
	movw	r2, :lower16:.L.str.3
	mov	r7, sp
	.loc	5 46 11                 @ ./include/I2c.h:46:11
	str	r1, [r4, #24]
	.loc	5 50 2                  @ ./include/I2c.h:50:2
	movt	r2, :upper16:.L.str.3
	mov	r0, r7
	mov	r1, #64
	mov	r3, r5
	bl	snprintf
.Ltmp88:
	.loc	5 52 18                 @ ./include/I2c.h:52:18
	mov	r0, r7
	mov	r1, #2
	bl	open
	.loc	5 52 16 is_stmt 0       @ ./include/I2c.h:52:16
	str	r0, [r4, #24]
.Ltmp89:
	.loc	5 52 6                  @ ./include/I2c.h:52:6
	cmp	r0, #0
	blt	.LBB8_3
.Ltmp90:
@ BB#1:
	@DEBUG_VALUE: initI2C_RW:bus <- %R5
	@DEBUG_VALUE: initI2C_RW:address <- %R6
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:i2cAddr <- %R6
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:bus <- %R5
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:this <- %R4
	.loc	5 59 30 is_stmt 1       @ ./include/I2c.h:59:30
	ldr	r2, [r4, #20]
	.loc	5 59 6 is_stmt 0        @ ./include/I2c.h:59:6
	movw	r1, #1795
	bl	ioctl
.Ltmp91:
	.loc	5 59 6                  @ ./include/I2c.h:59:6
	cmp	r0, #0
	blt	.LBB8_4
.Ltmp92:
.LBB8_2:
	@DEBUG_VALUE: initI2C_RW:bus <- %R5
	@DEBUG_VALUE: initI2C_RW:address <- %R6
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:i2cAddr <- %R6
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:bus <- %R5
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:this <- %R4
	.loc	2 99 1 is_stmt 1 discriminator 1 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:99:1
	mov	r0, r4
	sub	sp, r11, #16
	pop	{r4, r5, r6, r7, r11, pc}
.Ltmp93:
.LBB8_3:
	@DEBUG_VALUE: initI2C_RW:bus <- %R5
	@DEBUG_VALUE: initI2C_RW:address <- %R6
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:i2cAddr <- %R6
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:bus <- %R5
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:this <- %R4
	.loc	5 54 11                 @ ./include/I2c.h:54:11
	movw	r0, :lower16:stderr
	.loc	5 54 3 is_stmt 0        @ ./include/I2c.h:54:3
	movw	r1, :lower16:.L.str.4
	.loc	5 54 11                 @ ./include/I2c.h:54:11
	movt	r0, :upper16:stderr
	.loc	5 54 3                  @ ./include/I2c.h:54:3
	movt	r1, :upper16:.L.str.4
	.loc	5 54 11                 @ ./include/I2c.h:54:11
	ldr	r0, [r0]
	mov	r2, sp
	b	.LBB8_5
.Ltmp94:
.LBB8_4:
	@DEBUG_VALUE: initI2C_RW:bus <- %R5
	@DEBUG_VALUE: initI2C_RW:address <- %R6
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:i2cAddr <- %R6
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:bus <- %R5
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:this <- %R4
	.loc	5 60 11 is_stmt 1       @ ./include/I2c.h:60:11
	movw	r0, :lower16:stderr
	.loc	5 60 54 is_stmt 0       @ ./include/I2c.h:60:54
	ldr	r2, [r4, #20]
	.loc	5 60 11                 @ ./include/I2c.h:60:11
	movt	r0, :upper16:stderr
	.loc	5 60 3                  @ ./include/I2c.h:60:3
	movw	r1, :lower16:.L.str.5
	.loc	5 60 11                 @ ./include/I2c.h:60:11
	ldr	r0, [r0]
	.loc	5 60 3                  @ ./include/I2c.h:60:3
	movt	r1, :upper16:.L.str.5
.Ltmp95:
.LBB8_5:
	@DEBUG_VALUE: initI2C_RW:bus <- %R5
	@DEBUG_VALUE: initI2C_RW:address <- %R6
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:i2cAddr <- %R6
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:bus <- %R5
	@DEBUG_VALUE: DFRobot_VisualRotaryEncoder_I2C:this <- %R4
	bl	fprintf
.Ltmp96:
	.loc	2 98 12 is_stmt 1       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:98:12
	movw	r0, :lower16:stderr
	.loc	2 98 4 is_stmt 0        @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:98:4
	movw	r1, :lower16:.L.str
	.loc	2 98 12                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:98:12
	movt	r0, :upper16:stderr
	.loc	2 98 4                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:98:4
	movt	r1, :upper16:.L.str
	.loc	2 98 12                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:98:12
	ldr	r0, [r0]
	.loc	2 98 4                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:98:4
	mov	r2, r6
	mov	r3, r5
	bl	fprintf
	b	.LBB8_2
.Ltmp97:
.Lfunc_end8:
	.size	_ZN31DFRobot_VisualRotaryEncoder_I2CC2Ehi, .Lfunc_end8-_ZN31DFRobot_VisualRotaryEncoder_I2CC2Ehi
	.cfi_endproc
	.file	6 "/usr/include/arm-linux-gnueabihf/bits" "types.h"
	.file	7 "/usr/include" "stdio.h"
	.fnend

	.globl	_ZN31DFRobot_VisualRotaryEncoder_I2C5beginEv
	.p2align	2
	.type	_ZN31DFRobot_VisualRotaryEncoder_I2C5beginEv,%function
_ZN31DFRobot_VisualRotaryEncoder_I2C5beginEv: @ @_ZN31DFRobot_VisualRotaryEncoder_I2C5beginEv
.Lfunc_begin9:
	.loc	2 102 0 is_stmt 1       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:102:0
	.fnstart
	.cfi_startproc
@ BB#0:
	.save	{r11, lr}
	push	{r11, lr}
.Ltmp98:
	.cfi_def_cfa_offset 8
.Ltmp99:
	.cfi_offset lr, -4
.Ltmp100:
	.cfi_offset r11, -8
	.setfp	r11, sp
	mov	r11, sp
.Ltmp101:
	.cfi_def_cfa_register r11
	.pad	#8
	sub	sp, sp, #8
	@DEBUG_VALUE: begin:this <- %R0
.Ltmp102:
	@DEBUG_VALUE: begin:this <- %R0
	.loc	2 22 11 prologue_end    @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:22:11
	ldr	r1, [r0]
	sub	r2, r11, #2
	mov	r3, #2
	ldr	r12, [r1, #8]
	mov	r1, #0
	blx	r12
.Ltmp103:
	mov	r1, r0
	mvn	r0, #0
.Ltmp104:
	.loc	2 22 6 is_stmt 0        @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:22:6
	cmp	r1, #0
	beq	.LBB9_3
@ BB#1:
.Ltmp105:
	.loc	2 28 29 is_stmt 1       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:28:29
	ldrb	r0, [r11, #-2]
	.loc	2 28 24 is_stmt 0       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:28:24
	movw	r2, #502
	.loc	2 28 55                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:28:55
	ldrb	r1, [r11, #-1]
	.loc	2 28 53                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:28:53
	orr	r1, r1, r0, lsl #8
	mvn	r0, #1
.Ltmp106:
	.loc	2 28 7                  @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:28:7
	cmp	r1, r2
	bne	.LBB9_3
@ BB#2:
	.loc	2 33 3 is_stmt 1        @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:33:3
	movw	r0, #20000
	bl	usleep
	mov	r0, #0
.Ltmp107:
.LBB9_3:                                @ %_ZN27DFRobot_VisualRotaryEncoder5beginEv.exit
	.loc	2 103 3                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:103:3
	mov	sp, r11
	pop	{r11, pc}
.Ltmp108:
.Lfunc_end9:
	.size	_ZN31DFRobot_VisualRotaryEncoder_I2C5beginEv, .Lfunc_end9-_ZN31DFRobot_VisualRotaryEncoder_I2C5beginEv
	.cfi_endproc
	.fnend

	.globl	_ZN31DFRobot_VisualRotaryEncoder_I2C8writeRegEhPKvj
	.p2align	2
	.type	_ZN31DFRobot_VisualRotaryEncoder_I2C8writeRegEhPKvj,%function
_ZN31DFRobot_VisualRotaryEncoder_I2C8writeRegEhPKvj: @ @_ZN31DFRobot_VisualRotaryEncoder_I2C8writeRegEhPKvj
.Lfunc_begin10:
	.loc	2 109 0                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:109:0
	.fnstart
	.cfi_startproc
@ BB#0:
	.save	{r4, r5, r6, r7, r8, r9, r11, lr}
	push	{r4, r5, r6, r7, r8, r9, r11, lr}
.Ltmp109:
	.cfi_def_cfa_offset 32
.Ltmp110:
	.cfi_offset lr, -4
.Ltmp111:
	.cfi_offset r11, -8
.Ltmp112:
	.cfi_offset r9, -12
.Ltmp113:
	.cfi_offset r8, -16
.Ltmp114:
	.cfi_offset r7, -20
.Ltmp115:
	.cfi_offset r6, -24
.Ltmp116:
	.cfi_offset r5, -28
.Ltmp117:
	.cfi_offset r4, -32
	.setfp	r11, sp, #24
	add	r11, sp, #24
.Ltmp118:
	.cfi_def_cfa r11, 8
	@DEBUG_VALUE: writeReg:this <- %R0
	@DEBUG_VALUE: writeReg:reg <- %R1
	@DEBUG_VALUE: writeReg:pBuf <- %R2
	@DEBUG_VALUE: writeReg:size <- %R3
	mov	r5, r3
.Ltmp119:
	@DEBUG_VALUE: writeReg:size <- %R5
	mov	r6, r0
.Ltmp120:
	@DEBUG_VALUE: writeReg:this <- %R6
	.loc	2 113 3 prologue_end    @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:113:3
	add	r0, r5, #8
	mov	r4, r1
.Ltmp121:
	@DEBUG_VALUE: writeReg:reg <- %R4
	bfc	r0, #0, #3
	sub	r7, sp, r0
.Ltmp122:
	@DEBUG_VALUE: writeReg:buf <-  [complex expression]
	mov	sp, r7
	.loc	2 114 10                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:114:10
	mov	r0, r7
	.loc	2 115 3                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:115:3
	mov	r1, r2
.Ltmp123:
	@DEBUG_VALUE: writeReg:pBuf <- %R1
	.loc	2 114 10                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:114:10
	strb	r4, [r0], #1
	.loc	2 115 3                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:115:3
	mov	r2, r5
	bl	memcpy
.Ltmp124:
	.loc	2 113 14                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:113:14
	add	r5, r5, #1
.Ltmp125:
	.loc	2 116 12                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:116:12
	ldr	r0, [r6, #24]
	.loc	2 116 6 is_stmt 0       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:116:6
	mov	r1, r7
	mov	r2, r5
	bl	write
.Ltmp126:
	.loc	2 116 6                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:116:6
	cmp	r0, r5
	beq	.LBB10_2
.Ltmp127:
@ BB#1:
	@DEBUG_VALUE: writeReg:buf <-  [complex expression]
	@DEBUG_VALUE: writeReg:reg <- %R4
	@DEBUG_VALUE: writeReg:this <- %R6
	.loc	2 117 13 is_stmt 1      @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:117:13
	movw	r0, :lower16:stderr
	.loc	2 117 5 is_stmt 0       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:117:5
	movw	r1, :lower16:.L.str.1
	.loc	2 117 13                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:117:13
	movt	r0, :upper16:stderr
	.loc	2 117 5                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:117:5
	movt	r1, :upper16:.L.str.1
	.loc	2 117 13                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:117:13
	ldr	r0, [r0]
	.loc	2 117 5                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:117:5
	mov	r2, r4
	bl	fprintf
.Ltmp128:
.LBB10_2:
	@DEBUG_VALUE: writeReg:buf <-  [complex expression]
	@DEBUG_VALUE: writeReg:reg <- %R4
	@DEBUG_VALUE: writeReg:this <- %R6
	.loc	2 118 1 is_stmt 1       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:118:1
	sub	sp, r11, #24
	pop	{r4, r5, r6, r7, r8, r9, r11, pc}
.Ltmp129:
.Lfunc_end10:
	.size	_ZN31DFRobot_VisualRotaryEncoder_I2C8writeRegEhPKvj, .Lfunc_end10-_ZN31DFRobot_VisualRotaryEncoder_I2C8writeRegEhPKvj
	.cfi_endproc
	.fnend

	.globl	_ZN31DFRobot_VisualRotaryEncoder_I2C7readRegEhPvj
	.p2align	2
	.type	_ZN31DFRobot_VisualRotaryEncoder_I2C7readRegEhPvj,%function
_ZN31DFRobot_VisualRotaryEncoder_I2C7readRegEhPvj: @ @_ZN31DFRobot_VisualRotaryEncoder_I2C7readRegEhPvj
.Lfunc_begin11:
	.loc	2 121 0                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:121:0
	.fnstart
	.cfi_startproc
@ BB#0:
	.save	{r4, r5, r6, r10, r11, lr}
	push	{r4, r5, r6, r10, r11, lr}
.Ltmp130:
	.cfi_def_cfa_offset 24
.Ltmp131:
	.cfi_offset lr, -4
.Ltmp132:
	.cfi_offset r11, -8
.Ltmp133:
	.cfi_offset r10, -12
.Ltmp134:
	.cfi_offset r6, -16
.Ltmp135:
	.cfi_offset r5, -20
.Ltmp136:
	.cfi_offset r4, -24
	.setfp	r11, sp, #16
	add	r11, sp, #16
.Ltmp137:
	.cfi_def_cfa r11, 8
	.pad	#40
	sub	sp, sp, #40
	@DEBUG_VALUE: readReg:this <- %R0
	@DEBUG_VALUE: readReg:reg <- %R1
	@DEBUG_VALUE: readReg:pBuf <- %R2
	@DEBUG_VALUE: readReg:size <- %R3
.Ltmp138:
	@DEBUG_VALUE: readReg:outbuf <- %R1
	mov	r6, r1
.Ltmp139:
	@DEBUG_VALUE: readReg:outbuf <- %R6
	@DEBUG_VALUE: readReg:reg <- %R6
	mov	r5, r3
.Ltmp140:
	@DEBUG_VALUE: readReg:size <- %R5
	.loc	2 125 14 prologue_end   @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:125:14
	strb	r6, [r11, #-17]
	mov	r3, #0
	.loc	2 130 22                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:130:22
	ldrh	r1, [r0, #20]
	sub	r4, r11, #17
.Ltmp141:
	@DEBUG_VALUE: readReg:outbuf <- [%R4+0]
	.loc	2 130 20 is_stmt 0      @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:130:20
	strh	r1, [sp, #4]
	.loc	2 131 21 is_stmt 1      @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:131:21
	strh	r3, [sp, #6]
	.loc	2 132 19                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:132:19
	mov	r3, #1
	strh	r3, [sp, #8]
	.loc	2 133 19                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:133:19
	str	r4, [sp, #12]
	.loc	2 136 20                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:136:20
	strh	r1, [sp, #16]
	add	r1, sp, #4
.Ltmp142:
	@DEBUG_VALUE: readReg:messages <- [%R1+0]
	.loc	2 142 16                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:142:16
	str	r1, [sp, #28]
	mov	r1, #2
.Ltmp143:
	.loc	2 137 21                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:137:21
	strh	r3, [sp, #18]
	.loc	2 138 19                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:138:19
	strh	r5, [sp, #20]
	.loc	2 139 19                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:139:19
	str	r2, [sp, #24]
	add	r2, sp, #28
.Ltmp144:
	@DEBUG_VALUE: readReg:packets <- [%R2+0]
	.loc	2 143 17                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:143:17
	str	r1, [sp, #32]
.Ltmp145:
	.loc	2 144 6                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:144:6
	movw	r1, #1799
	.loc	2 144 12 is_stmt 0      @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:144:12
	ldr	r0, [r0, #24]
.Ltmp146:
	.loc	2 144 6                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:144:6
	bl	ioctl
.Ltmp147:
	.loc	2 144 6                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:144:6
	cmp	r0, #0
	blt	.LBB11_2
.Ltmp148:
.LBB11_1:
	@DEBUG_VALUE: readReg:outbuf <- [%R4+0]
	@DEBUG_VALUE: readReg:reg <- %R6
	.loc	2 149 1 is_stmt 1       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:149:1
	mov	r0, r5
	sub	sp, r11, #16
	pop	{r4, r5, r6, r10, r11, pc}
.Ltmp149:
.LBB11_2:
	@DEBUG_VALUE: readReg:outbuf <- [%R4+0]
	@DEBUG_VALUE: readReg:size <- %R5
	@DEBUG_VALUE: readReg:reg <- %R6
	.loc	2 145 15                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:145:15
	movw	r0, :lower16:stderr
	.loc	2 145 7 is_stmt 0       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:145:7
	movw	r1, :lower16:.L.str.2
	.loc	2 145 15                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:145:15
	movt	r0, :upper16:stderr
	.loc	2 145 7                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:145:7
	movt	r1, :upper16:.L.str.2
	.loc	2 145 15                @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:145:15
	ldr	r0, [r0]
	.loc	2 145 7                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.cpp:145:7
	mov	r2, r6
	bl	fprintf
	mvn	r5, #0
.Ltmp150:
	b	.LBB11_1
.Ltmp151:
.Lfunc_end11:
	.size	_ZN31DFRobot_VisualRotaryEncoder_I2C7readRegEhPvj, .Lfunc_end11-_ZN31DFRobot_VisualRotaryEncoder_I2C7readRegEhPvj
	.cfi_endproc
	.fnend

	.section	.text._ZN31DFRobot_VisualRotaryEncoder_I2CD2Ev,"axG",%progbits,_ZN31DFRobot_VisualRotaryEncoder_I2CD2Ev,comdat
	.weak	_ZN31DFRobot_VisualRotaryEncoder_I2CD2Ev
	.p2align	2
	.type	_ZN31DFRobot_VisualRotaryEncoder_I2CD2Ev,%function
_ZN31DFRobot_VisualRotaryEncoder_I2CD2Ev: @ @_ZN31DFRobot_VisualRotaryEncoder_I2CD2Ev
.Lfunc_begin12:
	.loc	3 159 0 is_stmt 1       @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.h:159:0
	.fnstart
	.cfi_startproc
@ BB#0:
	@DEBUG_VALUE: ~DFRobot_VisualRotaryEncoder_I2C:this <- %R0
	.loc	3 159 7 prologue_end    @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.h:159:7
	bx	lr
.Ltmp152:
.Lfunc_end12:
	.size	_ZN31DFRobot_VisualRotaryEncoder_I2CD2Ev, .Lfunc_end12-_ZN31DFRobot_VisualRotaryEncoder_I2CD2Ev
	.cfi_endproc
	.fnend

	.section	.text._ZN31DFRobot_VisualRotaryEncoder_I2CD0Ev,"axG",%progbits,_ZN31DFRobot_VisualRotaryEncoder_I2CD0Ev,comdat
	.weak	_ZN31DFRobot_VisualRotaryEncoder_I2CD0Ev
	.p2align	2
	.type	_ZN31DFRobot_VisualRotaryEncoder_I2CD0Ev,%function
_ZN31DFRobot_VisualRotaryEncoder_I2CD0Ev: @ @_ZN31DFRobot_VisualRotaryEncoder_I2CD0Ev
.Lfunc_begin13:
	.loc	3 159 0                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.h:159:0
	.fnstart
	.cfi_startproc
@ BB#0:
	@DEBUG_VALUE: ~DFRobot_VisualRotaryEncoder_I2C:this <- %R0
	.loc	3 159 7 prologue_end discriminator 1 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.h:159:7
	b	_ZdlPv
.Ltmp153:
.Lfunc_end13:
	.size	_ZN31DFRobot_VisualRotaryEncoder_I2CD0Ev, .Lfunc_end13-_ZN31DFRobot_VisualRotaryEncoder_I2CD0Ev
	.cfi_endproc
	.fnend

	.section	.text._ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD1Ev,"axG",%progbits,_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD1Ev,comdat
	.weak	_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD1Ev
	.p2align	2
	.type	_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD1Ev,%function
_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD1Ev: @ @_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD1Ev
.Lfunc_begin14:
	.loc	3 159 0                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.h:159:0
	.fnstart
	.cfi_startproc
@ BB#0:
	@DEBUG_VALUE: this <- %R0
	.loc	3 159 7 prologue_end    @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.h:159:7
	bx	lr
.Ltmp154:
.Lfunc_end14:
	.size	_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD1Ev, .Lfunc_end14-_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD1Ev
	.cfi_endproc
	.fnend

	.section	.text._ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD0Ev,"axG",%progbits,_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD0Ev,comdat
	.weak	_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD0Ev
	.p2align	2
	.type	_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD0Ev,%function
_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD0Ev: @ @_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD0Ev
.Lfunc_begin15:
	.loc	3 159 0                 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.h:159:0
	.fnstart
	.cfi_startproc
@ BB#0:
	@DEBUG_VALUE: this <- %R0
	.loc	3 159 7 prologue_end    @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.h:159:7
	sub	r0, r0, #12
.Ltmp155:
	.loc	3 159 7 is_stmt 0 discriminator 1 @ /root/Bela/projects/rnbo.example.bela-main/DFRobot_VisualRotaryEncoder.h:159:7
	b	_ZdlPv
.Ltmp156:
.Lfunc_end15:
	.size	_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD0Ev, .Lfunc_end15-_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD0Ev
	.cfi_endproc
	.file	8 "<stdin>"
	.fnend

	.type	_ZTV27DFRobot_VisualRotaryEncoder,%object @ @_ZTV27DFRobot_VisualRotaryEncoder
	.section	.rodata,"a",%progbits
	.globl	_ZTV27DFRobot_VisualRotaryEncoder
	.p2align	2
_ZTV27DFRobot_VisualRotaryEncoder:
	.long	0
	.long	_ZTI27DFRobot_VisualRotaryEncoder
	.long	_ZN27DFRobot_VisualRotaryEncoder5beginEv
	.long	__cxa_pure_virtual
	.long	__cxa_pure_virtual
	.size	_ZTV27DFRobot_VisualRotaryEncoder, 20

	.type	_ZTV31DFRobot_VisualRotaryEncoder_I2C,%object @ @_ZTV31DFRobot_VisualRotaryEncoder_I2C
	.globl	_ZTV31DFRobot_VisualRotaryEncoder_I2C
	.p2align	2
_ZTV31DFRobot_VisualRotaryEncoder_I2C:
	.long	0
	.long	_ZTI31DFRobot_VisualRotaryEncoder_I2C
	.long	_ZN31DFRobot_VisualRotaryEncoder_I2C5beginEv
	.long	_ZN31DFRobot_VisualRotaryEncoder_I2C8writeRegEhPKvj
	.long	_ZN31DFRobot_VisualRotaryEncoder_I2C7readRegEhPvj
	.long	_ZN31DFRobot_VisualRotaryEncoder_I2CD2Ev
	.long	_ZN31DFRobot_VisualRotaryEncoder_I2CD0Ev
	.long	4294967284
	.long	_ZTI31DFRobot_VisualRotaryEncoder_I2C
	.long	_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD1Ev
	.long	_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD0Ev
	.size	_ZTV31DFRobot_VisualRotaryEncoder_I2C, 44

	.type	.L.str,%object          @ @.str
	.section	.rodata.str1.1,"aMS",%progbits,1
.L.str:
	.asciz	"Error initialising sensor on bus %d, addr %#x\n"
	.size	.L.str, 47

	.type	.L.str.1,%object        @ @.str.1
.L.str.1:
	.asciz	"Failed to write register %d on I2c sensor\n"
	.size	.L.str.1, 43

	.type	.L.str.2,%object        @ @.str.2
.L.str.2:
	.asciz	"Failed to read register %d on I2c sensor\n"
	.size	.L.str.2, 42

	.type	_ZTS27DFRobot_VisualRotaryEncoder,%object @ @_ZTS27DFRobot_VisualRotaryEncoder
	.section	.rodata,"a",%progbits
	.globl	_ZTS27DFRobot_VisualRotaryEncoder
	.p2align	4
_ZTS27DFRobot_VisualRotaryEncoder:
	.asciz	"27DFRobot_VisualRotaryEncoder"
	.size	_ZTS27DFRobot_VisualRotaryEncoder, 30

	.type	_ZTI27DFRobot_VisualRotaryEncoder,%object @ @_ZTI27DFRobot_VisualRotaryEncoder
	.globl	_ZTI27DFRobot_VisualRotaryEncoder
	.p2align	2
_ZTI27DFRobot_VisualRotaryEncoder:
	.long	_ZTVN10__cxxabiv117__class_type_infoE+8
	.long	_ZTS27DFRobot_VisualRotaryEncoder
	.size	_ZTI27DFRobot_VisualRotaryEncoder, 8

	.type	_ZTS31DFRobot_VisualRotaryEncoder_I2C,%object @ @_ZTS31DFRobot_VisualRotaryEncoder_I2C
	.globl	_ZTS31DFRobot_VisualRotaryEncoder_I2C
	.p2align	4
_ZTS31DFRobot_VisualRotaryEncoder_I2C:
	.asciz	"31DFRobot_VisualRotaryEncoder_I2C"
	.size	_ZTS31DFRobot_VisualRotaryEncoder_I2C, 34

	.type	_ZTS3I2c,%object        @ @_ZTS3I2c
	.section	.rodata._ZTS3I2c,"aG",%progbits,_ZTS3I2c,comdat
	.weak	_ZTS3I2c
_ZTS3I2c:
	.asciz	"3I2c"
	.size	_ZTS3I2c, 5

	.type	_ZTI3I2c,%object        @ @_ZTI3I2c
	.section	.rodata._ZTI3I2c,"aG",%progbits,_ZTI3I2c,comdat
	.weak	_ZTI3I2c
	.p2align	2
_ZTI3I2c:
	.long	_ZTVN10__cxxabiv117__class_type_infoE+8
	.long	_ZTS3I2c
	.size	_ZTI3I2c, 8

	.type	_ZTI31DFRobot_VisualRotaryEncoder_I2C,%object @ @_ZTI31DFRobot_VisualRotaryEncoder_I2C
	.section	.rodata,"a",%progbits
	.globl	_ZTI31DFRobot_VisualRotaryEncoder_I2C
	.p2align	4
_ZTI31DFRobot_VisualRotaryEncoder_I2C:
	.long	_ZTVN10__cxxabiv121__vmi_class_type_infoE+8
	.long	_ZTS31DFRobot_VisualRotaryEncoder_I2C
	.long	0                       @ 0x0
	.long	2                       @ 0x2
	.long	_ZTI27DFRobot_VisualRotaryEncoder
	.long	2                       @ 0x2
	.long	_ZTI3I2c
	.long	3074                    @ 0xc02
	.size	_ZTI31DFRobot_VisualRotaryEncoder_I2C, 32

	.type	.L.str.3,%object        @ @.str.3
	.section	.rodata.str1.1,"aMS",%progbits,1
.L.str.3:
	.asciz	"/dev/i2c-%d"
	.size	.L.str.3, 12

	.type	.L.str.4,%object        @ @.str.4
.L.str.4:
	.asciz	"Failed to open %s I2C Bus\n"
	.size	.L.str.4, 27

	.type	.L.str.5,%object        @ @.str.5
.L.str.5:
	.asciz	"I2C_SLAVE address %#x failed..."
	.size	.L.str.5, 32

	.file	9 "/usr/include/asm-generic" "int-ll64.h"
	.file	10 "/usr/include/linux" "i2c.h"
	.file	11 "/usr/include/linux" "i2c-dev.h"
	.section	.debug_str,"MS",%progbits,1
.Linfo_string0:
	.asciz	"clang version 3.9.1-9 (tags/RELEASE_391/rc2)" @ string offset=0
.Linfo_string1:
	.asciz	"/root/Bela/projects/rnbo.example.bela-main/build/DFRobot_VisualRotaryEncoder.cpp" @ string offset=45
.Linfo_string2:
	.asciz	"/root/Bela"            @ string offset=126
.Linfo_string3:
	.asciz	"unsigned char"         @ string offset=137
.Linfo_string4:
	.asciz	"uint8_t"               @ string offset=151
.Linfo_string5:
	.asciz	"unsigned short"        @ string offset=159
.Linfo_string6:
	.asciz	"uint16_t"              @ string offset=174
.Linfo_string7:
	.asciz	"_vptr$DFRobot_VisualRotaryEncoder" @ string offset=183
.Linfo_string8:
	.asciz	"int"                   @ string offset=217
.Linfo_string9:
	.asciz	"__vtbl_ptr_type"       @ string offset=221
.Linfo_string10:
	.asciz	"basicInfo"             @ string offset=237
.Linfo_string11:
	.asciz	"PID"                   @ string offset=247
.Linfo_string12:
	.asciz	"VID"                   @ string offset=251
.Linfo_string13:
	.asciz	"version"               @ string offset=255
.Linfo_string14:
	.asciz	"i2cAddr"               @ string offset=263
.Linfo_string15:
	.asciz	"sBasicInfo_t"          @ string offset=271
.Linfo_string16:
	.asciz	"DFRobot_VisualRotaryEncoder" @ string offset=284
.Linfo_string17:
	.asciz	"_ZN27DFRobot_VisualRotaryEncoder5beginEv" @ string offset=312
.Linfo_string18:
	.asciz	"begin"                 @ string offset=353
.Linfo_string19:
	.asciz	"_ZN27DFRobot_VisualRotaryEncoder16refreshBasicInfoEv" @ string offset=359
.Linfo_string20:
	.asciz	"refreshBasicInfo"      @ string offset=412
.Linfo_string21:
	.asciz	"_ZN27DFRobot_VisualRotaryEncoder15getEncoderValueEv" @ string offset=429
.Linfo_string22:
	.asciz	"getEncoderValue"       @ string offset=481
.Linfo_string23:
	.asciz	"_ZN27DFRobot_VisualRotaryEncoder15setEncoderValueEt" @ string offset=497
.Linfo_string24:
	.asciz	"setEncoderValue"       @ string offset=549
.Linfo_string25:
	.asciz	"_ZN27DFRobot_VisualRotaryEncoder18getGainCoefficientEv" @ string offset=565
.Linfo_string26:
	.asciz	"getGainCoefficient"    @ string offset=620
.Linfo_string27:
	.asciz	"_ZN27DFRobot_VisualRotaryEncoder18setGainCoefficientEh" @ string offset=639
.Linfo_string28:
	.asciz	"setGainCoefficient"    @ string offset=694
.Linfo_string29:
	.asciz	"_ZN27DFRobot_VisualRotaryEncoder16detectButtonDownEv" @ string offset=713
.Linfo_string30:
	.asciz	"detectButtonDown"      @ string offset=766
.Linfo_string31:
	.asciz	"bool"                  @ string offset=783
.Linfo_string32:
	.asciz	"_ZN27DFRobot_VisualRotaryEncoder8writeRegEhPKvj" @ string offset=788
.Linfo_string33:
	.asciz	"writeReg"              @ string offset=836
.Linfo_string34:
	.asciz	"unsigned int"          @ string offset=845
.Linfo_string35:
	.asciz	"size_t"                @ string offset=858
.Linfo_string36:
	.asciz	"_ZN27DFRobot_VisualRotaryEncoder7readRegEhPvj" @ string offset=865
.Linfo_string37:
	.asciz	"readReg"               @ string offset=911
.Linfo_string38:
	.asciz	"_vptr$I2c"             @ string offset=919
.Linfo_string39:
	.asciz	"i2C_bus"               @ string offset=929
.Linfo_string40:
	.asciz	"i2C_address"           @ string offset=937
.Linfo_string41:
	.asciz	"i2C_file"              @ string offset=949
.Linfo_string42:
	.asciz	"_ZN3I2c9readBytesEPvj" @ string offset=958
.Linfo_string43:
	.asciz	"readBytes"             @ string offset=980
.Linfo_string44:
	.asciz	"__ssize_t"             @ string offset=990
.Linfo_string45:
	.asciz	"ssize_t"               @ string offset=1000
.Linfo_string46:
	.asciz	"_ZN3I2c10writeBytesEPKvj" @ string offset=1008
.Linfo_string47:
	.asciz	"writeBytes"            @ string offset=1033
.Linfo_string48:
	.asciz	"I2c"                   @ string offset=1044
.Linfo_string49:
	.asciz	"_ZN3I2c10initI2C_RWEiii" @ string offset=1048
.Linfo_string50:
	.asciz	"initI2C_RW"            @ string offset=1072
.Linfo_string51:
	.asciz	"_ZN3I2c8closeI2CEv"    @ string offset=1083
.Linfo_string52:
	.asciz	"closeI2C"              @ string offset=1102
.Linfo_string53:
	.asciz	"~I2c"                  @ string offset=1111
.Linfo_string54:
	.asciz	"this"                  @ string offset=1116
.Linfo_string55:
	.asciz	"bus"                   @ string offset=1121
.Linfo_string56:
	.asciz	"address"               @ string offset=1125
.Linfo_string57:
	.asciz	"fileHnd"               @ string offset=1133
.Linfo_string58:
	.asciz	"namebuf"               @ string offset=1141
.Linfo_string59:
	.asciz	"char"                  @ string offset=1149
.Linfo_string60:
	.asciz	"sizetype"              @ string offset=1154
.Linfo_string61:
	.asciz	"DFRobot_VisualRotaryEncoder_I2C" @ string offset=1163
.Linfo_string62:
	.asciz	"_ZN31DFRobot_VisualRotaryEncoder_I2C5beginEv" @ string offset=1195
.Linfo_string63:
	.asciz	"_ZN31DFRobot_VisualRotaryEncoder_I2C8writeRegEhPKvj" @ string offset=1240
.Linfo_string64:
	.asciz	"_ZN31DFRobot_VisualRotaryEncoder_I2C7readRegEhPvj" @ string offset=1292
.Linfo_string65:
	.asciz	"idBuf"                 @ string offset=1342
.Linfo_string66:
	.asciz	"~DFRobot_VisualRotaryEncoder_I2C" @ string offset=1348
.Linfo_string67:
	.asciz	"_ZN31DFRobot_VisualRotaryEncoder_I2CD0Ev" @ string offset=1381
.Linfo_string68:
	.asciz	"_ZN27DFRobot_VisualRotaryEncoderC2Ev" @ string offset=1422
.Linfo_string69:
	.asciz	"_ZN31DFRobot_VisualRotaryEncoder_I2CC2Ehi" @ string offset=1459
.Linfo_string70:
	.asciz	"_ZN31DFRobot_VisualRotaryEncoder_I2CD2Ev" @ string offset=1501
.Linfo_string71:
	.asciz	"_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD1Ev" @ string offset=1542
.Linfo_string72:
	.asciz	"_ZThn12_N31DFRobot_VisualRotaryEncoder_I2CD0Ev" @ string offset=1589
.Linfo_string73:
	.asciz	"tempBuf"               @ string offset=1636
.Linfo_string74:
	.asciz	"CountValue"            @ string offset=1644
.Linfo_string75:
	.asciz	"value"                 @ string offset=1655
.Linfo_string76:
	.asciz	"RotateGain"            @ string offset=1661
.Linfo_string77:
	.asciz	"gainValue"             @ string offset=1672
.Linfo_string78:
	.asciz	"clearStatus"           @ string offset=1682
.Linfo_string79:
	.asciz	"ret"                   @ string offset=1694
.Linfo_string80:
	.asciz	"buttonStatus"          @ string offset=1698
.Linfo_string81:
	.asciz	"reg"                   @ string offset=1711
.Linfo_string82:
	.asciz	"pBuf"                  @ string offset=1715
.Linfo_string83:
	.asciz	"size"                  @ string offset=1720
.Linfo_string84:
	.asciz	"buf"                   @ string offset=1725
.Linfo_string85:
	.asciz	"messages"              @ string offset=1729
.Linfo_string86:
	.asciz	"addr"                  @ string offset=1738
.Linfo_string87:
	.asciz	"__u16"                 @ string offset=1743
.Linfo_string88:
	.asciz	"flags"                 @ string offset=1749
.Linfo_string89:
	.asciz	"len"                   @ string offset=1755
.Linfo_string90:
	.asciz	"__u8"                  @ string offset=1759
.Linfo_string91:
	.asciz	"i2c_msg"               @ string offset=1764
.Linfo_string92:
	.asciz	"outbuf"                @ string offset=1772
.Linfo_string93:
	.asciz	"i2c_char_t"            @ string offset=1779
.Linfo_string94:
	.asciz	"packets"               @ string offset=1790
.Linfo_string95:
	.asciz	"msgs"                  @ string offset=1798
.Linfo_string96:
	.asciz	"nmsgs"                 @ string offset=1803
.Linfo_string97:
	.asciz	"__u32"                 @ string offset=1809
.Linfo_string98:
	.asciz	"i2c_rdwr_ioctl_data"   @ string offset=1815
	.section	.debug_loc,"",%progbits
.Ldebug_loc0:
	.long	.Lfunc_begin1
	.long	.Ltmp7
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	0
	.long	0
.Ldebug_loc1:
	.long	.Lfunc_begin2
	.long	.Ltmp18
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	.Ltmp18
	.long	.Ltmp22
	.short	1                       @ Loc expr size
	.byte	84                      @ DW_OP_reg4
	.long	0
	.long	0
.Ldebug_loc2:
	.long	.Lfunc_begin3
	.long	.Ltmp28
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	0
	.long	0
.Ldebug_loc3:
	.long	.Lfunc_begin4
	.long	.Ltmp37
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	0
	.long	0
.Ldebug_loc4:
	.long	.Lfunc_begin4
	.long	.Ltmp36
	.short	1                       @ Loc expr size
	.byte	81                      @ DW_OP_reg1
	.long	0
	.long	0
.Ldebug_loc5:
	.long	.Lfunc_begin5
	.long	.Ltmp47
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	0
	.long	0
.Ldebug_loc6:
	.long	.Ltmp45
	.long	.Ltmp46
	.short	3                       @ Loc expr size
	.byte	16                      @ DW_OP_constu
	.byte	0                       @ 0
	.byte	159                     @ DW_OP_stack_value
	.long	.Ltmp46
	.long	.Ltmp47
	.short	2                       @ Loc expr size
	.byte	114                     @ DW_OP_breg2
	.byte	0                       @ 0
	.long	0
	.long	0
.Ldebug_loc7:
	.long	.Lfunc_begin6
	.long	.Ltmp57
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	0
	.long	0
.Ldebug_loc8:
	.long	.Lfunc_begin6
	.long	.Ltmp54
	.short	1                       @ Loc expr size
	.byte	81                      @ DW_OP_reg1
	.long	.Ltmp56
	.long	.Ltmp57
	.short	2                       @ Loc expr size
	.byte	114                     @ DW_OP_breg2
	.byte	0                       @ 0
	.long	0
	.long	0
.Ldebug_loc9:
	.long	.Lfunc_begin7
	.long	.Ltmp66
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	.Ltmp66
	.long	.Ltmp74
	.short	1                       @ Loc expr size
	.byte	84                      @ DW_OP_reg4
	.long	0
	.long	0
.Ldebug_loc10:
	.long	.Ltmp65
	.long	.Ltmp71
	.short	3                       @ Loc expr size
	.byte	16                      @ DW_OP_constu
	.byte	0                       @ 0
	.byte	159                     @ DW_OP_stack_value
	.long	.Ltmp71
	.long	.Ltmp72
	.short	2                       @ Loc expr size
	.byte	114                     @ DW_OP_breg2
	.byte	0                       @ 0
	.long	0
	.long	0
.Ldebug_loc11:
	.long	.Ltmp66
	.long	.Ltmp72
	.short	3                       @ Loc expr size
	.byte	16                      @ DW_OP_constu
	.byte	0                       @ 0
	.byte	159                     @ DW_OP_stack_value
	.long	.Ltmp72
	.long	.Lfunc_end7
	.short	3                       @ Loc expr size
	.byte	16                      @ DW_OP_constu
	.byte	1                       @ 1
	.byte	159                     @ DW_OP_stack_value
	.long	0
	.long	0
.Ldebug_loc12:
	.long	.Ltmp67
	.long	.Ltmp68
	.short	2                       @ Loc expr size
	.byte	114                     @ DW_OP_breg2
	.byte	0                       @ 0
	.long	0
	.long	0
.Ldebug_loc13:
	.long	.Lfunc_begin8
	.long	.Ltmp83
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	.Ltmp83
	.long	.Lfunc_end8
	.short	1                       @ Loc expr size
	.byte	84                      @ DW_OP_reg4
	.long	0
	.long	0
.Ldebug_loc14:
	.long	.Lfunc_begin8
	.long	.Ltmp85
	.short	1                       @ Loc expr size
	.byte	81                      @ DW_OP_reg1
	.long	.Ltmp85
	.long	.Lfunc_end8
	.short	1                       @ Loc expr size
	.byte	86                      @ DW_OP_reg6
	.long	0
	.long	0
.Ldebug_loc15:
	.long	.Lfunc_begin8
	.long	.Ltmp84
	.short	1                       @ Loc expr size
	.byte	82                      @ DW_OP_reg2
	.long	.Ltmp84
	.long	.Lfunc_end8
	.short	1                       @ Loc expr size
	.byte	85                      @ DW_OP_reg5
	.long	0
	.long	0
.Ldebug_loc16:
	.long	.Ltmp86
	.long	.Lfunc_end8
	.short	1                       @ Loc expr size
	.byte	86                      @ DW_OP_reg6
	.long	0
	.long	0
.Ldebug_loc17:
	.long	.Ltmp86
	.long	.Lfunc_end8
	.short	1                       @ Loc expr size
	.byte	85                      @ DW_OP_reg5
	.long	0
	.long	0
.Ldebug_loc18:
	.long	.Lfunc_begin9
	.long	.Ltmp103
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	0
	.long	0
.Ldebug_loc19:
	.long	.Ltmp102
	.long	.Ltmp103
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	0
	.long	0
.Ldebug_loc20:
	.long	.Lfunc_begin10
	.long	.Ltmp120
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	.Ltmp120
	.long	.Ltmp129
	.short	1                       @ Loc expr size
	.byte	86                      @ DW_OP_reg6
	.long	0
	.long	0
.Ldebug_loc21:
	.long	.Lfunc_begin10
	.long	.Ltmp121
	.short	1                       @ Loc expr size
	.byte	81                      @ DW_OP_reg1
	.long	.Ltmp121
	.long	.Ltmp129
	.short	1                       @ Loc expr size
	.byte	84                      @ DW_OP_reg4
	.long	0
	.long	0
.Ldebug_loc22:
	.long	.Lfunc_begin10
	.long	.Ltmp123
	.short	1                       @ Loc expr size
	.byte	82                      @ DW_OP_reg2
	.long	.Ltmp123
	.long	.Ltmp124
	.short	1                       @ Loc expr size
	.byte	81                      @ DW_OP_reg1
	.long	0
	.long	0
.Ldebug_loc23:
	.long	.Lfunc_begin10
	.long	.Ltmp119
	.short	1                       @ Loc expr size
	.byte	83                      @ DW_OP_reg3
	.long	.Ltmp119
	.long	.Ltmp125
	.short	1                       @ Loc expr size
	.byte	85                      @ DW_OP_reg5
	.long	0
	.long	0
.Ldebug_loc24:
	.long	.Ltmp122
	.long	.Ltmp129
	.short	2                       @ Loc expr size
	.byte	119                     @ DW_OP_breg7
	.byte	0                       @ 0
	.long	0
	.long	0
.Ldebug_loc25:
	.long	.Lfunc_begin11
	.long	.Ltmp146
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	0
	.long	0
.Ldebug_loc26:
	.long	.Lfunc_begin11
	.long	.Ltmp139
	.short	1                       @ Loc expr size
	.byte	81                      @ DW_OP_reg1
	.long	.Ltmp139
	.long	.Lfunc_end11
	.short	1                       @ Loc expr size
	.byte	86                      @ DW_OP_reg6
	.long	0
	.long	0
.Ldebug_loc27:
	.long	.Lfunc_begin11
	.long	.Ltmp144
	.short	1                       @ Loc expr size
	.byte	82                      @ DW_OP_reg2
	.long	0
	.long	0
.Ldebug_loc28:
	.long	.Lfunc_begin11
	.long	.Ltmp140
	.short	1                       @ Loc expr size
	.byte	83                      @ DW_OP_reg3
	.long	.Ltmp140
	.long	.Ltmp148
	.short	1                       @ Loc expr size
	.byte	85                      @ DW_OP_reg5
	.long	.Ltmp149
	.long	.Ltmp150
	.short	1                       @ Loc expr size
	.byte	85                      @ DW_OP_reg5
	.long	0
	.long	0
.Ldebug_loc29:
	.long	.Ltmp138
	.long	.Ltmp139
	.short	1                       @ Loc expr size
	.byte	81                      @ DW_OP_reg1
	.long	.Ltmp139
	.long	.Ltmp141
	.short	1                       @ Loc expr size
	.byte	86                      @ DW_OP_reg6
	.long	.Ltmp141
	.long	.Lfunc_end11
	.short	2                       @ Loc expr size
	.byte	116                     @ DW_OP_breg4
	.byte	0                       @ 0
	.long	0
	.long	0
.Ldebug_loc30:
	.long	.Ltmp144
	.long	.Ltmp147
	.short	2                       @ Loc expr size
	.byte	114                     @ DW_OP_breg2
	.byte	0                       @ 0
	.long	0
	.long	0
.Ldebug_loc31:
	.long	.Lfunc_begin15
	.long	.Ltmp155
	.short	1                       @ Loc expr size
	.byte	80                      @ DW_OP_reg0
	.long	0
	.long	0
	.section	.debug_abbrev,"",%progbits
.Lsection_abbrev:
	.byte	1                       @ Abbreviation Code
	.byte	17                      @ DW_TAG_compile_unit
	.byte	1                       @ DW_CHILDREN_yes
	.byte	37                      @ DW_AT_producer
	.byte	14                      @ DW_FORM_strp
	.byte	19                      @ DW_AT_language
	.byte	5                       @ DW_FORM_data2
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	16                      @ DW_AT_stmt_list
	.byte	23                      @ DW_FORM_sec_offset
	.byte	27                      @ DW_AT_comp_dir
	.byte	14                      @ DW_FORM_strp
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	85                      @ DW_AT_ranges
	.byte	23                      @ DW_FORM_sec_offset
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	2                       @ Abbreviation Code
	.byte	22                      @ DW_TAG_typedef
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	3                       @ Abbreviation Code
	.byte	36                      @ DW_TAG_base_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	62                      @ DW_AT_encoding
	.byte	11                      @ DW_FORM_data1
	.byte	11                      @ DW_AT_byte_size
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	4                       @ Abbreviation Code
	.byte	15                      @ DW_TAG_pointer_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	5                       @ Abbreviation Code
	.byte	2                       @ DW_TAG_class_type
	.byte	1                       @ DW_CHILDREN_yes
	.byte	29                      @ DW_AT_containing_type
	.byte	19                      @ DW_FORM_ref4
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	11                      @ DW_AT_byte_size
	.byte	11                      @ DW_FORM_data1
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	6                       @ Abbreviation Code
	.byte	13                      @ DW_TAG_member
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	56                      @ DW_AT_data_member_location
	.byte	11                      @ DW_FORM_data1
	.byte	52                      @ DW_AT_artificial
	.byte	25                      @ DW_FORM_flag_present
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	7                       @ Abbreviation Code
	.byte	13                      @ DW_TAG_member
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	56                      @ DW_AT_data_member_location
	.byte	11                      @ DW_FORM_data1
	.byte	50                      @ DW_AT_accessibility
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	8                       @ Abbreviation Code
	.byte	19                      @ DW_TAG_structure_type
	.byte	1                       @ DW_CHILDREN_yes
	.byte	11                      @ DW_AT_byte_size
	.byte	11                      @ DW_FORM_data1
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	9                       @ Abbreviation Code
	.byte	13                      @ DW_TAG_member
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	56                      @ DW_AT_data_member_location
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	10                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	60                      @ DW_AT_declaration
	.byte	25                      @ DW_FORM_flag_present
	.byte	63                      @ DW_AT_external
	.byte	25                      @ DW_FORM_flag_present
	.byte	50                      @ DW_AT_accessibility
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	11                      @ Abbreviation Code
	.byte	5                       @ DW_TAG_formal_parameter
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	52                      @ DW_AT_artificial
	.byte	25                      @ DW_FORM_flag_present
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	12                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	110                     @ DW_AT_linkage_name
	.byte	14                      @ DW_FORM_strp
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	76                      @ DW_AT_virtuality
	.byte	11                      @ DW_FORM_data1
	.byte	77                      @ DW_AT_vtable_elem_location
	.byte	24                      @ DW_FORM_exprloc
	.byte	60                      @ DW_AT_declaration
	.byte	25                      @ DW_FORM_flag_present
	.byte	63                      @ DW_AT_external
	.byte	25                      @ DW_FORM_flag_present
	.byte	50                      @ DW_AT_accessibility
	.byte	11                      @ DW_FORM_data1
	.byte	29                      @ DW_AT_containing_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	13                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	110                     @ DW_AT_linkage_name
	.byte	14                      @ DW_FORM_strp
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	60                      @ DW_AT_declaration
	.byte	25                      @ DW_FORM_flag_present
	.byte	63                      @ DW_AT_external
	.byte	25                      @ DW_FORM_flag_present
	.byte	50                      @ DW_AT_accessibility
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	14                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	110                     @ DW_AT_linkage_name
	.byte	14                      @ DW_FORM_strp
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	60                      @ DW_AT_declaration
	.byte	25                      @ DW_FORM_flag_present
	.byte	63                      @ DW_AT_external
	.byte	25                      @ DW_FORM_flag_present
	.byte	50                      @ DW_AT_accessibility
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	15                      @ Abbreviation Code
	.byte	5                       @ DW_TAG_formal_parameter
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	16                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	110                     @ DW_AT_linkage_name
	.byte	14                      @ DW_FORM_strp
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	76                      @ DW_AT_virtuality
	.byte	11                      @ DW_FORM_data1
	.byte	77                      @ DW_AT_vtable_elem_location
	.byte	24                      @ DW_FORM_exprloc
	.byte	60                      @ DW_AT_declaration
	.byte	25                      @ DW_FORM_flag_present
	.byte	63                      @ DW_AT_external
	.byte	25                      @ DW_FORM_flag_present
	.byte	50                      @ DW_AT_accessibility
	.byte	11                      @ DW_FORM_data1
	.byte	29                      @ DW_AT_containing_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	17                      @ Abbreviation Code
	.byte	15                      @ DW_TAG_pointer_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	18                      @ Abbreviation Code
	.byte	21                      @ DW_TAG_subroutine_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	19                      @ Abbreviation Code
	.byte	38                      @ DW_TAG_const_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	20                      @ Abbreviation Code
	.byte	15                      @ DW_TAG_pointer_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	21                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	6                       @ DW_FORM_data4
	.byte	64                      @ DW_AT_frame_base
	.byte	24                      @ DW_FORM_exprloc
	.byte	100                     @ DW_AT_object_pointer
	.byte	19                      @ DW_FORM_ref4
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	110                     @ DW_AT_linkage_name
	.byte	14                      @ DW_FORM_strp
	.byte	71                      @ DW_AT_specification
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	22                      @ Abbreviation Code
	.byte	5                       @ DW_TAG_formal_parameter
	.byte	0                       @ DW_CHILDREN_no
	.byte	2                       @ DW_AT_location
	.byte	24                      @ DW_FORM_exprloc
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	52                      @ DW_AT_artificial
	.byte	25                      @ DW_FORM_flag_present
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	23                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	6                       @ DW_FORM_data4
	.byte	64                      @ DW_AT_frame_base
	.byte	24                      @ DW_FORM_exprloc
	.byte	100                     @ DW_AT_object_pointer
	.byte	19                      @ DW_FORM_ref4
	.byte	49                      @ DW_AT_abstract_origin
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	24                      @ Abbreviation Code
	.byte	5                       @ DW_TAG_formal_parameter
	.byte	0                       @ DW_CHILDREN_no
	.byte	2                       @ DW_AT_location
	.byte	23                      @ DW_FORM_sec_offset
	.byte	49                      @ DW_AT_abstract_origin
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	25                      @ Abbreviation Code
	.byte	52                      @ DW_TAG_variable
	.byte	0                       @ DW_CHILDREN_no
	.byte	2                       @ DW_AT_location
	.byte	24                      @ DW_FORM_exprloc
	.byte	49                      @ DW_AT_abstract_origin
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	26                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	6                       @ DW_FORM_data4
	.byte	64                      @ DW_AT_frame_base
	.byte	24                      @ DW_FORM_exprloc
	.byte	100                     @ DW_AT_object_pointer
	.byte	19                      @ DW_FORM_ref4
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	71                      @ DW_AT_specification
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	27                      @ Abbreviation Code
	.byte	5                       @ DW_TAG_formal_parameter
	.byte	0                       @ DW_CHILDREN_no
	.byte	2                       @ DW_AT_location
	.byte	23                      @ DW_FORM_sec_offset
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	52                      @ DW_AT_artificial
	.byte	25                      @ DW_FORM_flag_present
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	28                      @ Abbreviation Code
	.byte	52                      @ DW_TAG_variable
	.byte	0                       @ DW_CHILDREN_no
	.byte	2                       @ DW_AT_location
	.byte	24                      @ DW_FORM_exprloc
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	29                      @ Abbreviation Code
	.byte	52                      @ DW_TAG_variable
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	30                      @ Abbreviation Code
	.byte	5                       @ DW_TAG_formal_parameter
	.byte	0                       @ DW_CHILDREN_no
	.byte	2                       @ DW_AT_location
	.byte	23                      @ DW_FORM_sec_offset
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	31                      @ Abbreviation Code
	.byte	11                      @ DW_TAG_lexical_block
	.byte	1                       @ DW_CHILDREN_yes
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	6                       @ DW_FORM_data4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	32                      @ Abbreviation Code
	.byte	52                      @ DW_TAG_variable
	.byte	0                       @ DW_CHILDREN_no
	.byte	2                       @ DW_AT_location
	.byte	23                      @ DW_FORM_sec_offset
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	33                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	76                      @ DW_AT_virtuality
	.byte	11                      @ DW_FORM_data1
	.byte	77                      @ DW_AT_vtable_elem_location
	.byte	24                      @ DW_FORM_exprloc
	.byte	60                      @ DW_AT_declaration
	.byte	25                      @ DW_FORM_flag_present
	.byte	63                      @ DW_AT_external
	.byte	25                      @ DW_FORM_flag_present
	.byte	50                      @ DW_AT_accessibility
	.byte	11                      @ DW_FORM_data1
	.byte	29                      @ DW_AT_containing_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	34                      @ Abbreviation Code
	.byte	66                      @ DW_TAG_rvalue_reference_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	35                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	71                      @ DW_AT_specification
	.byte	19                      @ DW_FORM_ref4
	.byte	32                      @ DW_AT_inline
	.byte	11                      @ DW_FORM_data1
	.byte	100                     @ DW_AT_object_pointer
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	36                      @ Abbreviation Code
	.byte	5                       @ DW_TAG_formal_parameter
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	52                      @ DW_AT_artificial
	.byte	25                      @ DW_FORM_flag_present
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	37                      @ Abbreviation Code
	.byte	5                       @ DW_TAG_formal_parameter
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	38                      @ Abbreviation Code
	.byte	1                       @ DW_TAG_array_type
	.byte	1                       @ DW_CHILDREN_yes
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	39                      @ Abbreviation Code
	.byte	33                      @ DW_TAG_subrange_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	55                      @ DW_AT_count
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	40                      @ Abbreviation Code
	.byte	36                      @ DW_TAG_base_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	11                      @ DW_AT_byte_size
	.byte	11                      @ DW_FORM_data1
	.byte	62                      @ DW_AT_encoding
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	41                      @ Abbreviation Code
	.byte	28                      @ DW_TAG_inheritance
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	56                      @ DW_AT_data_member_location
	.byte	11                      @ DW_FORM_data1
	.byte	50                      @ DW_AT_accessibility
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	42                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	76                      @ DW_AT_virtuality
	.byte	11                      @ DW_FORM_data1
	.byte	77                      @ DW_AT_vtable_elem_location
	.byte	24                      @ DW_FORM_exprloc
	.byte	60                      @ DW_AT_declaration
	.byte	25                      @ DW_FORM_flag_present
	.byte	52                      @ DW_AT_artificial
	.byte	25                      @ DW_FORM_flag_present
	.byte	63                      @ DW_AT_external
	.byte	25                      @ DW_FORM_flag_present
	.byte	50                      @ DW_AT_accessibility
	.byte	11                      @ DW_FORM_data1
	.byte	29                      @ DW_AT_containing_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	43                      @ Abbreviation Code
	.byte	29                      @ DW_TAG_inlined_subroutine
	.byte	1                       @ DW_CHILDREN_yes
	.byte	49                      @ DW_AT_abstract_origin
	.byte	19                      @ DW_FORM_ref4
	.byte	85                      @ DW_AT_ranges
	.byte	23                      @ DW_FORM_sec_offset
	.byte	88                      @ DW_AT_call_file
	.byte	11                      @ DW_FORM_data1
	.byte	89                      @ DW_AT_call_line
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	44                      @ Abbreviation Code
	.byte	5                       @ DW_TAG_formal_parameter
	.byte	0                       @ DW_CHILDREN_no
	.byte	28                      @ DW_AT_const_value
	.byte	13                      @ DW_FORM_sdata
	.byte	49                      @ DW_AT_abstract_origin
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	45                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	71                      @ DW_AT_specification
	.byte	19                      @ DW_FORM_ref4
	.byte	32                      @ DW_AT_inline
	.byte	11                      @ DW_FORM_data1
	.byte	100                     @ DW_AT_object_pointer
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	46                      @ Abbreviation Code
	.byte	29                      @ DW_TAG_inlined_subroutine
	.byte	1                       @ DW_CHILDREN_yes
	.byte	49                      @ DW_AT_abstract_origin
	.byte	19                      @ DW_FORM_ref4
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	6                       @ DW_FORM_data4
	.byte	88                      @ DW_AT_call_file
	.byte	11                      @ DW_FORM_data1
	.byte	89                      @ DW_AT_call_line
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	47                      @ Abbreviation Code
	.byte	5                       @ DW_TAG_formal_parameter
	.byte	0                       @ DW_CHILDREN_no
	.byte	2                       @ DW_AT_location
	.byte	24                      @ DW_FORM_exprloc
	.byte	49                      @ DW_AT_abstract_origin
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	48                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	6                       @ DW_FORM_data4
	.byte	64                      @ DW_AT_frame_base
	.byte	24                      @ DW_FORM_exprloc
	.byte	100                     @ DW_AT_object_pointer
	.byte	19                      @ DW_FORM_ref4
	.byte	110                     @ DW_AT_linkage_name
	.byte	14                      @ DW_FORM_strp
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	52                      @ DW_AT_artificial
	.byte	25                      @ DW_FORM_flag_present
	.byte	63                      @ DW_AT_external
	.byte	25                      @ DW_FORM_flag_present
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	49                      @ Abbreviation Code
	.byte	46                      @ DW_TAG_subprogram
	.byte	1                       @ DW_CHILDREN_yes
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	110                     @ DW_AT_linkage_name
	.byte	14                      @ DW_FORM_strp
	.byte	71                      @ DW_AT_specification
	.byte	19                      @ DW_FORM_ref4
	.byte	32                      @ DW_AT_inline
	.byte	11                      @ DW_FORM_data1
	.byte	100                     @ DW_AT_object_pointer
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	50                      @ Abbreviation Code
	.byte	29                      @ DW_TAG_inlined_subroutine
	.byte	0                       @ DW_CHILDREN_no
	.byte	49                      @ DW_AT_abstract_origin
	.byte	19                      @ DW_FORM_ref4
	.byte	17                      @ DW_AT_low_pc
	.byte	1                       @ DW_FORM_addr
	.byte	18                      @ DW_AT_high_pc
	.byte	6                       @ DW_FORM_data4
	.byte	88                      @ DW_AT_call_file
	.byte	11                      @ DW_FORM_data1
	.byte	89                      @ DW_AT_call_line
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	51                      @ Abbreviation Code
	.byte	33                      @ DW_TAG_subrange_type
	.byte	0                       @ DW_CHILDREN_no
	.byte	73                      @ DW_AT_type
	.byte	19                      @ DW_FORM_ref4
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	52                      @ Abbreviation Code
	.byte	19                      @ DW_TAG_structure_type
	.byte	1                       @ DW_CHILDREN_yes
	.byte	3                       @ DW_AT_name
	.byte	14                      @ DW_FORM_strp
	.byte	11                      @ DW_AT_byte_size
	.byte	11                      @ DW_FORM_data1
	.byte	58                      @ DW_AT_decl_file
	.byte	11                      @ DW_FORM_data1
	.byte	59                      @ DW_AT_decl_line
	.byte	11                      @ DW_FORM_data1
	.byte	0                       @ EOM(1)
	.byte	0                       @ EOM(2)
	.byte	0                       @ EOM(3)
	.section	.debug_info,"",%progbits
.Lsection_info:
.Lcu_begin0:
	.long	2289                    @ Length of Unit
	.short	4                       @ DWARF version number
	.long	.Lsection_abbrev        @ Offset Into Abbrev. Section
	.byte	4                       @ Address Size (in bytes)
	.byte	1                       @ Abbrev [1] 0xb:0x8ea DW_TAG_compile_unit
	.long	.Linfo_string0          @ DW_AT_producer
	.short	4                       @ DW_AT_language
	.long	.Linfo_string1          @ DW_AT_name
	.long	.Lline_table_start0     @ DW_AT_stmt_list
	.long	.Linfo_string2          @ DW_AT_comp_dir
	.long	0                       @ DW_AT_low_pc
	.long	.Ldebug_ranges1         @ DW_AT_ranges
	.byte	2                       @ Abbrev [2] 0x26:0xb DW_TAG_typedef
	.long	49                      @ DW_AT_type
	.long	.Linfo_string4          @ DW_AT_name
	.byte	1                       @ DW_AT_decl_file
	.byte	48                      @ DW_AT_decl_line
	.byte	3                       @ Abbrev [3] 0x31:0x7 DW_TAG_base_type
	.long	.Linfo_string3          @ DW_AT_name
	.byte	8                       @ DW_AT_encoding
	.byte	1                       @ DW_AT_byte_size
	.byte	2                       @ Abbrev [2] 0x38:0xb DW_TAG_typedef
	.long	67                      @ DW_AT_type
	.long	.Linfo_string6          @ DW_AT_name
	.byte	1                       @ DW_AT_decl_file
	.byte	49                      @ DW_AT_decl_line
	.byte	3                       @ Abbrev [3] 0x43:0x7 DW_TAG_base_type
	.long	.Linfo_string5          @ DW_AT_name
	.byte	7                       @ DW_AT_encoding
	.byte	2                       @ DW_AT_byte_size
	.byte	4                       @ Abbrev [4] 0x4a:0x5 DW_TAG_pointer_type
	.long	38                      @ DW_AT_type
	.byte	5                       @ Abbrev [5] 0x4f:0x168 DW_TAG_class_type
	.long	79                      @ DW_AT_containing_type
	.long	.Linfo_string16         @ DW_AT_name
	.byte	12                      @ DW_AT_byte_size
	.byte	3                       @ DW_AT_decl_file
	.byte	41                      @ DW_AT_decl_line
	.byte	6                       @ Abbrev [6] 0x5b:0xa DW_TAG_member
	.long	.Linfo_string7          @ DW_AT_name
	.long	439                     @ DW_AT_type
	.byte	0                       @ DW_AT_data_member_location
                                        @ DW_AT_artificial
	.byte	7                       @ Abbrev [7] 0x65:0xd DW_TAG_member
	.long	.Linfo_string10         @ DW_AT_name
	.long	114                     @ DW_AT_type
	.byte	3                       @ DW_AT_decl_file
	.byte	152                     @ DW_AT_decl_line
	.byte	4                       @ DW_AT_data_member_location
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	2                       @ Abbrev [2] 0x72:0xb DW_TAG_typedef
	.long	125                     @ DW_AT_type
	.long	.Linfo_string15         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	58                      @ DW_AT_decl_line
	.byte	8                       @ Abbrev [8] 0x7d:0x35 DW_TAG_structure_type
	.byte	8                       @ DW_AT_byte_size
	.byte	3                       @ DW_AT_decl_file
	.byte	52                      @ DW_AT_decl_line
	.byte	9                       @ Abbrev [9] 0x81:0xc DW_TAG_member
	.long	.Linfo_string11         @ DW_AT_name
	.long	56                      @ DW_AT_type
	.byte	3                       @ DW_AT_decl_file
	.byte	54                      @ DW_AT_decl_line
	.byte	0                       @ DW_AT_data_member_location
	.byte	9                       @ Abbrev [9] 0x8d:0xc DW_TAG_member
	.long	.Linfo_string12         @ DW_AT_name
	.long	56                      @ DW_AT_type
	.byte	3                       @ DW_AT_decl_file
	.byte	55                      @ DW_AT_decl_line
	.byte	2                       @ DW_AT_data_member_location
	.byte	9                       @ Abbrev [9] 0x99:0xc DW_TAG_member
	.long	.Linfo_string13         @ DW_AT_name
	.long	56                      @ DW_AT_type
	.byte	3                       @ DW_AT_decl_file
	.byte	56                      @ DW_AT_decl_line
	.byte	4                       @ DW_AT_data_member_location
	.byte	9                       @ Abbrev [9] 0xa5:0xc DW_TAG_member
	.long	.Linfo_string14         @ DW_AT_name
	.long	38                      @ DW_AT_type
	.byte	3                       @ DW_AT_decl_file
	.byte	57                      @ DW_AT_decl_line
	.byte	6                       @ DW_AT_data_member_location
	.byte	0                       @ End Of Children Mark
	.byte	10                      @ Abbrev [10] 0xb2:0xe DW_TAG_subprogram
	.long	.Linfo_string16         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	66                      @ DW_AT_decl_line
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0xba:0x5 DW_TAG_formal_parameter
	.long	465                     @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	12                      @ Abbrev [12] 0xc0:0x1e DW_TAG_subprogram
	.long	.Linfo_string17         @ DW_AT_linkage_name
	.long	.Linfo_string18         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	76                      @ DW_AT_decl_line
	.long	458                     @ DW_AT_type
	.byte	1                       @ DW_AT_virtuality
	.byte	2                       @ DW_AT_vtable_elem_location
	.byte	16
	.byte	0
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.long	79                      @ DW_AT_containing_type
	.byte	11                      @ Abbrev [11] 0xd8:0x5 DW_TAG_formal_parameter
	.long	465                     @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	13                      @ Abbrev [13] 0xde:0x12 DW_TAG_subprogram
	.long	.Linfo_string19         @ DW_AT_linkage_name
	.long	.Linfo_string20         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	84                      @ DW_AT_decl_line
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0xea:0x5 DW_TAG_formal_parameter
	.long	465                     @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	14                      @ Abbrev [14] 0xf0:0x16 DW_TAG_subprogram
	.long	.Linfo_string21         @ DW_AT_linkage_name
	.long	.Linfo_string22         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	91                      @ DW_AT_decl_line
	.long	56                      @ DW_AT_type
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x100:0x5 DW_TAG_formal_parameter
	.long	465                     @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	13                      @ Abbrev [13] 0x106:0x17 DW_TAG_subprogram
	.long	.Linfo_string23         @ DW_AT_linkage_name
	.long	.Linfo_string24         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	99                      @ DW_AT_decl_line
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x112:0x5 DW_TAG_formal_parameter
	.long	465                     @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x117:0x5 DW_TAG_formal_parameter
	.long	56                      @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	14                      @ Abbrev [14] 0x11d:0x16 DW_TAG_subprogram
	.long	.Linfo_string25         @ DW_AT_linkage_name
	.long	.Linfo_string26         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	107                     @ DW_AT_decl_line
	.long	38                      @ DW_AT_type
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x12d:0x5 DW_TAG_formal_parameter
	.long	465                     @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	13                      @ Abbrev [13] 0x133:0x17 DW_TAG_subprogram
	.long	.Linfo_string27         @ DW_AT_linkage_name
	.long	.Linfo_string28         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	116                     @ DW_AT_decl_line
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x13f:0x5 DW_TAG_formal_parameter
	.long	465                     @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x144:0x5 DW_TAG_formal_parameter
	.long	38                      @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	14                      @ Abbrev [14] 0x14a:0x16 DW_TAG_subprogram
	.long	.Linfo_string29         @ DW_AT_linkage_name
	.long	.Linfo_string30         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	125                     @ DW_AT_decl_line
	.long	470                     @ DW_AT_type
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x15a:0x5 DW_TAG_formal_parameter
	.long	465                     @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	16                      @ Abbrev [16] 0x160:0x29 DW_TAG_subprogram
	.long	.Linfo_string32         @ DW_AT_linkage_name
	.long	.Linfo_string33         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	138                     @ DW_AT_decl_line
	.byte	2                       @ DW_AT_virtuality
	.byte	2                       @ DW_AT_vtable_elem_location
	.byte	16
	.byte	1
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	2                       @ DW_AT_accessibility
                                        @ DW_ACCESS_protected
	.long	79                      @ DW_AT_containing_type
	.byte	11                      @ Abbrev [11] 0x174:0x5 DW_TAG_formal_parameter
	.long	465                     @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x179:0x5 DW_TAG_formal_parameter
	.long	38                      @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x17e:0x5 DW_TAG_formal_parameter
	.long	477                     @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x183:0x5 DW_TAG_formal_parameter
	.long	483                     @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	12                      @ Abbrev [12] 0x189:0x2d DW_TAG_subprogram
	.long	.Linfo_string36         @ DW_AT_linkage_name
	.long	.Linfo_string37         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	148                     @ DW_AT_decl_line
	.long	483                     @ DW_AT_type
	.byte	2                       @ DW_AT_virtuality
	.byte	2                       @ DW_AT_vtable_elem_location
	.byte	16
	.byte	2
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	2                       @ DW_AT_accessibility
                                        @ DW_ACCESS_protected
	.long	79                      @ DW_AT_containing_type
	.byte	11                      @ Abbrev [11] 0x1a1:0x5 DW_TAG_formal_parameter
	.long	465                     @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x1a6:0x5 DW_TAG_formal_parameter
	.long	38                      @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x1ab:0x5 DW_TAG_formal_parameter
	.long	501                     @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x1b0:0x5 DW_TAG_formal_parameter
	.long	483                     @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	0                       @ End Of Children Mark
	.byte	4                       @ Abbrev [4] 0x1b7:0x5 DW_TAG_pointer_type
	.long	444                     @ DW_AT_type
	.byte	17                      @ Abbrev [17] 0x1bc:0x9 DW_TAG_pointer_type
	.long	453                     @ DW_AT_type
	.long	.Linfo_string9          @ DW_AT_name
	.byte	18                      @ Abbrev [18] 0x1c5:0x5 DW_TAG_subroutine_type
	.long	458                     @ DW_AT_type
	.byte	3                       @ Abbrev [3] 0x1ca:0x7 DW_TAG_base_type
	.long	.Linfo_string8          @ DW_AT_name
	.byte	5                       @ DW_AT_encoding
	.byte	4                       @ DW_AT_byte_size
	.byte	4                       @ Abbrev [4] 0x1d1:0x5 DW_TAG_pointer_type
	.long	79                      @ DW_AT_type
	.byte	3                       @ Abbrev [3] 0x1d6:0x7 DW_TAG_base_type
	.long	.Linfo_string31         @ DW_AT_name
	.byte	2                       @ DW_AT_encoding
	.byte	1                       @ DW_AT_byte_size
	.byte	4                       @ Abbrev [4] 0x1dd:0x5 DW_TAG_pointer_type
	.long	482                     @ DW_AT_type
	.byte	19                      @ Abbrev [19] 0x1e2:0x1 DW_TAG_const_type
	.byte	2                       @ Abbrev [2] 0x1e3:0xb DW_TAG_typedef
	.long	494                     @ DW_AT_type
	.long	.Linfo_string35         @ DW_AT_name
	.byte	4                       @ DW_AT_decl_file
	.byte	62                      @ DW_AT_decl_line
	.byte	3                       @ Abbrev [3] 0x1ee:0x7 DW_TAG_base_type
	.long	.Linfo_string34         @ DW_AT_name
	.byte	7                       @ DW_AT_encoding
	.byte	4                       @ DW_AT_byte_size
	.byte	20                      @ Abbrev [20] 0x1f5:0x1 DW_TAG_pointer_type
	.byte	21                      @ Abbrev [21] 0x1f6:0x25 DW_TAG_subprogram
	.long	.Lfunc_begin0           @ DW_AT_low_pc
	.long	.Lfunc_end0-.Lfunc_begin0 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.long	527                     @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	14                      @ DW_AT_decl_line
	.long	.Linfo_string68         @ DW_AT_linkage_name
	.long	178                     @ DW_AT_specification
	.byte	22                      @ Abbrev [22] 0x20f:0xb DW_TAG_formal_parameter
	.byte	1                       @ DW_AT_location
	.byte	80
	.long	.Linfo_string54         @ DW_AT_name
	.long	1631                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	23                      @ Abbrev [23] 0x21b:0x25 DW_TAG_subprogram
	.long	.Lfunc_begin1           @ DW_AT_low_pc
	.long	.Lfunc_end1-.Lfunc_begin1 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	558                     @ DW_AT_object_pointer
	.long	1598                    @ DW_AT_abstract_origin
	.byte	24                      @ Abbrev [24] 0x22e:0x9 DW_TAG_formal_parameter
	.long	.Ldebug_loc0            @ DW_AT_location
	.long	1610                    @ DW_AT_abstract_origin
	.byte	25                      @ Abbrev [25] 0x237:0x8 DW_TAG_variable
	.byte	2                       @ DW_AT_location
	.byte	145
	.byte	126
	.long	1619                    @ DW_AT_abstract_origin
	.byte	0                       @ End Of Children Mark
	.byte	26                      @ Abbrev [26] 0x240:0x31 DW_TAG_subprogram
	.long	.Lfunc_begin2           @ DW_AT_low_pc
	.long	.Lfunc_end2-.Lfunc_begin2 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	597                     @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	38                      @ DW_AT_decl_line
	.long	222                     @ DW_AT_specification
	.byte	27                      @ Abbrev [27] 0x255:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc1            @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	1631                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	28                      @ Abbrev [28] 0x262:0xe DW_TAG_variable
	.byte	2                       @ DW_AT_location
	.byte	125
	.byte	0
	.long	.Linfo_string73         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	40                      @ DW_AT_decl_line
	.long	2113                    @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	26                      @ Abbrev [26] 0x271:0x2e DW_TAG_subprogram
	.long	.Lfunc_begin3           @ DW_AT_low_pc
	.long	.Lfunc_end3-.Lfunc_begin3 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	646                     @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	48                      @ DW_AT_decl_line
	.long	240                     @ DW_AT_specification
	.byte	27                      @ Abbrev [27] 0x286:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc2            @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	1631                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	29                      @ Abbrev [29] 0x293:0xb DW_TAG_variable
	.long	.Linfo_string74         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	50                      @ DW_AT_decl_line
	.long	1636                    @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	26                      @ Abbrev [26] 0x29f:0x4a DW_TAG_subprogram
	.long	.Lfunc_begin4           @ DW_AT_low_pc
	.long	.Lfunc_end4-.Lfunc_begin4 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	692                     @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	56                      @ DW_AT_decl_line
	.long	262                     @ DW_AT_specification
	.byte	27                      @ Abbrev [27] 0x2b4:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc3            @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	1631                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	30                      @ Abbrev [30] 0x2c1:0xf DW_TAG_formal_parameter
	.long	.Ldebug_loc4            @ DW_AT_location
	.long	.Linfo_string75         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	56                      @ DW_AT_decl_line
	.long	56                      @ DW_AT_type
	.byte	31                      @ Abbrev [31] 0x2d0:0x18 DW_TAG_lexical_block
	.long	.Ltmp34                 @ DW_AT_low_pc
	.long	.Ltmp38-.Ltmp34         @ DW_AT_high_pc
	.byte	28                      @ Abbrev [28] 0x2d9:0xe DW_TAG_variable
	.byte	2                       @ DW_AT_location
	.byte	145
	.byte	126
	.long	.Linfo_string73         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	59                      @ DW_AT_decl_line
	.long	1636                    @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	0                       @ End Of Children Mark
	.byte	26                      @ Abbrev [26] 0x2e9:0x32 DW_TAG_subprogram
	.long	.Lfunc_begin5           @ DW_AT_low_pc
	.long	.Lfunc_end5-.Lfunc_begin5 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	766                     @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	66                      @ DW_AT_decl_line
	.long	285                     @ DW_AT_specification
	.byte	27                      @ Abbrev [27] 0x2fe:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc5            @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	1631                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	32                      @ Abbrev [32] 0x30b:0xf DW_TAG_variable
	.long	.Ldebug_loc6            @ DW_AT_location
	.long	.Linfo_string76         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	67                      @ DW_AT_decl_line
	.long	38                      @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	26                      @ Abbrev [26] 0x31b:0x32 DW_TAG_subprogram
	.long	.Lfunc_begin6           @ DW_AT_low_pc
	.long	.Lfunc_end6-.Lfunc_begin6 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	816                     @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	73                      @ DW_AT_decl_line
	.long	307                     @ DW_AT_specification
	.byte	27                      @ Abbrev [27] 0x330:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc7            @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	1631                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	30                      @ Abbrev [30] 0x33d:0xf DW_TAG_formal_parameter
	.long	.Ldebug_loc8            @ DW_AT_location
	.long	.Linfo_string77         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	73                      @ DW_AT_decl_line
	.long	38                      @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	26                      @ Abbrev [26] 0x34d:0x50 DW_TAG_subprogram
	.long	.Lfunc_begin7           @ DW_AT_low_pc
	.long	.Lfunc_end7-.Lfunc_begin7 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	866                     @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	79                      @ DW_AT_decl_line
	.long	330                     @ DW_AT_specification
	.byte	27                      @ Abbrev [27] 0x362:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc9            @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	1631                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	32                      @ Abbrev [32] 0x36f:0xf DW_TAG_variable
	.long	.Ldebug_loc10           @ DW_AT_location
	.long	.Linfo_string78         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	81                      @ DW_AT_decl_line
	.long	38                      @ DW_AT_type
	.byte	32                      @ Abbrev [32] 0x37e:0xf DW_TAG_variable
	.long	.Ldebug_loc11           @ DW_AT_location
	.long	.Linfo_string79         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	80                      @ DW_AT_decl_line
	.long	470                     @ DW_AT_type
	.byte	32                      @ Abbrev [32] 0x38d:0xf DW_TAG_variable
	.long	.Ldebug_loc12           @ DW_AT_location
	.long	.Linfo_string80         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	81                      @ DW_AT_decl_line
	.long	38                      @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	5                       @ Abbrev [5] 0x39d:0xf0 DW_TAG_class_type
	.long	925                     @ DW_AT_containing_type
	.long	.Linfo_string48         @ DW_AT_name
	.byte	16                      @ DW_AT_byte_size
	.byte	5                       @ DW_AT_decl_file
	.byte	23                      @ DW_AT_decl_line
	.byte	6                       @ Abbrev [6] 0x3a9:0xa DW_TAG_member
	.long	.Linfo_string38         @ DW_AT_name
	.long	439                     @ DW_AT_type
	.byte	0                       @ DW_AT_data_member_location
                                        @ DW_AT_artificial
	.byte	7                       @ Abbrev [7] 0x3b3:0xd DW_TAG_member
	.long	.Linfo_string39         @ DW_AT_name
	.long	458                     @ DW_AT_type
	.byte	5                       @ DW_AT_decl_file
	.byte	27                      @ DW_AT_decl_line
	.byte	4                       @ DW_AT_data_member_location
	.byte	2                       @ DW_AT_accessibility
                                        @ DW_ACCESS_protected
	.byte	7                       @ Abbrev [7] 0x3c0:0xd DW_TAG_member
	.long	.Linfo_string40         @ DW_AT_name
	.long	458                     @ DW_AT_type
	.byte	5                       @ DW_AT_decl_file
	.byte	28                      @ DW_AT_decl_line
	.byte	8                       @ DW_AT_data_member_location
	.byte	2                       @ DW_AT_accessibility
                                        @ DW_ACCESS_protected
	.byte	7                       @ Abbrev [7] 0x3cd:0xd DW_TAG_member
	.long	.Linfo_string41         @ DW_AT_name
	.long	458                     @ DW_AT_type
	.byte	5                       @ DW_AT_decl_file
	.byte	29                      @ DW_AT_decl_line
	.byte	12                      @ DW_AT_data_member_location
	.byte	2                       @ DW_AT_accessibility
                                        @ DW_ACCESS_protected
	.byte	14                      @ Abbrev [14] 0x3da:0x20 DW_TAG_subprogram
	.long	.Linfo_string42         @ DW_AT_linkage_name
	.long	.Linfo_string43         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	31                      @ DW_AT_decl_line
	.long	1165                    @ DW_AT_type
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x3ea:0x5 DW_TAG_formal_parameter
	.long	1187                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x3ef:0x5 DW_TAG_formal_parameter
	.long	501                     @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x3f4:0x5 DW_TAG_formal_parameter
	.long	483                     @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	14                      @ Abbrev [14] 0x3fa:0x20 DW_TAG_subprogram
	.long	.Linfo_string46         @ DW_AT_linkage_name
	.long	.Linfo_string47         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	32                      @ DW_AT_decl_line
	.long	1165                    @ DW_AT_type
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x40a:0x5 DW_TAG_formal_parameter
	.long	1187                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x40f:0x5 DW_TAG_formal_parameter
	.long	477                     @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x414:0x5 DW_TAG_formal_parameter
	.long	483                     @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	10                      @ Abbrev [10] 0x41a:0xe DW_TAG_subprogram
	.long	.Linfo_string48         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	33                      @ DW_AT_decl_line
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x422:0x5 DW_TAG_formal_parameter
	.long	1187                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	10                      @ Abbrev [10] 0x428:0x13 DW_TAG_subprogram
	.long	.Linfo_string48         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	34                      @ DW_AT_decl_line
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x430:0x5 DW_TAG_formal_parameter
	.long	1187                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x435:0x5 DW_TAG_formal_parameter
	.long	1192                    @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	14                      @ Abbrev [14] 0x43b:0x25 DW_TAG_subprogram
	.long	.Linfo_string49         @ DW_AT_linkage_name
	.long	.Linfo_string50         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	35                      @ DW_AT_decl_line
	.long	458                     @ DW_AT_type
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x44b:0x5 DW_TAG_formal_parameter
	.long	1187                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x450:0x5 DW_TAG_formal_parameter
	.long	458                     @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x455:0x5 DW_TAG_formal_parameter
	.long	458                     @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x45a:0x5 DW_TAG_formal_parameter
	.long	458                     @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	14                      @ Abbrev [14] 0x460:0x16 DW_TAG_subprogram
	.long	.Linfo_string51         @ DW_AT_linkage_name
	.long	.Linfo_string52         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	36                      @ DW_AT_decl_line
	.long	458                     @ DW_AT_type
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x470:0x5 DW_TAG_formal_parameter
	.long	1187                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	33                      @ Abbrev [33] 0x476:0x16 DW_TAG_subprogram
	.long	.Linfo_string53         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	38                      @ DW_AT_decl_line
	.byte	1                       @ DW_AT_virtuality
	.byte	2                       @ DW_AT_vtable_elem_location
	.byte	16
	.byte	0
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.long	925                     @ DW_AT_containing_type
	.byte	11                      @ Abbrev [11] 0x486:0x5 DW_TAG_formal_parameter
	.long	1187                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	0                       @ End Of Children Mark
	.byte	2                       @ Abbrev [2] 0x48d:0xb DW_TAG_typedef
	.long	1176                    @ DW_AT_type
	.long	.Linfo_string45         @ DW_AT_name
	.byte	7                       @ DW_AT_decl_file
	.byte	104                     @ DW_AT_decl_line
	.byte	2                       @ Abbrev [2] 0x498:0xb DW_TAG_typedef
	.long	458                     @ DW_AT_type
	.long	.Linfo_string44         @ DW_AT_name
	.byte	6                       @ DW_AT_decl_file
	.byte	172                     @ DW_AT_decl_line
	.byte	4                       @ Abbrev [4] 0x4a3:0x5 DW_TAG_pointer_type
	.long	925                     @ DW_AT_type
	.byte	34                      @ Abbrev [34] 0x4a8:0x5 DW_TAG_rvalue_reference_type
	.long	925                     @ DW_AT_type
	.byte	35                      @ Abbrev [35] 0x4ad:0x41 DW_TAG_subprogram
	.byte	42                      @ DW_AT_decl_line
	.long	1083                    @ DW_AT_specification
	.byte	1                       @ DW_AT_inline
	.long	1208                    @ DW_AT_object_pointer
	.byte	36                      @ Abbrev [36] 0x4b8:0x9 DW_TAG_formal_parameter
	.long	.Linfo_string54         @ DW_AT_name
	.long	1262                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	37                      @ Abbrev [37] 0x4c1:0xb DW_TAG_formal_parameter
	.long	.Linfo_string55         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	42                      @ DW_AT_decl_line
	.long	458                     @ DW_AT_type
	.byte	37                      @ Abbrev [37] 0x4cc:0xb DW_TAG_formal_parameter
	.long	.Linfo_string56         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	42                      @ DW_AT_decl_line
	.long	458                     @ DW_AT_type
	.byte	37                      @ Abbrev [37] 0x4d7:0xb DW_TAG_formal_parameter
	.long	.Linfo_string57         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	42                      @ DW_AT_decl_line
	.long	458                     @ DW_AT_type
	.byte	29                      @ Abbrev [29] 0x4e2:0xb DW_TAG_variable
	.long	.Linfo_string58         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	49                      @ DW_AT_decl_line
	.long	1267                    @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	4                       @ Abbrev [4] 0x4ee:0x5 DW_TAG_pointer_type
	.long	925                     @ DW_AT_type
	.byte	38                      @ Abbrev [38] 0x4f3:0xc DW_TAG_array_type
	.long	1279                    @ DW_AT_type
	.byte	39                      @ Abbrev [39] 0x4f8:0x6 DW_TAG_subrange_type
	.long	1286                    @ DW_AT_type
	.byte	64                      @ DW_AT_count
	.byte	0                       @ End Of Children Mark
	.byte	3                       @ Abbrev [3] 0x4ff:0x7 DW_TAG_base_type
	.long	.Linfo_string59         @ DW_AT_name
	.byte	8                       @ DW_AT_encoding
	.byte	1                       @ DW_AT_byte_size
	.byte	40                      @ Abbrev [40] 0x506:0x7 DW_TAG_base_type
	.long	.Linfo_string60         @ DW_AT_name
	.byte	8                       @ DW_AT_byte_size
	.byte	7                       @ DW_AT_encoding
	.byte	5                       @ Abbrev [5] 0x50d:0xbb DW_TAG_class_type
	.long	79                      @ DW_AT_containing_type
	.long	.Linfo_string61         @ DW_AT_name
	.byte	28                      @ DW_AT_byte_size
	.byte	3                       @ DW_AT_decl_file
	.byte	159                     @ DW_AT_decl_line
	.byte	41                      @ Abbrev [41] 0x519:0x7 DW_TAG_inheritance
	.long	79                      @ DW_AT_type
	.byte	0                       @ DW_AT_data_member_location
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	41                      @ Abbrev [41] 0x520:0x7 DW_TAG_inheritance
	.long	925                     @ DW_AT_type
	.byte	12                      @ DW_AT_data_member_location
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	10                      @ Abbrev [10] 0x527:0x18 DW_TAG_subprogram
	.long	.Linfo_string61         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	169                     @ DW_AT_decl_line
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.byte	11                      @ Abbrev [11] 0x52f:0x5 DW_TAG_formal_parameter
	.long	1480                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x534:0x5 DW_TAG_formal_parameter
	.long	38                      @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x539:0x5 DW_TAG_formal_parameter
	.long	458                     @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	12                      @ Abbrev [12] 0x53f:0x1e DW_TAG_subprogram
	.long	.Linfo_string62         @ DW_AT_linkage_name
	.long	.Linfo_string18         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	179                     @ DW_AT_decl_line
	.long	458                     @ DW_AT_type
	.byte	1                       @ DW_AT_virtuality
	.byte	2                       @ DW_AT_vtable_elem_location
	.byte	16
	.byte	0
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.long	1293                    @ DW_AT_containing_type
	.byte	11                      @ Abbrev [11] 0x557:0x5 DW_TAG_formal_parameter
	.long	1480                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	16                      @ Abbrev [16] 0x55d:0x29 DW_TAG_subprogram
	.long	.Linfo_string63         @ DW_AT_linkage_name
	.long	.Linfo_string33         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	191                     @ DW_AT_decl_line
	.byte	1                       @ DW_AT_virtuality
	.byte	2                       @ DW_AT_vtable_elem_location
	.byte	16
	.byte	1
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	2                       @ DW_AT_accessibility
                                        @ DW_ACCESS_protected
	.long	1293                    @ DW_AT_containing_type
	.byte	11                      @ Abbrev [11] 0x571:0x5 DW_TAG_formal_parameter
	.long	1480                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x576:0x5 DW_TAG_formal_parameter
	.long	38                      @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x57b:0x5 DW_TAG_formal_parameter
	.long	477                     @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x580:0x5 DW_TAG_formal_parameter
	.long	483                     @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	12                      @ Abbrev [12] 0x586:0x2d DW_TAG_subprogram
	.long	.Linfo_string64         @ DW_AT_linkage_name
	.long	.Linfo_string37         @ DW_AT_name
	.byte	3                       @ DW_AT_decl_file
	.byte	201                     @ DW_AT_decl_line
	.long	483                     @ DW_AT_type
	.byte	1                       @ DW_AT_virtuality
	.byte	2                       @ DW_AT_vtable_elem_location
	.byte	16
	.byte	2
                                        @ DW_AT_declaration
                                        @ DW_AT_external
	.byte	2                       @ DW_AT_accessibility
                                        @ DW_ACCESS_protected
	.long	1293                    @ DW_AT_containing_type
	.byte	11                      @ Abbrev [11] 0x59e:0x5 DW_TAG_formal_parameter
	.long	1480                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	15                      @ Abbrev [15] 0x5a3:0x5 DW_TAG_formal_parameter
	.long	38                      @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x5a8:0x5 DW_TAG_formal_parameter
	.long	501                     @ DW_AT_type
	.byte	15                      @ Abbrev [15] 0x5ad:0x5 DW_TAG_formal_parameter
	.long	483                     @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	42                      @ Abbrev [42] 0x5b3:0x14 DW_TAG_subprogram
	.long	.Linfo_string66         @ DW_AT_name
	.byte	1                       @ DW_AT_virtuality
	.byte	2                       @ DW_AT_vtable_elem_location
	.byte	16
	.byte	0
                                        @ DW_AT_declaration
                                        @ DW_AT_artificial
                                        @ DW_AT_external
	.byte	1                       @ DW_AT_accessibility
                                        @ DW_ACCESS_public
	.long	1293                    @ DW_AT_containing_type
	.byte	11                      @ Abbrev [11] 0x5c1:0x5 DW_TAG_formal_parameter
	.long	1480                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	0                       @ End Of Children Mark
	.byte	4                       @ Abbrev [4] 0x5c8:0x5 DW_TAG_pointer_type
	.long	1293                    @ DW_AT_type
	.byte	21                      @ Abbrev [21] 0x5cd:0x71 DW_TAG_subprogram
	.long	.Lfunc_begin8           @ DW_AT_low_pc
	.long	.Lfunc_end8-.Lfunc_begin8 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	1510                    @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	95                      @ DW_AT_decl_line
	.long	.Linfo_string69         @ DW_AT_linkage_name
	.long	1319                    @ DW_AT_specification
	.byte	27                      @ Abbrev [27] 0x5e6:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc13           @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	2058                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	30                      @ Abbrev [30] 0x5f3:0xf DW_TAG_formal_parameter
	.long	.Ldebug_loc14           @ DW_AT_location
	.long	.Linfo_string14         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	95                      @ DW_AT_decl_line
	.long	38                      @ DW_AT_type
	.byte	30                      @ Abbrev [30] 0x602:0xf DW_TAG_formal_parameter
	.long	.Ldebug_loc15           @ DW_AT_location
	.long	.Linfo_string55         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	95                      @ DW_AT_decl_line
	.long	458                     @ DW_AT_type
	.byte	43                      @ Abbrev [43] 0x611:0x2c DW_TAG_inlined_subroutine
	.long	1197                    @ DW_AT_abstract_origin
	.long	.Ldebug_ranges0         @ DW_AT_ranges
	.byte	2                       @ DW_AT_call_file
	.byte	97                      @ DW_AT_call_line
	.byte	24                      @ Abbrev [24] 0x61c:0x9 DW_TAG_formal_parameter
	.long	.Ldebug_loc17           @ DW_AT_location
	.long	1217                    @ DW_AT_abstract_origin
	.byte	24                      @ Abbrev [24] 0x625:0x9 DW_TAG_formal_parameter
	.long	.Ldebug_loc16           @ DW_AT_location
	.long	1228                    @ DW_AT_abstract_origin
	.byte	44                      @ Abbrev [44] 0x62e:0x6 DW_TAG_formal_parameter
	.byte	127                     @ DW_AT_const_value
	.long	1239                    @ DW_AT_abstract_origin
	.byte	25                      @ Abbrev [25] 0x634:0x8 DW_TAG_variable
	.byte	2                       @ DW_AT_location
	.byte	125
	.byte	0
	.long	1250                    @ DW_AT_abstract_origin
	.byte	0                       @ End Of Children Mark
	.byte	0                       @ End Of Children Mark
	.byte	45                      @ Abbrev [45] 0x63e:0x21 DW_TAG_subprogram
	.byte	2                       @ DW_AT_decl_file
	.byte	19                      @ DW_AT_decl_line
	.long	192                     @ DW_AT_specification
	.byte	1                       @ DW_AT_inline
	.long	1610                    @ DW_AT_object_pointer
	.byte	36                      @ Abbrev [36] 0x64a:0x9 DW_TAG_formal_parameter
	.long	.Linfo_string54         @ DW_AT_name
	.long	1631                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	29                      @ Abbrev [29] 0x653:0xb DW_TAG_variable
	.long	.Linfo_string65         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	21                      @ DW_AT_decl_line
	.long	1636                    @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	4                       @ Abbrev [4] 0x65f:0x5 DW_TAG_pointer_type
	.long	79                      @ DW_AT_type
	.byte	38                      @ Abbrev [38] 0x664:0xc DW_TAG_array_type
	.long	38                      @ DW_AT_type
	.byte	39                      @ Abbrev [39] 0x669:0x6 DW_TAG_subrange_type
	.long	1286                    @ DW_AT_type
	.byte	2                       @ DW_AT_count
	.byte	0                       @ End Of Children Mark
	.byte	26                      @ Abbrev [26] 0x670:0x44 DW_TAG_subprogram
	.long	.Lfunc_begin9           @ DW_AT_low_pc
	.long	.Lfunc_end9-.Lfunc_begin9 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	1669                    @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	101                     @ DW_AT_decl_line
	.long	1343                    @ DW_AT_specification
	.byte	27                      @ Abbrev [27] 0x685:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc18           @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	2058                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	46                      @ Abbrev [46] 0x692:0x21 DW_TAG_inlined_subroutine
	.long	1598                    @ DW_AT_abstract_origin
	.long	.Ltmp102                @ DW_AT_low_pc
	.long	.Ltmp107-.Ltmp102       @ DW_AT_high_pc
	.byte	2                       @ DW_AT_call_file
	.byte	103                     @ DW_AT_call_line
	.byte	24                      @ Abbrev [24] 0x6a1:0x9 DW_TAG_formal_parameter
	.long	.Ldebug_loc19           @ DW_AT_location
	.long	1610                    @ DW_AT_abstract_origin
	.byte	25                      @ Abbrev [25] 0x6aa:0x8 DW_TAG_variable
	.byte	2                       @ DW_AT_location
	.byte	145
	.byte	126
	.long	1619                    @ DW_AT_abstract_origin
	.byte	0                       @ End Of Children Mark
	.byte	0                       @ End Of Children Mark
	.byte	26                      @ Abbrev [26] 0x6b4:0x5f DW_TAG_subprogram
	.long	.Lfunc_begin10          @ DW_AT_low_pc
	.long	.Lfunc_end10-.Lfunc_begin10 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	1737                    @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	108                     @ DW_AT_decl_line
	.long	1373                    @ DW_AT_specification
	.byte	27                      @ Abbrev [27] 0x6c9:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc20           @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	2058                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	30                      @ Abbrev [30] 0x6d6:0xf DW_TAG_formal_parameter
	.long	.Ldebug_loc21           @ DW_AT_location
	.long	.Linfo_string81         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	108                     @ DW_AT_decl_line
	.long	38                      @ DW_AT_type
	.byte	30                      @ Abbrev [30] 0x6e5:0xf DW_TAG_formal_parameter
	.long	.Ldebug_loc22           @ DW_AT_location
	.long	.Linfo_string82         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	108                     @ DW_AT_decl_line
	.long	477                     @ DW_AT_type
	.byte	30                      @ Abbrev [30] 0x6f4:0xf DW_TAG_formal_parameter
	.long	.Ldebug_loc23           @ DW_AT_location
	.long	.Linfo_string83         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	108                     @ DW_AT_decl_line
	.long	483                     @ DW_AT_type
	.byte	32                      @ Abbrev [32] 0x703:0xf DW_TAG_variable
	.long	.Ldebug_loc24           @ DW_AT_location
	.long	.Linfo_string84         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	113                     @ DW_AT_decl_line
	.long	2125                    @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	26                      @ Abbrev [26] 0x713:0x7c DW_TAG_subprogram
	.long	.Lfunc_begin11          @ DW_AT_low_pc
	.long	.Lfunc_end11-.Lfunc_begin11 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	91
	.long	1832                    @ DW_AT_object_pointer
	.byte	2                       @ DW_AT_decl_file
	.byte	120                     @ DW_AT_decl_line
	.long	1414                    @ DW_AT_specification
	.byte	27                      @ Abbrev [27] 0x728:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc25           @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	2058                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	30                      @ Abbrev [30] 0x735:0xf DW_TAG_formal_parameter
	.long	.Ldebug_loc26           @ DW_AT_location
	.long	.Linfo_string81         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	120                     @ DW_AT_decl_line
	.long	38                      @ DW_AT_type
	.byte	30                      @ Abbrev [30] 0x744:0xf DW_TAG_formal_parameter
	.long	.Ldebug_loc27           @ DW_AT_location
	.long	.Linfo_string82         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	120                     @ DW_AT_decl_line
	.long	501                     @ DW_AT_type
	.byte	30                      @ Abbrev [30] 0x753:0xf DW_TAG_formal_parameter
	.long	.Ldebug_loc28           @ DW_AT_location
	.long	.Linfo_string83         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	120                     @ DW_AT_decl_line
	.long	483                     @ DW_AT_type
	.byte	28                      @ Abbrev [28] 0x762:0xe DW_TAG_variable
	.byte	2                       @ DW_AT_location
	.byte	125
	.byte	4
	.long	.Linfo_string85         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	127                     @ DW_AT_decl_line
	.long	2136                    @ DW_AT_type
	.byte	32                      @ Abbrev [32] 0x770:0xf DW_TAG_variable
	.long	.Ldebug_loc29           @ DW_AT_location
	.long	.Linfo_string92         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	125                     @ DW_AT_decl_line
	.long	2232                    @ DW_AT_type
	.byte	32                      @ Abbrev [32] 0x77f:0xf DW_TAG_variable
	.long	.Ldebug_loc30           @ DW_AT_location
	.long	.Linfo_string94         @ DW_AT_name
	.byte	2                       @ DW_AT_decl_file
	.byte	126                     @ DW_AT_decl_line
	.long	2243                    @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	21                      @ Abbrev [21] 0x78f:0x25 DW_TAG_subprogram
	.long	.Lfunc_begin12          @ DW_AT_low_pc
	.long	.Lfunc_end12-.Lfunc_begin12 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.long	1960                    @ DW_AT_object_pointer
	.byte	3                       @ DW_AT_decl_file
	.byte	159                     @ DW_AT_decl_line
	.long	.Linfo_string70         @ DW_AT_linkage_name
	.long	1459                    @ DW_AT_specification
	.byte	22                      @ Abbrev [22] 0x7a8:0xb DW_TAG_formal_parameter
	.byte	1                       @ DW_AT_location
	.byte	80
	.long	.Linfo_string54         @ DW_AT_name
	.long	2058                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	23                      @ Abbrev [23] 0x7b4:0x1b DW_TAG_subprogram
	.long	.Lfunc_begin13          @ DW_AT_low_pc
	.long	.Lfunc_end13-.Lfunc_begin13 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.long	1991                    @ DW_AT_object_pointer
	.long	2032                    @ DW_AT_abstract_origin
	.byte	47                      @ Abbrev [47] 0x7c7:0x7 DW_TAG_formal_parameter
	.byte	1                       @ DW_AT_location
	.byte	80
	.long	2048                    @ DW_AT_abstract_origin
	.byte	0                       @ End Of Children Mark
	.byte	48                      @ Abbrev [48] 0x7cf:0x21 DW_TAG_subprogram
	.long	.Lfunc_begin14          @ DW_AT_low_pc
	.long	.Lfunc_end14-.Lfunc_begin14 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.long	2020                    @ DW_AT_object_pointer
	.long	.Linfo_string71         @ DW_AT_linkage_name
	.byte	3                       @ DW_AT_decl_file
	.byte	159                     @ DW_AT_decl_line
                                        @ DW_AT_artificial
                                        @ DW_AT_external
	.byte	22                      @ Abbrev [22] 0x7e4:0xb DW_TAG_formal_parameter
	.byte	1                       @ DW_AT_location
	.byte	80
	.long	.Linfo_string54         @ DW_AT_name
	.long	2058                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	49                      @ Abbrev [49] 0x7f0:0x1a DW_TAG_subprogram
	.byte	3                       @ DW_AT_decl_file
	.byte	159                     @ DW_AT_decl_line
	.long	.Linfo_string67         @ DW_AT_linkage_name
	.long	1459                    @ DW_AT_specification
	.byte	1                       @ DW_AT_inline
	.long	2048                    @ DW_AT_object_pointer
	.byte	36                      @ Abbrev [36] 0x800:0x9 DW_TAG_formal_parameter
	.long	.Linfo_string54         @ DW_AT_name
	.long	2058                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	0                       @ End Of Children Mark
	.byte	4                       @ Abbrev [4] 0x80a:0x5 DW_TAG_pointer_type
	.long	1293                    @ DW_AT_type
	.byte	48                      @ Abbrev [48] 0x80f:0x32 DW_TAG_subprogram
	.long	.Lfunc_begin15          @ DW_AT_low_pc
	.long	.Lfunc_end15-.Lfunc_begin15 @ DW_AT_high_pc
	.byte	1                       @ DW_AT_frame_base
	.byte	93
	.long	2084                    @ DW_AT_object_pointer
	.long	.Linfo_string72         @ DW_AT_linkage_name
	.byte	3                       @ DW_AT_decl_file
	.byte	159                     @ DW_AT_decl_line
                                        @ DW_AT_artificial
                                        @ DW_AT_external
	.byte	27                      @ Abbrev [27] 0x824:0xd DW_TAG_formal_parameter
	.long	.Ldebug_loc31           @ DW_AT_location
	.long	.Linfo_string54         @ DW_AT_name
	.long	2058                    @ DW_AT_type
                                        @ DW_AT_artificial
	.byte	50                      @ Abbrev [50] 0x831:0xf DW_TAG_inlined_subroutine
	.long	2032                    @ DW_AT_abstract_origin
	.long	.Ltmp155                @ DW_AT_low_pc
	.long	.Ltmp156-.Ltmp155       @ DW_AT_high_pc
	.byte	3                       @ DW_AT_call_file
	.byte	159                     @ DW_AT_call_line
	.byte	0                       @ End Of Children Mark
	.byte	38                      @ Abbrev [38] 0x841:0xc DW_TAG_array_type
	.long	38                      @ DW_AT_type
	.byte	39                      @ Abbrev [39] 0x846:0x6 DW_TAG_subrange_type
	.long	1286                    @ DW_AT_type
	.byte	8                       @ DW_AT_count
	.byte	0                       @ End Of Children Mark
	.byte	38                      @ Abbrev [38] 0x84d:0xb DW_TAG_array_type
	.long	1279                    @ DW_AT_type
	.byte	51                      @ Abbrev [51] 0x852:0x5 DW_TAG_subrange_type
	.long	1286                    @ DW_AT_type
	.byte	0                       @ End Of Children Mark
	.byte	38                      @ Abbrev [38] 0x858:0xc DW_TAG_array_type
	.long	2148                    @ DW_AT_type
	.byte	39                      @ Abbrev [39] 0x85d:0x6 DW_TAG_subrange_type
	.long	1286                    @ DW_AT_type
	.byte	2                       @ DW_AT_count
	.byte	0                       @ End Of Children Mark
	.byte	52                      @ Abbrev [52] 0x864:0x39 DW_TAG_structure_type
	.long	.Linfo_string91         @ DW_AT_name
	.byte	12                      @ DW_AT_byte_size
	.byte	10                      @ DW_AT_decl_file
	.byte	68                      @ DW_AT_decl_line
	.byte	9                       @ Abbrev [9] 0x86c:0xc DW_TAG_member
	.long	.Linfo_string86         @ DW_AT_name
	.long	2205                    @ DW_AT_type
	.byte	10                      @ DW_AT_decl_file
	.byte	69                      @ DW_AT_decl_line
	.byte	0                       @ DW_AT_data_member_location
	.byte	9                       @ Abbrev [9] 0x878:0xc DW_TAG_member
	.long	.Linfo_string88         @ DW_AT_name
	.long	2205                    @ DW_AT_type
	.byte	10                      @ DW_AT_decl_file
	.byte	70                      @ DW_AT_decl_line
	.byte	2                       @ DW_AT_data_member_location
	.byte	9                       @ Abbrev [9] 0x884:0xc DW_TAG_member
	.long	.Linfo_string89         @ DW_AT_name
	.long	2205                    @ DW_AT_type
	.byte	10                      @ DW_AT_decl_file
	.byte	80                      @ DW_AT_decl_line
	.byte	4                       @ DW_AT_data_member_location
	.byte	9                       @ Abbrev [9] 0x890:0xc DW_TAG_member
	.long	.Linfo_string84         @ DW_AT_name
	.long	2216                    @ DW_AT_type
	.byte	10                      @ DW_AT_decl_file
	.byte	81                      @ DW_AT_decl_line
	.byte	8                       @ DW_AT_data_member_location
	.byte	0                       @ End Of Children Mark
	.byte	2                       @ Abbrev [2] 0x89d:0xb DW_TAG_typedef
	.long	67                      @ DW_AT_type
	.long	.Linfo_string87         @ DW_AT_name
	.byte	9                       @ DW_AT_decl_file
	.byte	23                      @ DW_AT_decl_line
	.byte	4                       @ Abbrev [4] 0x8a8:0x5 DW_TAG_pointer_type
	.long	2221                    @ DW_AT_type
	.byte	2                       @ Abbrev [2] 0x8ad:0xb DW_TAG_typedef
	.long	49                      @ DW_AT_type
	.long	.Linfo_string90         @ DW_AT_name
	.byte	9                       @ DW_AT_decl_file
	.byte	20                      @ DW_AT_decl_line
	.byte	2                       @ Abbrev [2] 0x8b8:0xb DW_TAG_typedef
	.long	49                      @ DW_AT_type
	.long	.Linfo_string93         @ DW_AT_name
	.byte	5                       @ DW_AT_decl_file
	.byte	15                      @ DW_AT_decl_line
	.byte	52                      @ Abbrev [52] 0x8c3:0x21 DW_TAG_structure_type
	.long	.Linfo_string98         @ DW_AT_name
	.byte	8                       @ DW_AT_byte_size
	.byte	11                      @ DW_AT_decl_file
	.byte	64                      @ DW_AT_decl_line
	.byte	9                       @ Abbrev [9] 0x8cb:0xc DW_TAG_member
	.long	.Linfo_string95         @ DW_AT_name
	.long	2276                    @ DW_AT_type
	.byte	11                      @ DW_AT_decl_file
	.byte	65                      @ DW_AT_decl_line
	.byte	0                       @ DW_AT_data_member_location
	.byte	9                       @ Abbrev [9] 0x8d7:0xc DW_TAG_member
	.long	.Linfo_string96         @ DW_AT_name
	.long	2281                    @ DW_AT_type
	.byte	11                      @ DW_AT_decl_file
	.byte	66                      @ DW_AT_decl_line
	.byte	4                       @ DW_AT_data_member_location
	.byte	0                       @ End Of Children Mark
	.byte	4                       @ Abbrev [4] 0x8e4:0x5 DW_TAG_pointer_type
	.long	2148                    @ DW_AT_type
	.byte	2                       @ Abbrev [2] 0x8e9:0xb DW_TAG_typedef
	.long	494                     @ DW_AT_type
	.long	.Linfo_string97         @ DW_AT_name
	.byte	9                       @ DW_AT_decl_file
	.byte	26                      @ DW_AT_decl_line
	.byte	0                       @ End Of Children Mark
	.section	.debug_ranges,"",%progbits
.Ldebug_range:
.Ldebug_ranges0:
	.long	.Ltmp87
	.long	.Ltmp92
	.long	.Ltmp93
	.long	.Ltmp96
	.long	0
	.long	0
.Ldebug_ranges1:
	.long	.Lfunc_begin0
	.long	.Lfunc_end11
	.long	.Lfunc_begin12
	.long	.Lfunc_end12
	.long	.Lfunc_begin13
	.long	.Lfunc_end13
	.long	.Lfunc_begin14
	.long	.Lfunc_end14
	.long	.Lfunc_begin15
	.long	.Lfunc_end15
	.long	0
	.long	0
	.section	.debug_macinfo,"",%progbits
.Ldebug_macinfo:
.Lcu_macro_begin0:
	.byte	0                       @ End Of Macro List Mark
	.section	.debug_pubnames,"",%progbits
	.long	.LpubNames_end0-.LpubNames_begin0 @ Length of Public Names Info
.LpubNames_begin0:
	.short	2                       @ DWARF Version
	.long	.Lcu_begin0             @ Offset of Compilation Unit Info
	.long	2293                    @ Compilation Unit Length
	.long	2063                    @ DIE offset
	.byte	0                       @ External Name
	.long	671                     @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder::setEncoderValue" @ External Name
	.long	795                     @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder::setGainCoefficient" @ External Name
	.long	845                     @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder::detectButtonDown" @ External Name
	.long	1197                    @ DIE offset
	.asciz	"I2c::initI2C_RW"       @ External Name
	.long	1811                    @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder_I2C::readReg" @ External Name
	.long	1935                    @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder_I2C::~DFRobot_VisualRotaryEncoder_I2C" @ External Name
	.long	576                     @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder::refreshBasicInfo" @ External Name
	.long	625                     @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder::getEncoderValue" @ External Name
	.long	745                     @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder::getGainCoefficient" @ External Name
	.long	1485                    @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder_I2C::DFRobot_VisualRotaryEncoder_I2C" @ External Name
	.long	1648                    @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder_I2C::begin" @ External Name
	.long	502                     @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder::DFRobot_VisualRotaryEncoder" @ External Name
	.long	1598                    @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder::begin" @ External Name
	.long	1716                    @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder_I2C::writeReg" @ External Name
	.long	0                       @ End Mark
.LpubNames_end0:
	.section	.debug_pubtypes,"",%progbits
	.long	.LpubTypes_end0-.LpubTypes_begin0 @ Length of Public Types Info
.LpubTypes_begin0:
	.short	2                       @ DWARF Version
	.long	.Lcu_begin0             @ Offset of Compilation Unit Info
	.long	2293                    @ Compilation Unit Length
	.long	1165                    @ DIE offset
	.asciz	"ssize_t"               @ External Name
	.long	1293                    @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder_I2C" @ External Name
	.long	79                      @ DIE offset
	.asciz	"DFRobot_VisualRotaryEncoder" @ External Name
	.long	2148                    @ DIE offset
	.asciz	"i2c_msg"               @ External Name
	.long	494                     @ DIE offset
	.asciz	"unsigned int"          @ External Name
	.long	38                      @ DIE offset
	.asciz	"uint8_t"               @ External Name
	.long	470                     @ DIE offset
	.asciz	"bool"                  @ External Name
	.long	67                      @ DIE offset
	.asciz	"unsigned short"        @ External Name
	.long	483                     @ DIE offset
	.asciz	"size_t"                @ External Name
	.long	444                     @ DIE offset
	.asciz	"__vtbl_ptr_type"       @ External Name
	.long	2243                    @ DIE offset
	.asciz	"i2c_rdwr_ioctl_data"   @ External Name
	.long	458                     @ DIE offset
	.asciz	"int"                   @ External Name
	.long	1279                    @ DIE offset
	.asciz	"char"                  @ External Name
	.long	2232                    @ DIE offset
	.asciz	"i2c_char_t"            @ External Name
	.long	2221                    @ DIE offset
	.asciz	"__u8"                  @ External Name
	.long	2281                    @ DIE offset
	.asciz	"__u32"                 @ External Name
	.long	56                      @ DIE offset
	.asciz	"uint16_t"              @ External Name
	.long	49                      @ DIE offset
	.asciz	"unsigned char"         @ External Name
	.long	2205                    @ DIE offset
	.asciz	"__u16"                 @ External Name
	.long	925                     @ DIE offset
	.asciz	"I2c"                   @ External Name
	.long	1176                    @ DIE offset
	.asciz	"__ssize_t"             @ External Name
	.long	0                       @ End Mark
.LpubTypes_end0:
	.cfi_sections .debug_frame

	.globl	_ZN31DFRobot_VisualRotaryEncoder_I2CC1Ehi
	.type	_ZN31DFRobot_VisualRotaryEncoder_I2CC1Ehi,%function
_ZN31DFRobot_VisualRotaryEncoder_I2CC1Ehi = _ZN31DFRobot_VisualRotaryEncoder_I2CC2Ehi
	.ident	"clang version 3.9.1-9 (tags/RELEASE_391/rc2)"
	.section	".note.GNU-stack","",%progbits
	.eabi_attribute	30, 2	@ Tag_ABI_optimization_goals
	.section	.debug_line,"",%progbits
.Lline_table_start0:
