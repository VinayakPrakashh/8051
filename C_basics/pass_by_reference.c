#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int* increment(int *p) {
 int  c = *p + 1; // Dereference pointer to get the value
   return &c; // Return the incremented value
}
int main() {
    int a = 1025;
  int *ans =   increment(&a); // Pass by reference
  printf("Value of a after increment: %d\n", *ans);
}
// this code work only if the local variable exists in the stack memory for a short duration after the fuction is done 