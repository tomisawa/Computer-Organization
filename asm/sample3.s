# f = ( g + h ) - ( i + j )
# f:$s0, g:$s1, h:$s2, i:$s3, j:$s4

.text
.globl main
main:
    li $s0,1 # f = 1
    li $s1,4 # g = 4
    li $s2,6 # h = 5
    li $s3,1 # i = 1
    li $s4,9 # j = 9

    add $t0,$s1,$s2 # $t0 = g + h
    add $t1,$s3,$s4 # $t1 = i + j
    sub $s0,$t0,$t1 # f = $t0 - $t1
