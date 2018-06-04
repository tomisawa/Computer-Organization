
	.data
A:	# int A[]={1,2,3,4}
A0:.word 1
A1:.word 2
A2:.word 3
A3:.word 4

   .text
   .globl __start
   .text
#
# A[i]=A[i]+10
# i:$s0, $s5=&A[0]
#
__start:
		la $s5,A  # $s5=&A[0]
		addi $s0,$zero,2 	# i=2
		sll $t0,$s0,2
		add $t0,$t0,$s5
    lw $t1,0($t0)			# $t1=A[i]
		addi $t1,$t1,10  	# $t1=A[i]+10
		sw $t1,0($t0)			# A[i]=$1
    nop
    break 2
