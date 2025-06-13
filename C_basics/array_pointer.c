#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
     int a[5] = {1, 2, 3, 4, 5}; // Declare and initialize an array of integers
        int *p = a; // Pointer to the first element of the array
        printf("Array elements using pointer:%d\n",*p); // Access the first element using pointer
        printf("Array elements using pointer:%d\n",*(p+1)); // Access the second element using pointer
}