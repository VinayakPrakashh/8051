#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void funct(int a[],int size) {
    // This function takes an array as an argument
    // and prints its elements
    for (int i = 0; i < size; i++) {
        printf("Element %d: %d\n", i, a[i]); // Access each element of the array
    }
}

int main() {

    int a[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
    int size = sizeof(a) / sizeof(a[0]); // Calculate the size of the array
    funct(a,size); // Pass the array to the function
    return 0;
}