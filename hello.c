#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;
    int a[7] = { 0,1,2,3,4,5,6 };

    printf("x is stored at %lu\n", (unsigned long)&x);
    printf("a[0] is stored at %lu\n", (unsigned long)&(a[0]));
    printf("a[1] is stored at %lu\n", (unsigned long)&(a[1]));

    //printf("The value of x is %d.\n", x);
    //a[7] = 30;
    //printf("Now the value of x is %d.\n", x);
} 