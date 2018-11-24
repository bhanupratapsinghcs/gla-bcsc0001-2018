# Worksheet 8

1. Write a function in C named **SumFun()**, with arguments `n` and `N`, which returns the sum of the following series.

   ![](https://latex.codecogs.com/gif.latex?$$1-\frac{x^2}{2}+\frac{x^3}{3}-\frac{x^4}{4}+\frac{x^5}{5}-\frac{x^6}{6}+...+\frac{x^n}{N}$$)

2. Write a function in C that converts a 2-digit `octal` number to `binary` number and prints the binary equivalent.

3. Write a function in C named **SumSequence()** with two arguments `double x` and `int n`. The function should return a value of type `double` and it should perform sum of the following series:

   ![](https://latex.codecogs.com/gif.latex?$$1-\frac{x}{1!}+\frac{x^2}{3!}-\frac{x^3}{5!}+\frac{x^4}{7!}...$$)

   up to n terms.

   **Note:** The symbol `!` represents *factorial* of a number i.e, `5! = 5 * 4 * 3 * 2 * 1`.

4. Write a function in C named **SumSum()** having parameters `X` of type `double` and `n` of type `int` with a result type as `double` to find the sum of the series given below.

   ![](https://latex.codecogs.com/gif.latex?$$X+\frac{X^2}{3!}+\frac{X^3}{5!}+...+\frac{X^n}{(2N-1)!}$$)

5.   Write a function that takes the time as three integer arguments (hours, minutes and seconds) and returns the number of seconds since the clock last "struck 12". Use this function to write a program to calculate the amount of time in seconds between two times, both of which are within one 12-hour cycle of the clock.

6.  Write a program to find the **LCM** and **GCD** of two numbers (using two functions).

7.  Write a program in C to print the sum of the following sequence

   ![](https://latex.codecogs.com/gif.latex?$$1+\frac{1}{1!}+\frac{2}{2!}+\frac{3}{3!}+...$$)

8.  Write program in C to print the sum of the following sequence

   ![](https://latex.codecogs.com/gif.latex?$$1+\frac{x}{1!}+\frac{x^3}{2!}+\frac{x^5}{3!}+\frac{x^7}{4!}+...+\frac{x^{2n-1}}{n!}$$)

9.  Write a program in C having two value parameters `U` and `n` with result type `float` to find the sum of the series given below:

   ![](https://latex.codecogs.com/gif.latex?$$1-U+\frac{1}{2!}U^2-\frac{1}{3!}U^3+\frac{1}{4!}U^4+...\pm\frac{x^{2m-1}}{m!}$$)

10.  Raising a number `n` to a power `p` is the same as multiplying the `n` by itself `p` times. Write a function caller **power** that takes two arguments, a double value for `n` and int value for `p`, and returns the result as a double value. Use default argument of 2 for `p`, so that if this argument is omitted that number will be squared. Write the main function that gets value from the user to test power function.
