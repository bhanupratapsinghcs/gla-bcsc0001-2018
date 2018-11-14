/*
*   FileName    :   pointer.c
*   Purpose     :   To demonstrate a simple pointer in C
*   Author      :   Divyansh Bhardwaj, Technical Trainer, GLAU
*   Operating System    :   Ubuntu 18.10, 64 Bit
*   Compiler    :   GCC 8.2.0 x86_64 GNU
*/
#include <stdio.h>
int main()
{
    int variable = 10;  //  declare and initialize a simple integer variable
    //  the value of the variable is 10
    //  now, let's check the address of this variable
    printf("Address of variable : %d\n", &variable);
    //  remember, we can access the address of a variable with the
    //  '&' unary operator.
    //  now, let us create a pointer
    //  int *pointer;
    //  always remember, the '*' used here indicates that this variable will
    //  behave as a pointer.
    //  We call this variable - "A pointer to int".
    //  Now, let us initialize the pointer.
    //  Pointers always store the address of another memory locations.
    //  Here, we will give the address of the variable to the pointer.
    //  We can do this as follows
    int *pointer = &variable;
    //  The '*' unary operator here represents the value of the pointer
    //  and the '&' unary operator here represents the address of the variable
    //  Now, the address of the variable is stored in the pointer.
    //  Hence, we can say that the pointer now points to the variable.
    //  We can now change the value of the variable 'indirectly' via the pointer
    printf("The value before : %d\n", variable);
    *pointer = 50;
    printf("The value after: %d\n", variable);
    return 0;
}
