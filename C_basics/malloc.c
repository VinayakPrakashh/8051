#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {    
    int *p = (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    int *c = (int *)calloc(5 , sizeof(int)); // Allocate memory for another 5 integers
    *p = 10; // Assign a value to the first element of the allocated memory
    if (p == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }
    else{
        printf("Memory allocated successfully at address: %p\n", (void*)p);
    }
    printf("content of allocated memory:%d\n", *p);
    free(p); // Free the allocated memory
    p = NULL; // Set pointer to NULL after freeing memory to avoid dangling pointer
    printf("Memory freed successfully\n");
    printf("content of freed memory:%d\n", *p); // Accessing freed memory is undefined behavior
   
}