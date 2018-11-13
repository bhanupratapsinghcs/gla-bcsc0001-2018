#include <stdio.h>
int main(void)
{
    int x = 420;
    int *p = &x;
    printf("Value of x = %d\n", x);
    printf("Address of x = %d (%x in hexadecimal)\n", &x, &x);
    printf("The pointer points to %p\n", p);
    printf("The value at the address to which the pointer points is %d\n", *p);
    *p = 840;
    printf("The new value of x is %d\n", x);
    return 0;
}
