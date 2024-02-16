MOV A,#25H
MOV R0,A
MOV R1,#5H
MOV B,R1
MUL AB
MOV DPTR,#8034
MOVX @DPTR,A
HERE: SJMP HERE
Step 1: Initialize accumulator (A) with 25H
Step 2: Copy accumulator value to register R0
Step 3: Load 5H into register R1
Step 4: Copy the value in R1 to register B
Step 5: Multiply the value in A by the value in B
Step 6: Set data pointer (DPTR) to memory location 8034H
Step 7: Move the accumulator value to the memory location pointed by DPTR
Step 8: End program