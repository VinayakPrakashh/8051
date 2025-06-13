#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    int b[2][3] = { {1, 2, 3}, {4, 5, 6} }; // Declare and initialize a 2D array
    int (*p)[3] = b; // Pointer to an array of 3 integers (2D array)
    printf("Address of b: %p\n", (void*)b); // Address of the 2D array
    printf("Address of p: %p\n", (void*)p); // Address of the pointer to the 2D array
}