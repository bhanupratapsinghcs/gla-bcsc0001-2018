# Answers for mid sem 2 exam [BCSC0001]

[TOC]

## Section A

### Question 1

Fill in the blanks in the following program.

```C
________ <stdio.h>
#________ TOTALMARKS 500
void main()
{
    int sub1, sub2, sub3, sub4, sub5, sum;
    float percentage;
    printf("Enter the marks of 5 subjects\n");
    scanf("________", &sub1, ________, &sub3, &sub4, &sub5);
    sum = sub1 + ________ + sub4 + sub5;
    printf("The sum is %d\n", sum);
    ________ = (sum * 100) / TOTALMARKS;
    printf("The percentage is %.2f%%\n", percentage);
}
```



### Answer 1

```C
#include <stdio.h>
#define TOTALMARKS 500
void main()
{
    int sub1, sub2, sub3, sub4, sub5, sum;
    float percentage;
    printf("Enter the marks of 5 subjects\n");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    sum = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("The sum is %d\n", sum);
    percentage = (sum * 100) / TOTALMARKS;
    printf("The percentage is %.2f%%\n", percentage);
}
```



___



### Question 2

Fill in the blanks in the following program.

```c
#include <stdio.h>
________ main()
{
    int ________ = 12;
    int i = { ________("hello") };
    for ( ________ = 0 ; x <= i ; ________++ )
        	printf("%x", x);
}
```



### Answer 2

```C
#include <stdio.h>
void main()
{
    int x = 12;
    int i = { printf("hello") };
    for ( x = 0 ; x <= i ; x++ )
        	printf("%x", x);
}
```



___



### Question 3

Fill in the blanks in the following program.

```C
#include <stdio.h>
int main()
{
    int ________, ________, ________;
    float avg;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);
    sum = ________;
    avg = (________)(a + b) / 2;
    printf("\nSum of %d and %d is = %f", a, b, avg);
    return 0;
}
```



### Answer 3

```C
#include <stdio.h>
int main()
{
    int a, b, sum;
    float avg;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);
    sum = a + b;
    printf("\nSum of %d and %d is = %d", a, b, sum);
    avg = (float)(a + b) / 2;
    printf("\nAverage of %d and %d is = %f", a, b, avg);
    return 0;
}
```



___



### Question 4

Fill in the blanks in the following program.

```C
#include <stdio.h>
int main()
{
    int dividend, divisor;
    int quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", ________);
    printf("Enter divisor: ");
    scanf("%d", ________);
    quotient = dividend ________ divisor;
    remainder = dividend ________ divisor;
    printf("quotient: %d, remainder: %d\n", ________, ________);
    return 0;
}
```



### Answer 4

```C
#include <stdio.h>
int main()
{
    int dividend, divisor;
    int quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("quotient: %d, remainder: %d\n", quotient, remainder);
    return 0;
}
```



___



### Question 5

Fill in the blanks for the following program.

```C
#include <stdio.h>
int main()
{
    int ________ = 7;
    ________
    {
        printf("%d\n", i);
        ________;
    } while(i > 0);
    return 0;
}
```



### Answer 5

```C
#include <stdio.h>
int main()
{
    int i = 7;
    do
    {
        printf("%d\n", i);
        i--;
    } while(i > 0);
    return 0;
}
```



___



### Question 6

What will be the output of the program?

```C
#include <stdio.h>
#include <math.h>
int main()
{
    float val = 123.45;
    float fVal, cVal;
    fVal = floor(val);
    cVal = ceil(val);
    printf("floor value:%f\nceil value:%f\n", fVal, cVal);
    return 0;
}
```



### Answer 6

```
floor value:123.000000
ceil value:124.000000
```



___



### Question 7

What will be the output of the program?

```C
#include <stdio.h>
int main()
{
    char name[10];
    printf("enter name\n");
    scanf("%[^s]s", name); // suppose name is gla university
    printf("%s", name);
}
```



### Answer 7

```
enter name
gla university
gla univer
```



___



### Question 8

What will be the output of the program?

```C
#include <stdio.h>
int main()
{
    int i = 0, j = 1;
    while (j, i)
        printf("%d, %d\n", i, j);
    return 0;
}
```



### Answer 8

**NO OUTPUT**



___



### Question 9

What is the output of this C code?

```c
#include <stdio.h>
int main()
{
    int a[2][3];
    a[][] = {{1, 2, 3}, {4, 5, 6}};
    printf("%d\n", a[1][0]);
    retrun 0;
}
```



### Answer 9

**error: expected expression before ‘]’ token**



___



### Question 10

What will be the output of the program?

```C
#include <stdio.h>
int main()
{
    printf(2 + "india");
    return 0;
}
```



### Answer 10

```
dia
```



___



## Section B

### Question 11

What will be the output of the program?

```C
#include <stdio.h>
int main()
{
    char a[] = "india is best country";
    int i = 0, c = 0;
    while (a[i])
    {
        if ( a[i] == 32 )
            c++;
    }
    printf("%d", c);
    return 0;
}
```



### Answer 11

**No output because of the Infinite Loop**



___



### Question 12

```C
#include <stdio.h>
int main()
{
    int a = 9, c = 5;
    {
        int a = 2, b = 3;
        printf("a = %d, b = %d, c = %d", a, b, c);
    }
    printf("a = %d, b = %d, c = %d", a, b, c);
    return 0;
}
```



### Answer 12

**error: ‘b’ undeclared**



___



### Question 13

What is the output of this C code?

```C
#include <stdio.h>
int main()
{
    int a[4] = {1, 2, 3, 4};
    printf("%d\n", *(a + 0));
}
```



### Answer 13

```
1

```



___



### Question 14

What will be the output of the program?

```C
#include <stdio.h>
int main()
{
    int i, j, k = 65;
    for ( i = 1 ; i <= 5 ; i++ )
    {
        for ( j = 1 ; j <= i ; j++ )
            printf("%2c", k++);
        printf("\n");
    }
}
```



### Answer 14

```
 A
 B C
 D E F
 G H I J
 K L M N O
```



___



### Question 15

What will be the output of the program?

```C
#include <stdio.h>
int main()
{
    int arr[1] = {10};
    printf("%d\n", 0[arr]);
    return 0;
}
```



### Answer 15

```
10

```



___



## Section C

### Question 16

What will be the output of the program?

```
#include <stdio.h>
int main()
{
    int a = 6;
    float b = 4;
    int k = a % b;
    printf("%d", k);
    return 0;
}
```



### Answer 16

**error: invalid operands to binary %**



___



### Question 17

What will be the output of the program?

```C
#include <stdio.h>
int main()
{
    int x, y, z;
    x = y = z = 1;
    z = ++x && ++y || ++z;
    printf("x = %d, y = %d, z = %d", x, y, z);
    return 0;
}
```



### Answer 17

```
x = 1, y = 1, z = 1
```



___



### Question 18

What will be the output of the program?

```c
#include <stdio.h>
int main()
{
	int x = 1, y = 2;
    if ( !(!y) && y )
        printf("%d", y);
    else
        printf("%d", x);
    return 0;
}
```



### Answer 18

```
2
```



___



### Question 19

What will be the output of the program?

```C
#include <stdio.h>
int main()
{
    int i;
    char a[] = "\0";
    if ( printf("%s", a) )
        printf("the string is not empty\n");
    else
        printf("the string is empty\n");
    return 0;
}
```



### Answer 19

```
the string is empty

```



___



### Question 20

What will be the output of the program?

```C
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "hello", str2[20] = " world";
    printf("%s\n", strcpy(str2, strcat(str1, str2)));
    return 0;
}
```



### Answer 20

```
hello world

```

