#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {
    int  a = 1025;
    int *p = &a;
    printf("Value of a: %d\n %d\n", p,&p);
    char *c = (char*)p; //type casting pointer to char pointer
    printf("Value of a after type casting: %d\n", *c);
}