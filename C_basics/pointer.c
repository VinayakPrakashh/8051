#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    int  a = 1025;
    int *p = &a;
    printf("Value of a: %d\n %d\n", p,&a);
}