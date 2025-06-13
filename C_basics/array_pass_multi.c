#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    int c[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    }; // Declare and initialize a 3D array

    int (*p)[2][2] = c; // Pointer to a 2D array of integers
    printf("Address of c: %p\n", (void*)c); // Address of the 3D array
    printf("Address of p: %p\n", (void*)p); // Address of the pointer to the 2D array
    printf("Value at c[0][0][0]: %d\n", c[0][0][0]); // Accessing the first element of the 3D array
    printf("Value at p[0][0][0]: %d\n", *(*(*(p+1))+1)+1); // Accessing the first element using pointer
    funct(c, 2); // Pass the 3D array to the function
    return 0;
}
void funct(int *(a) [2][2], int size) {
    // This function takes a 3D array as an argument
    // and prints its elements
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                printf("Element [%d][%d][%d]: %d\n", i, j, k, a[i][j][k]); // Access each element of the 3D array
            }
        }
    }
}