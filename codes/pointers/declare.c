#include <stdio.h>
int main()
{
    int a = 4;  // declaring a vairable;
    printf("a:\n");
    printf("Address of a: %d (%x)\n", &a, &a);
    printf("Value of a: %d\n", a);
    int *p = &a;    // declaring a pointer and setting it to point to the address of a
    printf("p:\n");
    printf("P points to the address: %d (%x)\n", p, p);
    printf("Value of p: %d\n", *p);
    // These are also legal declarations for a pointer
    int* p1;
    int * p2;
    return 0;
}
