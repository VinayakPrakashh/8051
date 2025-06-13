#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of long long: %zu bytes\n", sizeof(long long));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of size_t: %zu bytes\n", sizeof(size_t));
    printf("Size of ptrdiff_t: %zu bytes\n", sizeof(ptrdiff_t));
    printf("Size of int8_t: %zu bytes\n", sizeof(int8_t));
    printf("Size of int16_t: %zu bytes\n", sizeof(int16_t));
    printf("Size of int32_t: %zu bytes\n", sizeof(int32_t));
    printf("Size of int64_t: %zu bytes\n", sizeof(int64_t));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long: %zu bytes\n", sizeof(long));
    return 0;
}