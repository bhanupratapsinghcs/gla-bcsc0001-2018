#include <stdio.h>

int main()
{
    int a = 4;
    int * p = &a;
    printf("Variable:\n");
    printf("\tValue: %d\n", a);
    printf("\tAddress: %p\n", &a);
    printf("Pointer to int 1:\n");
    printf("\tValue: %p\n", p);
    printf("\tAddress: %p\n", &p);
    printf("\t*p : %d\n", *(p));
    int **q = &p;
    printf("Pointer to int 2:\n");
    printf("\tValue: %p\n", q);
    printf("\tAddress: %p\n", &q);
    printf("\t*(*(q)) : %d", *(*(q)));
    return 0;
}
