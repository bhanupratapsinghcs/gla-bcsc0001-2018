#include <stdio.h>

int main()
{
    int a = 4;
    int * p = &a;
    printf("Variable:\n");
    printf("\tV : %d\n", a);
    printf("\tA : %p\n", &a);
    printf("Pointer:\n");
    printf("\tV : %p\n", p);
    printf("\tA : %p\n", &p);
    printf("\t*p : %d\n", *p);
    printf("Pointer Arithmetic:\n");
    printf("\t p + 1 : %p\n", p + 1);
    printf("\t p - 1 : %p\n", p - 1);
    printf("\t p + a : %p\n", p + a);
    printf("\t p - a : %p\n", p - a);
    p++;
    printf("\t p++ : %p\n", p);
    printf("\t *(p) : %p\n", *(p));

    return 0;
}










