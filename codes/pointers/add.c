#include <stdio.h>
int main()
{
    int a = 4;
    int *p = &a;
    *p += 1;
    printf("The value of a is %d\n", a);
    return 0;
}
