#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    int a = 2222;
    int *p = &a;
    int **pp = &p; // Pointer to pointer
    printf("Value of a: %d\n", **pp);
    printf("Address of a: %p\n", &a);
    printf("Value of p: %p\n", (void*)p);
}