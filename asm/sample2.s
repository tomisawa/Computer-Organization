# f = g + h
# f:$s0, g:$s1, h:$s2

.text
.globl main
main:
    li $s0,1 # f = 1
    li $s1,4 # g = 4
    li $s2,6 # h = 5
    add $s0,$s1,$s2 # f = g + h
