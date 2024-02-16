MOV A,#25H
MOV R0,A
MOV A,#30H
ADD A,R0
MOV DPTR,#8034
MOVX @DPTR,A
HERE: SJMP HERE
//algorithm
Step 1: Initialize accumulator (A) with 25H
Step 2: Copy accumulator value to register R0
Step 3: Load 30H into accumulator
Step 4: Add the value in R0 to the accumulator
Step 5: Set data pointer (DPTR) to memory location 8034H
Step 6: Move accumulator value to memory location pointed by DPTR
Step 7: end the program