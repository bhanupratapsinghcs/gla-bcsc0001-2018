# Super Practice Set 2

![](https://images.pexels.com/photos/442574/pexels-photo-442574.jpeg?auto=compress&cs=tinysrgb&h=650&w=940)



___



## Scenario Based Question 1

A student wishes to use a personal computer to calculate the radius of a circle whose area has a value of 100. A program is available that will calculate the area of a circle, given the radius. (Note that this is just the opposite of what the student wants to do). This program isn't exactly what is needed but it does allow the student to obtain the answer by trial-and-error. The procedure will be to guess a value for the radius and then calculate a corresponding area. This trial-and-error procedure continues until the student has found a value for the radius that yields an area sufficiently close to 100.

Once the program execution begins, the message

`Radius = ?`

is displayed. The student then enters a value for the radius. Let us assume that the student enters a value of 5 for the radius. The computer will responfd by displaying

`Area = 78.5398`

`Do you wish to repeat the calculation? (y/n)`

The student then presses either `y` or `n`. If the student presses `y`, the message 

`Radius = ?`

again appears, and the entire procedure is repeated. If the student types `n`, the message

`Goodbye`

is displayed and the computation is terminated.

Shown below is a printed copy of the information displayed during an interactive session using the program described above. In this session, an approximate value of `r = 5.6` was determined after onyl three calculations. The information typed by the student is underlined.

___

Radius = <u>5</u>

Area = 78.5398

Do you wish to repeat the calculation? <u>y</u>

Radius = <u>6</u>

Area = 113.097

Do you wish to repeat the calculation? <u>y</u>

Radius  = <u>5.6</u>

Area = 98.5204

Do you wish to repeat the calculation? <u>n</u>

Goodbye

___

**Notice the manner in which the computer appears to be conversing with the user. Also, note that the student waits until she or he sees the calculated value of the area before deciding whether or not to carry out another calculation. If another calculation is finished, the new value for the radius supplied by the student will depend on the previously calculated results.**

Could you write both the programs described here?

___



**Here is an elementary C Program that reads in the radius of a circle, calculates its area and then writes the calculated results.**

```C
#include <stdio.h>
int main()
{
    float radius, area;
    printf("Radius = ?");
    scanf("%f", &radius);
    area = 3.14159 * radius * radius;
    printf("Area = %f", area);
    return 0;
}
```



**This is a variation of the above program**

```C
#include <stdio.h>
#define PI 3.14159
float process(float radius);
int main()
{
    float radius, area;
    printf("Radius = ?");
    scanf("%f", &radius);
    area = process(radius);
    printf("Area = %f", area);
    return 0;
}
float process(float r)
{
    float a;
    a = PI * r * r;
    return a;
}
```



**Program to calculate the area of a circle, with error checking**

```C
#include <stdio.h>
#define PI 3.14159
float process(float radius);
int main()
{
    float radius, area;
    printf("Radius = ?");
    scanf("%f", &radius);
    if (radius < 0)
    {
        area = 0;
    }
    else
    {
        area = process(radius);
    }
    printf("Area = %f", area);
    return 0;
}
float process(float r)
{
    float a;
    a = PI * r * r;
    return a;
}
```



**Program to calculate the areas of circles, using a for loop**

```C
#include <stdio.h>
#define PI 3.14159
float process(float radius);
int main()
{
    float radius, area;
    int count, n;
    printf("How many circles?");
    scanf("%d", &n);
    for ( count = 1 ; count <= n ; count++ )
    {
        printf("\nCircle no %d: Radius = ?", count);
        scanf("%f", radius);
        if (radius < 0)
        {
            area = 0;
        }
        else
        {
            area = process(radius);
        }
        printf("Area = %f", area);
    }
    return 0;
}
float process(float r)
{
    float a;
    a = PI * r * r;
    return a;
}
```



**Program to calculate the areas of circles, using a for loop; the number of circles is unspecified**

```C
#include <stdio.h>
#define PI 3.14159
float process(float radius);
int main()
{
    float radius, area;
    int count;
    printf("To STOP, enter 0 for radius\n");
    printf("\nRadius  = ?");
    scanf("%f", &radius);
    for ( count = 1 ; radius != 0 ; count++ )
    {
        if (radius < 0)
        {
            area = 0;
        }
        else
        {
            area = process(radius);
        }
        printf("Area = %f", area);
        printf("\nRadius  = ?");
    	scanf("%f", &radius);
    }
    return 0;
}
float process(float r)
{
    float a;
    a = PI * r * r;
    return a;
}
```



**Program to calculate the areas of circles, using a while loop; number of circles is unspecified**

```C
#include <stdio.h>
#define PI 3.14159
float process(float radius);
int main()
{
    float radius, area;
    int count;
    printf("To STOP, enter 0 for radius\n");
    printf("\nRadius  = ?");
    scanf("%f", &radius);
    while (radius != 0)
    {
        if (radius < 0)
        {
            area = 0;
        }
        else
        {
            area = process(radius);
        }
        printf("Area = %f", area);
        printf("\nRadius  = ?");
    	scanf("%f", &radius);
    }
    return 0;
}
float process(float r)
{
    float a;
    a = PI * r * r;
    return a;
}
```



**Program to calculate the areas of circles, using a while loop; the results are stored in an array, the number of circles is unspecified**

```C
#include <stdio.h>
#define PI 3.14159
float process(float radius);
int main()
{
    int n, i = 0;
    float radius[100], area[100];
    int count;
    printf("To STOP, enter 0 for radius\n");
    printf("\nRadius  = ?");
    scanf("%f", &radius[i]);
    while (radius[i] != 0)
    {
        if (radius[i] < 0)
        {
            area[i] = 0;
        }
        else
        {
            area[i] = process(radius[i]);
        }
        printf("\nRadius  = ?");
    	scanf("%f", &radius[++i]);
    }
    n = --i;
    printf("\nSummary of results\n\n");
    for ( i = 0 ; i <= n ; ++i )
    {
        printf("Radius = %f\tArea = %f\n", radius[i], area[i]);
    }
    return 0;
}
float process(float r)
{
    float a;
    a = PI * r * r;
    return a;
}
```



## Problems

1. Determine, as best as you can, the purpose of each of the following C programs. Identify all the variables within each program. Identify all input and output statements, and any other special features that you recognize.

   1. ```C
      main()
      {
          printf("Welcome to the Wonderful World of Computing!\n");
      }
      ```

   2. ```C
      #define MESSAGE "Welcome to the Wonderful World Of Computing!\n"
      main()
      {
          printf(MESSAGE);
      }
      ```

   3. ```C
      main()
      {
          float base, height, area;
          printf("Base: ");
          scanf("%f", &base);
          printf("Height: ");
          scanf("%f", &height);
          area = (base * height) / 2.;
          printf("Area: %f", area);
      }
      ```

   4. ```C
      main()
      {
          float gross, tax, net;
          printf("Gross Salary: ");
          scanf("%f", &gross);
          tax = 0.14 * gross;
          net = gross - tax;
          printf("Taxes withheld: %.2f\n", tax);
          printf("Net Salary: %.2f", net);
      }
      ```

   5. ```C
      int smaller(int a, int b);
      main()
      {
          int a, b, min;
          printf("Enter the first number: ");
          scanf("%d", &a);
          printf("Enter the second number: ");
          scanf("%d", &b);
          min = smaller(a, b);
          printf("\nThe smaller number is: %d", min);
      }
      int smaller(int a, int b)
      {
          if (a <= b)
          {
              return(a);
          }
          else
          {
              return(b);
          }
      }
      ```

   6. ```C
      int smaller(int a, int b);
      main()
      {
          int count, n, a, b, min;
          printf("How many pairs of numbers? ");
          scanf("%d", &n);
          for ( count = 1; count <= n ; ++count )
          {
              printf("\nEnter the first number: ");
      	    scanf("%d", &a);
      	    printf("Enter the second number: ");
      	    scanf("%d", &b);
      	    min = smaller(a, b);
      	    printf("\nThe smaller number is: %d\n", min);
      	}
      }
      int smaller(int a, int b)
      {
          if (a <= b)
          {
              return(a);
          }
          else
          {
              return(b);
          }
      }
      ```

   7. ```C
      int smaller(int a, int b);
      main()
      {
          int a, b, min;
          printf("To STOP, enter 0 for each number\n");
          printf("\Please enter the first number: ");
          scanf("%d", &a);
          printf("Please enter the second number: ");
          scanf("%d", &b);
          while (a != 0 || b != 0)
          {
              min = smaller(a, b);
              printf("\nThe smaller number is: %d\n", min);
              printf("\Please enter the first number: ");
              scanf("%d", &a);
              printf("Please enter the second number: ");
              scanf("%d", &b);
          }
      }
      int smaller(int a, int b)
      {
          if ( a <= b)
          {
              return(a);
          }
          else
          {
              return(b);
          }
      }
      ```

   8. ```C
      int smaller(int, int);
      main()
      {
          int n, i = 0;
          int a[100], b[100], min[100];
          printf("To STOP, enter 0 for each number\n");
          printf("\Please enter the first number: ");
          scanf("%d", &a[i]);
          printf("Please enter the second number: ");
          scanf("%d", &b[i]);
          while (a[i] || b[i])
          {
              min[i] = smaller(a[i], b[i]);
              printf("\nThe smaller number is: %d\n", min[i]);
              printf("\Please enter the first number: ");
              scanf("%d", &a[++i]);
              printf("Please enter the second number: ");
              scanf("%d", &b[i]);
          }
          n = --i;
          printf("\nSummary of Results\n\n");
          for ( i = 0 ; i <= n ; ++i )
          {
              printf("a = %d\tb = %d\tmin = %d\n", a[i], b[i], min[i]);
          }
      }
      int smaller(int a, int b)
      {
          if ( a <= b)
          {
              return(a);
          }
          else
          {
              return(b);
          }
      }
      ```



___



## C Fundamentals

**The following names are valid identifiers**

* x
* y12
* sum_1
* _temperature
* names
* area
* tax_rate
* TABLE

**The following names are NOT valid identifiers for the reason stated**

* 4th : The first character must be a letter
* "x" : Illegal Characters `*`
* order-no : Illegal Characters `-`
* error flag : Illegal Chracters ` <blank space>`

___



**The identifiers `file_manager` and `file_management` are both grammatically valid. Some compilers may be unable to distinguish between them, however, because the first eight letters are the same for each identifier. Therefore, only one of these characters should be used in a single C program.**

___



**A C program is being written to calculate the future value of an investment. The identifiers `value` or `future_value` are appropriate symbolic names. However, `v` or `fv` would probably be too brief, since the intended representation of these identifiers is not clear. On the other hand, the identifier `future_value_of_an_investment` would be unsatisfactory because it is too long and cumbersome.**

___



**some valid decimal integer constants are shown below.**

* 0
* 1
* 743
* 5280
* 32767
* 9999

The following decimal integer constants are written incorrectly for the reasons stated.

* 12,245 : illegal character `,`
* 36.0 : illegal character `.`
* 10 20 30 : illegal character `<blank space>`
* 123-45-6789 : illegal character `-`
* 0900 : the first digit cannot be a zero.

___



**some valid octal integer constants are written incorrectly for the reasons stated.**

* 0
* 01
* 0743
* 077777



The following octal integers constants are written incorrectly for the reasons stated

* 743 : does not begin with a 0
* 05280 : illegal digit `8`
* 0777.777 : illegal character `.`

___



**some valid hexadecimal integer constants are shown below.**

* 0X
* 0X1
* 0X7FFF
* 0xabcd



The following hexadecimal integer constants are written incorrectly for the reasons stated.

* 0X12.34 : illegal character `.`
* 0BE3B : does not begin with 0x or 0X.
* 0x.4bff : illegal character `.`
* 0XDEFG : illlegal character `G`

___



**some unsigned and long integer constants are shown below.**

| Constant    | Number System               |
| ----------- | --------------------------- |
| 50000U      | decimal (unsigned)          |
| 123456789L  | decimal (long)              |
| 123456789UL | decimal (unsigned long)     |
| 0123456L    | octal (long)                |
| 0777777U    | octal (unsigned)            |
| 0X50000U    | hexadecimal (unsigned)      |
| 0XFFFFUL    | hexadecimal (unsigned long) |

____



**some valid floating-point constants are shown below.**

* 0.
* 1.
* 0.2
* 827.602
* 50000.
* 0.000743
* 12.3
* 315.0066
* 2E-8
* 0.006e-3
* 1.6667E+8
* .12121212e12



The following are *not* valid floating-point constants for the reasons stated

* 1 : either a decimal point or an exponent must be present.
* 1,000.0 : illegal character `,`
* 2E+10.2 : the exponent must be an integer quantity (it cannot contain a decimal point)
* 3E 10 : illegal character (blank space) in the exponent.

___



**The quantity 3 X 10 <sup>5</sup> can be represented in C by any of the following floating-point constants.**

* 300000.
* 3e5
* 3e+5
* 3E5
* 3.0e+
* .3e6
* 0.3E6
* 30E4
* 30.E+4
* 300e3

___



**some character constants are shown below.**

* 'A'
* 'x'
* '3'
* '?'
* ' '

___



**some character constants and their corresponding values, as defined by the ASCII characters are shown below**

| constant | value |
| -------- | ----- |
| 'A'      | 65    |
| 'x'      | 120   |
| '3'      | 51    |
| '?'      | 63    |
| ' '      | 32    |

**You can look up the ASCII table [here](http://www.asciitable.com/)**

___



**shown below are some character constants, expressed in terms of escape sequences.**

* `'\n'`
* `'\t'`
* `'\b'`
* `'\''`
* `'\\'`
* `'\"'`

**you can look up the escape sequences in C [here](https://en.wikipedia.org/wiki/Escape_sequences_in_C)**

___



The letter `A` is represented by the decimal value `065` in the ASCII character set. This is equivalent to the octal value `101`. (The equivalent binary bit pattern is `001 000 001`.) Hence the character constant `'A'` can be expressed as the octal escape sequence `'\101'`.

In some versions of C, the letter `A` can also be expressed as a hexadecimal escape sequence. The hexadecimal equivalent of the decimal value `65` is `41`. (The equivalent binary bit pattern is `0100 0001`.) Hence the character constant `'A'` can be expressed as `'\x41'` or `'\X41'`.

It should be understood that the preferred way to represent this character is simply `'A'`. In this form, the character constant is not dependent upon its equivalent ASCII representation.

___



**some string constants are shown below**

* "green"
* "Washington, D.C. 200005"
* "123-456-789"
* "$12.20"
* "THE CORRECT ANSWER IS:"
* "2*(I+3)/J"
* "        "
* "Line 1\nLine 2\nLine 3"
* ""

Note that the string constant "Line 1\nLine 2\nLine 3" extneds over three lines, because of the newline characters that are embedded within the string. Thus, this string would be displayed as

```
Line 1
Line 2
Line 3
```

Also, note that the string "" is a *null* (empty) string.

___



**The following string constant includes three special characters that are represented by their corresponding escape sequences**

`"\tTo continue, press the \"RETURN" key\n"`

The special characters are `\t` (horizontal tab), `\"` (double quotation marks, which appears twice), and `\n` (newline).

___



The string constant "Line 1\nLine 2\nLine 3" actually contains  38 characters. This includes five blank spaces, four special characters (horizontal tab, two quotation marks and newline) represented by escape sequences, and the null character (\0) at the end of the string.

___



The character constant `'w'` has an integer value of `119` in the ASCII character set. It doe not have a null character at the end. In contrast, the string constant `"w"` actually consists of two characters - the lowercase letter `w` and the null character \0. This constant does not have a corresponding integer value.

___



Suppose that the string "California" is to be stored in a one-dimensional character array called `letter`. Since "California" contains 10 characters, `letter` will be an 11-element array. Thus, `letter[0]` will represent the letter `C`, `letter[1]` will represent `a`, and so on. Note that the last (i.e the 11th) array element, `letter[10]`, represents the null character which signifies the end of the string.

___



**A C program contains the following declarations**

* `int a, b, c;`
* `float root1, root2;`
* `char flag, text[80];`
* `short int a, b, c;`
* `long int r, s, t;`
* `unsigned x, y;`
* `double root1, root2;`
* `long float root1, root2;`
* `int c = 12;`
* `char star = '*';`
* `float sum = 0;`
* `double factor = 0.21023e-6;`
* `char text[] = "Washington";`
* `char text[11] = "Washington";`

Thus, `a`, `b` and `c` are declared to be integer variables, `root1` and `root2` are floating-point variables, `flag` is a char-type variable and `text` is an 80-element, char-type array. Note the square brackets enclosing the size specification for `text`.

These declarations could also have been written as follows

```C
int a;
int b;
int c;
float root1;
float root2;
char flag;
char text[80];
```

___



**some simple expressions are shown below**

* `a + b`
* `x = y`
* `c = a + b`
* `x <= y`
* `x == y`
* `++i`
* `i = i + 1`

___



**some expression statements are shown below**

* `a = 3;`
* `c = a + b;`
* `++i;`
* `printf("Area = %f", area);`
* `;`

____



**A typical compound statement is shown below**

```C
{
    pi = 3.141593;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
}
```

___



**The following control statement creates a conditional loop in which several actions are executed repeatedly, until particular condition is satisfied**

```C
while ( count <= n )
{
    printf("x = ");
    scanf("%f", &x);
    sum += x;
    ++count;
}
```

___



A C program contains the following symbolic constant definitions

* `#define TAXRATE 0.23`
* `#define PI 3.141593`
* `#define TRUE 1`
* `#define FASE 0`
* `#define FRIEND "Susan"`

___



## Problems

1. Determine which of the following are valid identifiers. If valid, explain why
   1. record1
   2. $tax
   3. name_and_address
   4. 1record
   5. name
   6. name-and-address
   7. file_3
   8. name and address
   9. 123-45-6789
   10. return
2. Assume that your version of C can recognize only the first 8 characters of an identifier name, though identifier names may be arbitrarily long. Which of the following pairs of identifier names are considered to be identical and which are distinct?
   1. name, names
   2. list1, list2
   3. address, Address
   4. answer, ANSWER
   5. identifier_1, identifier_2
   6. char1, char_1
3. Determine which of the following numerical values are valid constants. If a constant is valid, specify whether it is an integer or real. Also, specify the base for each valid integer constant.
   1. 0.5
   2. 12345678
   3. 0515
   4. 27,822
   5. 12345678L
   6. 018CDF
   7. 9.3e12
   8. 0.8E+0.8
   9. 0XBCFDAL
   10. 9.3e-12
   11. 0.8E 8
   12. 0x87e3ha
4. 



