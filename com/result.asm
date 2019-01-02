
.data
_prompt: .asciiz "Enter an integer:"
_ret: .asciiz "\n"
.globl main
.text
read:
    li $v0,4
    la $a0,_prompt
    syscall
    li $v0,5
    syscall
    jr $ra

print:
    li $v0,1
    syscall
    li $v0,4
    la $a0,_ret
    syscall
    move $v0,$0
    jr $ra
function:
main:
	move $a0,$t1
	add $a0,$a0,$t2
	j label2
	mul $a0,$a0,$t3
	j label0
	j label4
	div $a0,$t3
	mflo $a0
	mul $a0,$a0,$t3
	move $t4,$t1
	j label8
	add $t4,$t4,$t2
	move $t0,$a0
	move $a0,$t4
	addi $sp,$sp,-24
	sw $t0,0($sp)
	sw $ra,4($sp)
	sw $t1,8($sp)
	sw $t2,12($sp)
	sw $t3,16($sp)
	sw $t4,20($sp)
	jal function
	lw $a0,0($sp)
	lw $ra,4($sp)
	lw $t1,8($sp)
	lw $t2,12($sp)
	lw $t3,16($sp)
	lw $t4,20($sp)
	addi $sp,$sp,24
	move $t5 $v0
	j label6
	mul $t6,$t1,$t7
	mul $t8,$t2,$t7
	mul $t9,$t3,$t7
	mul $s0,$t1,$t7
	mul $s1,$t1,$t7
	add $s2,$t2,$t3
	move $s3,$s4
	move $s3,$a0
	move $s5,$s6
	move $s7,$s4
	move $s7,None
	move None,$s4
	move None,$s4
	move $a0,$t3
	move $v0,$s3
	jr $ra
