	.data
text1:.asciiz "\nx="
text2:.asciiz "fact("
text3:.asciiz ")="

    .text
    .globl __start
__start:

    ori $v0,$zero,4		# print_string
    la $a0,text1
    syscall

    ori $v0,$zero,5		# read_int
    syscall
    add $a0,$zero,$v0
    add $s0,$zero,$v0

    jal fact
    add $s1,$zero,$v0

    ori $v0,$zero,4		# print_string
    la $a0,text2
    syscall

    ori $v0,$zero,1		# print_int
    add $a0,$zero,$s0
    syscall

    ori $v0,$zero,4		# print_string
    la $a0,text3
    syscall
	
    ori $v0,$zero,1		# print_int
    add $a0,$zero,$s1
    syscall

    j __start


fact:sub $sp,$sp,8
     sw $ra,4($sp)
     sw $a0,0($sp)
     slti $t0,$a0,1
     beq $t0,$zero,fact1
     addi $v0,$zero,1
     addi $sp,$sp,8
     jr $ra
fact1:sub $a0,$a0,1
     jal fact
     lw $a0,0($sp)
     lw $ra,4($sp)
     addi $sp,$sp,8
     mul $v0,$a0,$v0
     jr $ra
