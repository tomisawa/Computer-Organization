    .text
    .globl __start
__start:
    addi $a0,$zero,4
    jal fact
    li $v0,10
    syscall
   nop
fact:sub $sp,$sp,8
     sw $ra,4($sp)
     sw $a0,0($sp)
     slti $t0,$a0,1
     beq $t0,$zero,L1
     addi $v0,$zero,1
     addi $sp,$sp,8
     jr $ra
L1:  sub $a0,$a0,1
     jal fact
     lw $a0,0($sp)
     lw $ra,4($sp)
     addi $sp,$sp,8
     mul $v0,$a0,$v0
     jr $ra
