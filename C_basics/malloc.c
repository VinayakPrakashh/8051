#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {    
    int *p = (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    if (p == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }
    else{
        printf("Memory allocated successfully at address: %p\n", (void*)p);
    }
    printf("content of allocated memory:%d\n", (void*)p);
    free(p); // Free the allocated memory
    printf("Memory freed successfully\n");
     p = NULL; // Set pointer to NULL after freeing memory
    printf("content of freed memory:%d\n", (void*)p); // Accessing freed memory is undefined behavior
   int *p
}