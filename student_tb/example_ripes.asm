
<add_func>:
	addi	sp,sp,-32
	sw	s0,28(sp)
	addi	s0,sp,32
	sw	a0,-20(s0)
	sw	a1,-24(s0)
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	add	a5,a4,a5
	addi	a0,a5,0
	lw	s0,28(sp)
	addi	sp,sp,32
	jalr	zero,0(ra)

<main>:
	addi	sp,sp,-32
	sw	ra,28(sp)
	sw	s0,24(sp)
	addi	s0,sp,32
	addi	a5,zero,19
	sw	a5,-20(s0)
	addi	a5,zero,14
	sw	a5,-24(s0)
	lw	a1,-24(s0)
	lw	a0,-20(s0)
	auipc	ra,0x0
	jalr	ra,0(ra) # <main+0x28>
	sw	a0,-28(s0)
	lw	a4,-28(s0)
	lw	a5,-20(s0)
	add	a5,a4,a5
	sw	a5,-32(s0)
	addi	zero,zero,0
	lw	ra,28(sp)
	lw	s0,24(sp)
	addi	sp,sp,32
	jalr	zero,0(ra)
