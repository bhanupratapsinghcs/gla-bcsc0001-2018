#include <stdio.h>
//#define ALOO 56
int main()
{
    int a = 4;
    int *p = &a;
    printf("A: %p\n", &a);
    printf("VP: *P = %d\n", *p);
    (*(p++))++;
    printf("A: %p\n", &a);
    printf("VP: *P = %d\n", *p);
    return 0;
}
