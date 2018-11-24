/*
*   FileName    :   twoPointers.c
*   Purpose     :   To demonstrate two pointers in C
*   Author      :   Divyansh Bhardwaj, Technical Trainer, GLAU
*   Operating System    :   Ubuntu 18.10, 64 Bit
*   Compiler    :   GCC 8.2.0 x86_64 GNU
*/
#include <stdio.h>
int main()
{
    int x = 100, y = 300;
    int *p = &x;
    int *q = p;
    printf("x = 100, y = 300\n");
    printf("When x = 100, *p = %d, *q = %d\n", *p, *q);
    *p = 160;
    printf("When *p = 160, *q = %d, x = %d\n", *q, x);
    *q = 200;
    printf("When *q = 200, *p = %d, x = %d\n", *p, x);
    p = &y;
    printf("p = &y\nNow p pointer points to y, *p = %d, y = %d\n", *p, y);
    printf("but *q is still %d\n", *q);
    return 0;
}
