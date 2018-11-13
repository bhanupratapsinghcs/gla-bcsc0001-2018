#include <stdio.h>
int main()
{
    int variable = 4;
    int *pointer = &variable;
    printf("The address of the variable is %d (%x in hexadecimal)\n"
    "The value of the pointer is %d (%x in hexadecimal)\n", &variable, &variable, pointer, pointer);
    printf("As you can now clearly observe, the pointer does in fact store the address of a variable\n");
    return 0;
}
