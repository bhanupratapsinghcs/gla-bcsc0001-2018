# Super Practice Set 2

![](https://images.pexels.com/photos/442574/pexels-photo-442574.jpeg?auto=compress&cs=tinyUsrgb&h=650&w=940)



------



## Scenario Based Question 1

A student wishes to use a personal computer to calculate the radius of a circle whose area has a value of 100. A program is available that will calculate the area of a circle, given the radius. (Note that this is just the opposite of what the student wants to do). This program isn't exactly what is needed but it does allow the student to obtain the answer by trial-and-error. The procedure will be to guess a value for the radius and then calculate a corresponding area. This trial-and-error procedure continues until the student has found a value for the radius that yields an area sufficiently close to 100.

Once the program execution begins, the message

`Radius = ?`

is displayed. The student then enters a value for the radius. Let us assume that the student enters a value of 5 for the radius. The computer will respond by displaying

`Area = 78.5398`

`Do you wish to repeat the calculation? (y/n)`

The student then presses either `y` or `n`. If the student presses `y`, the message 

`Radius = ?`

again appears, and the entire procedure is repeated. If the student types `n`, the message

`Goodbye`

is displayed and the computation is terminated.

Shown below is a printed copy of the information displayed during an interactive session using the program described above. In this session, an approximate value of `r = 5.6` was determined after only three calculations. The information typed by the student is underlined.

------

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

------

**Notice the manner in which the computer appears to be conversing with the user. Also, note that the student waits until she or he sees the calculated value of the area before deciding whether or not to carry out another calculation. If another calculation is finished, the new value for the radius supplied by the student will depend on the previously calculated results.**

Could you write both the programs described here?

------



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



**Program to calculate the areas of circles, using a while loop; the number of circles is unspecified**

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
      #define MESSAGE "Welcome to the Wonderful World Of Computing! \n"
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
          printf("\nPlease enter the first number: ");
          scanf("%d", &a);
          printf("Please enter the second number: ");
          scanf("%d", &b);
          while (a != 0 || b != 0)
          {
              min = smaller(a, b);
              printf("\nThe smaller number is: %d\n", min);
              printf("\nPlease enter the first number: ");
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
          printf("\nPlease enter the first number: ");
          scanf("%d", &a[i]);
          printf("Please enter the second number: ");
          scanf("%d", &b[i]);
          while (a[i] || b[i])
          {
              min[i] = smaller(a[i], b[i]);
              printf("\nThe smaller number is: %d\n", min[i]);
              printf("\nPlease enter the first number: ");
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



------



## C Fundamentals

**The following names are valid identifiers**

- `x`
- `y12`
- `sum_1`
- `_temperature`
- `names`
- `area`
- `tax_rate`
- `TABLE`

**The following names are NOT valid identifiers for the reason stated**

- `4th` : The first character must be a letter
- `"x"` : Illegal Characters `"`
- `order-no` : Illegal Characters `-`
- `error flag` : Illegal Characters ` <blank space>`

------



**The identifiers `file_manager` and `file_management` are both grammatically valid. Some compilers may be unable to distinguish between them, however, because the first eight letters are the same for each identifier. Therefore, only one of these characters should be used in a single C program.**

------



**A C program is being written to calculate the future value of an investment. The identifiers `value` or `future_value` are appropriate symbolic names. However, `v` or `fv` would probably be too brief since the intended representation of these identifiers is not clear. On the other hand, the identifier `future_value_of_an_investment` would be unsatisfactory because it is too long and cumbersome.**

------



**some valid decimal integer constants are shown below.**

- `0`
- `1`
- `743`
- `5280`
- `32767`
- `9999`

The following decimal integer constants are written incorrectly for the reasons stated.

- `12,245` : illegal character `,`
- `36.0` : illegal character `.`
- `10 20 30` : illegal character `<blank space>`
- `123-45-6789` : illegal character `-`
- `0900` : the first digit cannot be a zero.

------



**some valid octal integer constants are written incorrectly for the reasons stated.**

- `0`
- `01`
- `0743`
- `077777`



The following octal integers constants are written incorrectly for the reasons stated

- `743` : does not begin with a 0
- `05280` : illegal digit `8`
- `0777.777` : illegal character `.`

------



**some valid hexadecimal integer constants are shown below.**

- `0X`
- `0X1`
- `0X7FFF`
- `0xabcd`



The following hexadecimal integer constants are written incorrectly for the reasons stated.

- `0X12.34` : illegal character `.`
- `0BE3B` : does not begin with 0x or 0X.
- `0x.4bff` : illegal character `.`
- `0XDEFG` : illlegal character `G`

------



**some unsigned and long integer constants are shown below.**

| Constant      | Number System               |
| ------------- | --------------------------- |
| `50000U`      | decimal (unsigned)          |
| `123456789L`  | decimal (long)              |
| `123456789UL` | decimal (unsigned long)     |
| `0123456L`    | octal (long)                |
| `0777777U`    | octal (unsigned)            |
| `0X50000U`    | hexadecimal (unsigned)      |
| `0XFFFFUL`    | hexadecimal (unsigned long) |

------



**some valid floating-point constants are shown below.**

- `0.`
- `1.`
- `0.2`
- `827.602`
- `50000.`
- `0.000743`
- `12.3`
- `315.0066`
- `2E-8`
- `0.006e-3`
- `1.6667E+8`
- `.12121212e12`



The following are *not* valid floating-point constants for the reasons stated

- `1`: either a decimal point or an exponent must be present.
- `1,000.0` : illegal character `,`
- `2E+10.2`: the exponent must be an integer quantity (it cannot contain a decimal point)
- `3E 10`: illegal character (blank space) in the exponent.

------



**The quantity 3 X 10 <sup>5</sup> can be represented in C by any of the following floating-point constants.**

- `300000.`
- `3e5`
- `3e+5`
- `3E5`
- `3.0e+`
- `.3e6`
- `0.3E6`
- `30E4`
- `30.E+4`
- `300e3`

------



**some character constants are shown below.**

- `'A'`
- `'x'`
- `'3'`
- `'?'`
- `' '`

------



**some character constants and their corresponding values, as defined by the ASCII characters are shown below**

| constant | value |
| -------- | ----- |
| 'A'      | 65    |
| 'x'      | 120   |
| '3'      | 51    |
| '?'      | 63    |
| ' '      | 32    |

**You can look up the ASCII table [here](http://www.asciitable.com/)**

------



**shown below are some character constants, expressed in terms of escape sequences.**

- `'\n'`
- `'\t'`
- `'\b'`
- `'\''`
- `'\\'`
- `'\"'`

**you can look up the escape sequences in C [here](https://en.wikipedia.org/wiki/Escape_sequences_in_C)**

------



The letter `A` is represented by the decimal value `065` in the ASCII character set. This is equivalent to the octal value `101`. (The equivalent binary bit pattern is `001 000 001`.) Hence the character constant `'A'` can be expressed as the octal escape sequence `'\101'`.

In some versions of C, the letter `A` can also be expressed as a hexadecimal escape sequence. The hexadecimal equivalent of the decimal value `65` is `41`. (The equivalent binary bit pattern is `0100 0001`.) Hence the character constant `'A'` can be expressed as `'\x41'` or `'\X41'`.

It should be understood that the preferred way to represent this character is simply `'A'`. In this form, the character constant is not dependent upon its equivalent ASCII representation.

------



**some string constants are shown below**

- `"green"`
- `"Washington, D.C. 200005"`
- `"123-456-789"`
- `"$12.20"`
- `"THE CORRECT ANSWER IS:"`
- `"2*(I+3)/J"`
- `"        "`
- `"Line 1\nLine 2\nLine 3"`
- `""`

Note that the string constant "Line 1\nLine 2\nLine 3" extends over three lines, because of the newline characters that are embedded within the string. Thus, this string would be displayed as

```
Line 1
Line 2
Line 3
```

Also, note that the string "" is a *null* (empty) string.

------



**The following string constant includes three special characters that are represented by their corresponding escape sequences**

`"\tTo continue, press the \"RETURN" key\n"`

The special characters are `\t` (horizontal tab), `\"` (double quotation marks, which appears twice), and `\n` (newline).

------



The string constant "Line 1\nLine 2\nLine 3" actually contains  38 characters. This includes five blank spaces, four special characters (horizontal tab, two quotation marks and newline) represented by escape sequences, and the null character (\0) at the end of the string.

------



The character constant `'w'` has an integer value of `119` in the ASCII character set. It doe not have a null character at the end. In contrast, the string constant `"w"` actually consists of two characters - the lowercase letter `w` and the null character \0. This constant does not have a corresponding integer value.

------



Suppose that the string "California" is to be stored in a one-dimensional character array called `letter`. Since "California" contains 10 characters, `letter` will be an 11-element array. Thus, `letter[0]` will represent the letter `C`, `letter[1]` will represent `a`, and so on. Note that the last (i.e the 11th) array element, `letter[10]`, represents the null character which signifies the end of the string.

------



**A C program contains the following declarations**

- `int a, b, c;`
- `float root1, root2;`
- `char flag, text[80];`
- `short int a, b, c;`
- `long int r, s, t;`
- `unsigned x, y;`
- `double root1, root2;`
- `long float root1, root2;`
- `int c = 12;`
- `char star = '*';`
- `float sum = 0;`
- `double factor = 0.21023e-6;`
- `char text[] = "Washington";`
- `char text[11] = "Washington";`

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

------



**some simple expressions are shown below**

- `a + b`
- `x = y`
- `c = a + b`
- `x <= y`
- `x == y`
- `++i`
- `i = i + 1`

------



**some expression statements are shown below**

- `a = 3;`
- `c = a + b;`
- `++i;`
- `printf("Area = %f", area);`
- `;`

------



**A typical compound statement is shown below**

```C
{
    pi = 3.141593;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
}
```

------



**The following control statement creates a conditional loop in which several actions are executed repeatedly until the particular condition is satisfied**

```C
while ( count <= n )
{
    printf("x = ");
    scanf("%f", &x);
    sum += x;
    ++count;
}
```

------



A C program contains the following symbolic constant definitions

- `#define TAXRATE 0.23`
- `#define PI 3.141593`
- `#define TRUE 1`
- `#define FASE 0`
- `#define FRIEND "Susan"`

------



## Problems

1. Determine which of the following are valid identifiers. If valid, explain why

   1. `record1`
   2. `$tax`
   3. `name_and_address`
   4. `1record`
   5. `name`
   6. `name-and-address`
   7. `file_3`
   8. `name and address`
   9. `123-45-6789`
   10. `return`

2. Assume that your version of C can recognize only the first 8 characters of an identifier name, though identifier names may be arbitrarily long. Which of the following pairs of identifier names are considered to be identical and which are distinct?

   1. `name, names`
   2. `list1, list2`
   3. `address, Address`
   4. `answer, ANSWER`
   5. `identifier_1, identifier_2`
   6. `char1, char_1`

3. Determine which of the following numerical values are valid constants. If a constant is valid, specify whether it is an integer or real. Also, specify the base for each valid integer constant.

   1. `0.5`
   2. `12345678`
   3. `0515`
   4. `27,822`
   5. `12345678L`
   6. `018CDF`
   7. `9.3e12`
   8. `0.8E+0.8`
   9. `0XBCFDAL`
   10. `9.3e-12`
   11. `0.8E 8`
   12. `0x87e3ha`

4. Determine which of the following are valid character constants.

   1. `'a'`
   2. `'\\'`
   3. `'\0'`
   4. `$`
   5. `\a`
   6. `xyz`
   7. `\n`
   8. `T`
   9. `\052`
   10. `/n`

5. Determine which of the following are valid string constants.

   1. `'8:15 P.M.'`
   2. `"1.3e-12"`
   3. `"Red, White and Blue"`
   4. `"NEW YORK, NY 1200"`
   5. `"Name:`
   6. `"The professor said, "Please don't sleep in class"`
   7. `"Chap. 3 (Con\d)"`

6. Write appropriate declarations for each group of variables and arrays.

   1. Integer variables: `p, q`
   2. Floating-point variables: `x, y, z`
   3. Character variables: `a, b, c`
   4. Floating-point variables: `root1, root2`
   5. Long integer variable: `counter`
   6. Short integer variable: `flag`
   7. Integer variable: `index`
   8. Unsigned integer variable: `cust_no`
   9. Double-precision variables: `gross, tax, net`
   10. Character variables: `current, last`
   11. Unsigned integer variable: `count`
   12. Floating-point variable: `error`
   13. Character variables: `first, last`
   14. 80-element character array: `message`

7. Write appropriate declarations and assign the given initial values for each group of variables and arrays.

   1. Floating-point variables: `a = -8,2f, b = 0.005f`
   2. Integer variables: `x = 129, y = 87, z = -22`
   3. Character variables: `x1 = 'w', c2 = '&'`
   4. Double-precision variables: `d1 = 2.88 x 10^-8, d2 = -8.4 x 10^5`
   5. Integer variables: `u = 711 (octal), v = ffff (hexadecimal)`
   6. Long integer variable: `big = 123456789`
   7. Double-precision: `c = 0.3333333333`
   8. Character variable: `eol = newline character`

8. Explain the purpose of each of the following expressions.

   1. `a - b`
   2. `a * (b + c)`
   3. `d = a * (b + c)`
   4. `a >= b`
   5. `(a % 5) == 0`
   6. `a < (b / c)`
   7. `--a`

9. Identify whether each of the following statements is an expression statement, a compound statement or a control statement.

   1. ```C
      a * (b + c);
      ```

   2. ```C
      while (a < 100)
      {
          d = a * (b + c);
          ++a;
      }
      ```

   3. ```C
      if (x > 0)
          y = 2.0;
      else
          y = 3.0;
      ```

   4. ```C
      {
          ++x;
          if (x > 0)
              y = 2.0;
          else
              y = 3.0;
          printf("%f", y);
      }
      ```

   5. ```C
      {
          ++x;
          if (x > 0)
          {
              y = 2.0;
              z = 6.0;
          }
          else
          {
              y = 3.0;
              z = 9.0;
          }
      }
      ```

   6. 

10. Write an appropriate definition for each of the following symbolic constants, as it would appear within a program.

    | **Constant** | **Text** |
    | :----------: | :------: |
    |    FACTOR    |   -18    |
    |    ERROR     |  0.0001  |
    |    BEGIN     |    {     |
    |     END      |    }     |
    |     NAME     | "Sharon" |
    |     EOLN     |   '\n'   |
    |     COST     | "$19.95" |



------



## Operators and Expressions



1. Suppose that `a` and `b` are integer variables whose values are `10` and `3` respectively. Several arithmetic expressions involving these variables are shown below, together with their resulting values.

   | **Expression** | **Value** |
   | :------------: | :-------: |
   |    `a + b`     |   `13`    |
   |    `a - b`     |    `7`    |
   |    `a * b`     |   `30`    |
   |    `a / b`     |    `3`    |
   |    `a % b`     |     1     |

   Notice that the truncated quotient resulting from the division operation, since both operands represent integer quantities. Also, notice the integer remainder resulting from the use of the modulus operator in the last expression.

   Now suppose that `v1` and `v2` are floating-point variables whose values are `12.5` and `2.0` respectively. Several arithmetic expressions involving these variables are shown below, together with their resulting values.

   | **Expression** | **Value** |
   | :------------: | :-------: |
   |   `v1 + v2`    |  `14.5`   |
   |   `v1 - v2`    |  `10.5`   |
   |   `v1 * v2`    |  `25.0`   |
   |   `v1 / v2`    |  `6.25`   |

   Finally, suppose that the `c1` and `c2` character-type variables that represent the characters `P` and `T`, respectively. Several arithmetic expressions that make use of these variables are shown below, together with their resulting values (based upon the ASCII character set).

   | **Expression**  | **Value** |
   | :-------------: | :-------: |
   |      `c1`       |   `80`    |
   |    `c1 + c2`    |   `164`   |
   |  `c1 + c2 + 5`  |    169    |
   | `c1 + c2 + '5'` |    217    |

   Note that `P` is encoded as (decimal) `80`, `T` is encoded as `84`, and `5` is encoded as `53` in the **[ASCII](http://www.asciitable.com/)** character set.

   If one or both operands represent negative values, then the addition, subtraction, multiplication and division operations will result in values whose signs are determined by the usual roles of algebra. Integer divisions will result in truncation toward zero, i.e, the resultant will always be smaller in magnitude than the true quotient.

   The interpretation of the remainder operation is unclear when one of the operands is negative. Most versions of C assign the sign of the first operand to the remainder. Thus, the condition

   `a = ((a / b) * b) + (a % b)`

   will always be satisfied, regardless of the signs of the values represented by `a` and `b`.

2. Suppose that `a` and `b` are integer variables whose values are `11` and `-3` respectively. Several arithmetic expressions involving these variables are shown below, together with their resulting values.

   | **Expression** | **Value** |
   | :------------: | :-------: |
   |    `a + b`     |    `8`    |
   |    `a - b`     |   `14`    |
   |    `a * b`     |   `-33`   |
   |    `a / b`     |   `-3`    |
   |    `a % b`     |    `2`    |

   If `a` had been assigned a value of `-11` and `b` had been assigned `3`, then the value of `a / b` would still be `-3` but the value of `a % b` would be `-2`. Similarly, if `a` and `b` had both been assigned negative values `(-11 and -3, respectively)`, then the value of `a / b` would be `3` and the value of `a % b` would be `-2`.

   `a = ((a / b) * b) + (a % b)`

   will be satisfied in each of the above cases. Most versions of C will determine the sign of the remainder in this manner, though this feature is unspecified in the formal definition of the language.

3. Here is an illustration of the results that are obtained with floating-point operands having different signs. Let `r1` and `r2` be floating-point variables whose assigned values are `-0.66` and `4.50`. Arithmetic expression involving these variables are shown below, together with their resulting values.

   | **Expression** |  **Value**  |
   | :------------: | :---------: |
   |   `r1 + r2`    |   `3.04`    |
   |   `r1 - r2`    |   `-5.16`   |
   |   `r1 * r2`    |   `-2.97`   |
   |   `r1 / r2`    | `-0.146667` |

   Operands that differ in type may undergo type conversion before the expression takes on its final value. In general, the final result will be expressed in the highest precision possible, consistent with the data types of the operands. The following rules apply when neither operand is `unsigned`.

   - If both operands are floating-point types whose precisions differ(e.g a `float` and a `double`), the lower-precision operand will be converted to the precision of the other operand, and the result will be expressed in this higher precision. Thus, an operation between a `float` and a `double` will result in a `double`, a `float` and `long double` will result in a `long double`. *(Note: In some versions of C, all operands of type `float` are automatically converted to `double`)*.
   - If one operand is a floating-point type (e.g., `float`, `double` or `long double`) and the other is a `char` or an `int` (including `short int` or `long int`), the `char` or `int` will be converted to the floating-point type and the result will be expressed as such. Hence, an operation between an `int` and `double` will result in a `double`.
   - If neither operand is a floating-point type but one is a `long int`, the other will be converted to `long int` and the result will be `long int`. Thus, an operation between a `short int` and an `int` will result in an `int`.
   - If neither operand is a floating-point type or `long int`, then both operands will be converted to `int` (if necessary) and the result will be an `int`. Thus, an operation between a `short int` and an `int` will result in an `int`.

   ------

4. Suppose that `i` is an integer variable whose value is `7`, `f` is a floating-point variable whose value is `5.5`, and `c` is a character-type variable that represents the character `'w'`. Several expressions which include the use of these variables are shown below. Each expression involves operands of two different types. Assume that the ASCII character set is being used.

   |       Expression        |  Value  |       Type       |
   | :---------------------: | :-----: | :--------------: |
   |         `i + f`         | `12.5`  | double-precision |
   |         `i + c`         |  `126`  |     integer      |
   |      `i + c - '0'`      |  `78`   |     integer      |
   | `(i + c) - (2 * f / 5)` | `123.8` | double-precision |

   **Note that** : `'w'` is encode as (decimal) 119 and `0` is encoded as 48 in the **ASCII** character set.

   The value of an expression can be converted to a different data type if desired. To do so, the expression must be preceded by the name of the desired data type, enclosed in parenthesis, i.e,

   `(data type) expression`

   This type of construction is known as a *cast*.

5. Suppose that `i` is an integer variable whose value is `7`, and `f` is a floating-point variable whose value is `8.5`, the expression

   `(i + f) % 4`

   is invalid, because the first operand `(i + f)` is floating-point rather than an integer. However, the expression

   `((int) (i + f)) % 4`

   forces the first operand to be an integer and is therefore valid, resulting in the integer remainder `3`.

   **Note that**: the explicit type specification applies only to the first operand, not the entire expression.

   The data type associated with the expression itself is not changed by a vast. Rather, i tis the *value* of the expression that undergoes type conversion wherever the cast appears. This is particularly relevant when the expression consists only of a single variable.

6. The arithmetic expression 

   `a - b / c * d`

   is equivalent to the algebraic formula `a - [(b / c) x d]`. Thus, if the floating point variables `a, b, c and d` have been assigned the values `1.`, `2.`, `3.` and `4.` respectively, the expression would represent the value `-1.666666...` since 

   `1.-[(2. / 3.) x 4.] = 1. - [0.666666... x 4.] = 1. - 2.666666... = -1.666666...`

   Notice that the division is carried out first, since this operation has a higher precedence than subtraction. The resulting quotient is then multiplied by `4.`, because of left-to-right associativity. The product is then subtracted from `1.`, resulting in the final value of `-1.666666...`.

   The natural precedence can be altered through the use of parentheses, thus allowing arithmetic operations within an expression to be carried out in any desired order. In fact, parentheses can be *nested*, one pair within another. In such cases the innermost operations are carried out first, then the innermost operations, and so on.

7. The arithmetic expression

   `(a - b) / (c * d)`

   is equivalent to the algebraic formula `(a - b) / (c x d)`. Thus, if the floating-point variables `a, b, c and d` have been assigned the values `1., 2., 3., 4.`, respectively, the expression would represent the value `--0.0833333...`, since 

   `(1. - 2.) / (3. x 4.) = -1. / 12. = -0.0833333...`

   Sometimes, it is a good idea to use the parentheses to clarify an expression, even though the parentheses may not be required. On the other hand, the use of overly complex expressions, such as that shown in the next example, should be avoided if at all possible. Such expressions are difficult to read, and they are often written incorrectly because of unbalanced parntheses.

8. Consider the arithmetic expression

   `2 * ((i % 5) * (4 + (j - 3) / (k + 2)))`

   where `i`, `j` and `k` are integer variables. If these variables are assigned the values `8`, `15` and `4` respectively, then the given expression would be evaluated as

   `2 x ((8 % 5) x (4 + (15 - 3) / (4 + 2))) = 2 x (3 x (4 + (12 / 6))) = 2 x ( 3 x ( 4 + 2)) = 2 x (3 x 6) = 2 x 18 = 36`

   Suppose the value of this expression will be assigned to the integer variable `w` i.e.,

   `w = 2 * ((i % 5) * (4 + (j - 3) / (k + 2)))`

   It is generally better to break this long arithmetic expression up into several shorter expression, such as

   `u = i % 5;`

   `v = 4 + (j - 3) / (k + 2);`

   `w = 2 * ( u * v);`

   Where `u` and `v` are integer variables. These equivalent expressions are much more likely to be written correctly than the original lengthy expression.

9. **Here are some examples which illustrate the use of the unary minus operation**

   * `-743`
   * `-0XFFF`
   * `-0.2`
   * `-5E-8`
   * `-root1`
   * `-(x + y)`
   * `-3 * ( x + y )`

   In each case the minus sign is followed by a numerical operand which may be an integer constant, a floatin-point constant, a numeric variable or an arithmetic expression.

   THere are two other commonly user unary operators. The *increment operator*, `++`, and the *decrement operator*, `--`. The increment operator causes its operand to be increased by `1`, whereas the decrement opertor causes its operand to be decreased by `1`. The operand used with each of those operators must be a single variable.

10. Suppose that `i` is an intger variable that has been assigned a value of `5`. The expression `++i`, which is equivalent to writing `i = i + 1`, causes the value of `i` to be increased to `6`. Similarly, the expression `--i`, which is equivalent to to `i = i - 1`, causes the (original) value of `i` to be decreased to `4`.

11. A C program includes an integer variable `i` whose initial value is `1`. Suppose the program includes the following three `printf` statements,

    1. `printf("i = %d\n", i);`
    2. `printf("i = %d\n", ++i);`
    3. `printf("i = %d\n", i);`

    These `printf` statements will generate the following three lines of output. 

    ```
    i = 1
    i = 2
    i = 2
    ```

    The first statement causes the original vlaue of `i` to be displayed. The second statement increments `i` and then displays its value. The final value of `i` is displayed by the last statement.

    Now suppose that the program includes the follwoing three `printf` statements, rather than the three statements given above.

    1. `printf("i = %d\n". i);`
    2. `printf("i = %d\n", i++);`
    3. `printf(i = %d\n", i);`

    The first and third statements are identical to those shown above. In the second statement, the unary operator follows the integer variable rather than preceeds it.

    These statements will generate the following three lines of output.

    ```
    i = 1
    i = 1
    i = 2
    ```

    The first statement cause the original value of `i` to be displayed. The second statement causes the current value of `i`(`1`) to be displayed and then incremented (to `2`). The final value of i(`2`) is displayed by the last statement.

    Simply note the distinction between the expression `++i` in the first group of statements, and the expression `i++` in the second group.

    Another unary operator that is worth mentioning at this time is the `sizof` operator. This operator returns the size of its operand, in bytes. The `sizeof` always preced its operand. THe operand may be an expression, or it may be a cast.

    Elementary progrms rarely make use of the `sizeof` operator. However, this operator allows a determination of the number of bytes allocated to various types of data items. This information can be very useful when transferring a program to a different computer or to a new version of C. It is also used for dynamic memory allocation.

12. Suppose that `i` is an integer variable, `x` is  a floating-point variable, `d` is a double-precision variable, and `c` is a character type variable. The statements

    1. `printf("integer : %d\n", sizeof i);`
    2. `printf("float : %d\n", sizeof x);`
    3. `printf("double : %d\n", sizeof d);`
    4. `printf("character : %d\n", sizeof c);`

    might generate the following output (*it works on my computer* :laughing: )

    ```
    integer : 4
    float : 4
    double : 8
    character : 1
    ```

    Thus, we see that this version of C allocates 4 bytes to each integer quantity, 4 bytes to each floating-point quantity, 8 byte to each double precision quantity and 1 byte to each character. These values may vary from one version of C to another.

    Another way to generate the same information is to use a cast rather than a variable within each `printf` statement, Thus, the `printf` statements could have been written as

    1. `printf("integer : %d\n", sizeof (integer));`
    2. `printf("float : %d\n", sizeof (float));`
    3. `printf("double : %d\n", sizeof (double));`
    4. `printf("character : %d\n", sizeof (char));`

    These `printf` statements will generate the same output as that shown above. Note that each cast is enclosed in parentheses.

    Finally, consider the array declaration

    `char text[] = "Shaktimaan";`

    The statement

    `printf("Number of characters = %d", sizeof text);`

    will generate the following output

    ```
    Number of characters = 11
    ```

    Thus we see that the array `text` contains 11 characters.

    A *cast* is also considered to be a unary operator. In general terms, a reference to the cast operator is written as `(type)`. Unary operators have a higher precedence than arithmetic operators. Hence, if a unary minus operator acts upon an arithmetic expression that contains one or more arithmetic operators, the unary minus operation will be carried out first (unless, of course the arithmetic expression is enclosed in parentheses). Also, the associativity of the unary operators is right to left, though consecutive unary operators rarely appear in elementary programs.

13. Suppose that `x` and `y` are integer variables whose values are `10` and `20` respectively. The values of the expression `-x + y` will be `-10 + 20 = 10`. Note that the unary minus operation is carried out before the addition. Now suppose that parentheses are introduced, so that the expression becomes  

    `-(10 + 20)`. The value of this expression is `-(10 + 20) = -30`. Note that the addition now *precedes the unary minus operation*.

14. Suppose that `i`, `j`, and `k` are integer variables whose values are `1`, `2` and `3`, respectively. Several logical expressions involving these variables are shown below

    |     Expression      | Interpretation | Value |
    | :-----------------: | :------------: | :---: |
    |       `i < j`       |     `true`     |  `1`  |
    |   `(i + j) >= k`    |     `true`     |  `1`  |
    | `(j + k) > (i + 5)` |    `false`     |  `0`  |
    |      `k != 3`       |    `false`     |  `0`  |
    |      `j == 2`       |     `true`     |  `1`  |

    When carrying out relational and equality operations, operands that differ in type will be converted in accordance with the rules.

15. Suppose that `i` is an integer variable whose value is `7`, `f` is a floating-point variable whose value is `5.5f` and `c` is a character variable that represents the character `'w'`. Some logical expressions that make use of these variables are shown below. Each expression involves two different type operands

    |      Expression      | Interpretation | Value |
    | :------------------: | :------------: | :---: |
    |       `f > 5`        |     `true`     |  `1`  |
    |   `(i + f) <= 10`    |    `false`     |  `0`  |
    |      `c == 119`      |     `true`     |  `1`  |
    |      `c != 'p'`      |     `true`     |  `1`  |
    | `c >= 10  * (i + f)` |    `false`     |  `0`  |

    In addition to the relational and equality operators, C contains two *logical operators*

    | Operator | Meaning |
    | :------: | :-----: |
    |   `&&`   |  `and`  |
    |   `||`   |  `or`   |

    These operators are referred to as *logical and* and *logical or*, respectively.

    The logical operators act upon operands that are themselves logical expressions. The net effect is to combine the individual logical expression into more complex conditions that are either true or false. The result of a *logical and* operation will be true only if both operands are true, whereas the result of a *logical or* operation will be true if either operand is true or if both operands are true. In other words, the result or a *logical or* operation will be false only if both operands are false.

    In this context it should be pointed out that *any* nonzero value, not just `1`, is interpreted as true.

## Problems

1. Suppose `a`, `b` and `c` are integer variables that have been assigned the values `a = 8`, `b = 3` and `c = -5`. Determine the value of each of the following arithmetic expressions.

   1. `a + b + c`
   2. `2 + b + 3 * (a - c)`
   3. `a / b`
   4. `a & b`
   5. `a / c`
   6. `a % c`
   7. `a * b + c`
   8. `a * (b / c)`
   9. `(a * c) % b`
   10. `a * ( c % b)`

2. Suppose `x`, `y` and `z` are floating-point variables that have been assigned the values `x = 8.8`, `y = 2.5` and `z = -5.2`. Determine the value of each of the following arithmetic expressions

   1. `x + y + z`
   2. `2 * y + 3 * ( x - z)`
   3. `x / y`
   4. `x % y`
   5. `x / (y + z)`
   6. `(x / y) + z`
   7. `2 * x / 3 * y`
   8. `2 * x / (3 * y)`

3. Suppose `c1`, `c2` and `c3` are character-type variables that have been assigned the characters `E`, `5` and `?` respectively. Determine the numerical value of the following expressions, based upon the ASCII character set.

   1. `c1`
   2. `c1 - c2 + c3`
   3. `c2 - 2`
   4. `c2 - '2'`
   5. ``c3 + '#'`
   6. `c1 % c3`
   7. `'2' + '2'`
   8. `(c1/ c2) * c3`
   9. `3 * c2`
   10. `'3' * c2`

4. A C program contains the following declarations:

   1. `int i, j;`
   2. `long ix;`
   3. `short s;`
   4. `float x;`
   5. `double dx;`
   6. `char c;`

   Determine the data type of each of the following expressions

   1. `i + c`
   2. `x + c`
   3. `dx + x`
   4. `((int) dx) + ix`
   5. `i + x`
   6. `s + j`
   7. `ix + j`
   8. `s + c`
   9. `ix + c`

5. A C program contains the following declarations and initial assignments:

   1. `int i = 8, j = 5;`
   2. `float x = 0.005, y = -0.01;`
   3. `char c = 'c', d = 'd';`

   Determine the value of each of the following expressions. Use the values initially assigned to the variables for each expression.

   1. `(3 * i - 2 * j) % (2 * d - c)`
   2. `2 * ((i / 5) + ( 4 * (j - 3)) % (i + j - 2))`
   3. `(i - 3 * j) % (c + 2 *d) / (x - y)`
   4. `-(i + j)`
   5. `++i`
   6. `i++`
   7. `--j`
   8. `++x`
   9. `y--`
   10. `i <=j`
   11. `c > d`
   12. `x >= 0`
   13. ` x < y`
   14. ` j != 6`
   15. `c == 99`
   16. `5 * (i + j) > 'c'`
   17. `(2 * x + y) == 0` 
   18. `2 * x + (y == 0)`
   19. `2 * x + y == 0`
   20. `!(i <= j)`
   21. `!(c == 99)`
   22. `!(x > 0)`
   23. `(i > 0) && (j < 5)`
   24. `(i > 0) || (j < 5)`
   25. `(x > y) && ( i > 0) || (j < 5)`
   26. `(x > y) && (i > 0) && (j < 5)`

6. A C program contains the following declarations and initial assignments:

   1. `int i = 8, j = 5, k;`
   2. `float x = 0.005, y = -0.01, z;`
   3. `char a, b, c = 'c', d = 'd';`

   Determine the value of each of the following assignment expressions. Use the values originally assigned to the variables for each expression.

   1. `k = (i + j)`
   2. `z = (x + y)`
   3. `i = j`
   4. `k = (x + y)`
   5. `k = c`
   6. `z = i / j;`
   7. `a = b =d`
   8. `i = j = 1.1`
   9. `z = k = x`
   10. `k = z = x`
   11. `i += 2`
   12. `y -= x`
   13. `x *= 2`
   14. `i /= j`
   15. `i %= j`
   16. `i += (j - 2)`
   17. `k = (j == 5) ? i : j`
   18. `k = (j > 5) ? i : j`
   19. `z = ( x >= 0) x : 0`
   20. `z = (y >= 0) ? y : 0`
   21. `a = (c < d) ? c : d`
   22. `i -= (j > 0) ? j : 0`

7. Each of the following expressions involves the use of a library function. Try them out!

   Google the prototype of the function and check what is the return type of the function and also what is the parameter list. (data type of each parameter and number of total parameters)

   1. `abs(i - 2 * j)`
   2. `fabs(x + y)`
   3. `isprint(c)`
   4. `isdigit(c)`
   5. `toupper(c)`
   6. `ceil(x)`
   7. `floor(x + y)`
   8. `islower(c)`
   9. `isupper(j)`
   10. `exp(x)`
   11. `log(x)`
   12. `sqrt(x*x + y*y)`
   13. `isalnum(10 * j)`
   14. `isalpha(10 * j)`
   15. `isascii(10 * j)`
   16. `fmod(x, y)`
   17. `tolower(65)`
   18. `pow(x - y, 3.0)`
   19. `sin(x - y)`
   20. `strlen("hello\0")`
   21. `strpos("hello\0", 'e')`

   [Here's](https://doc.bccnsoft.com/docs/cppreference_en/all_c_functions.html) a handy guide to all the function in C.

8. A C program contains the following declarations and initial assignments :

   1. `int i = 8, j = 5;`
   2. `double x = 0.005, y = -0.01;`
   3. `char c - 'c', d = 'd';`

   Determine the value of each of the following expressions, which involve the use of library functions.

   1. `abs(i - 2 * j)`
   2. `fabs(x + y)`
   3. `isprint(c)`
   4. `isdigit(c)`
   5. `toupper(d)`
   6. `ceil(x)`
   7. `ceil(x + y)`
   8. `floor(x)`
   9. `floor(x + y)`
   10. `islower(c)`
   11. `isupper(j)`
   12. `exp(x)`
   13. `log(x)`
   14. `log(exp(x))`
   15. `sqrt(x*x + y*y)`
   16. `isalnum(10 * j)`
   17. `isaplha(10 * j)`
   18. `isascii(10 * j)`
   19. `toascii(10 * j)`
   20. `fmod(x, y)`
   21. `tolower(65)`
   22. `pow(x - y, 3.0)`
   23. `sin(x - y)`
   24. `strlen("hello\0")`
   25. `strpos("hello\0", 'e')`
   26. `sqrt(sin(x) + cos(y))`