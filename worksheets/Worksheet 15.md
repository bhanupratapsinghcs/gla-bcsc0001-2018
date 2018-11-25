# Worksheet 15

1. Write a function in C that takes two **int** arguments and returns reference of the **odd** number out of the two. If both the arguments are odd, then the reference of the smaller one is returned.
2. Write a function in C having this prototype : **int replace(char * tring, char ch1, char ch2);**. Have the function replace every occurrence of **ch1** in the string with **ch2**, and have the function return the number of replacements it makes.
3. Write a function in C to sum `n` natural numbers starting from a given number.
4. Write a function in C to find least common divisor of two integers.
5. Write a function in C that compares two string and returns 0 if the two strings are equal and `-1` if the strings are unequal.
6. Write a program in C that reads a **float** array having 15 elements. The program uses a function **reverse()** to reverse this array. Make suitable assumptions wherever required.
7. Write a program in C that invokes a function **satis()** to find whether four integers *a, b, c, d* sent to **satis()** satisfy the equation ![](https://latex.codecogs.com/gif.latex?$$a^3+b^3+c^3=d^3$$) or not. The function **satis()** returns `0` if the above equation is satisfied with the given four numbers otherwise it returns `-1`.
8. Write a program in C that uses a function called **area()** to calculate area of a circle. The function **carea()** receives radius of **float** type and returns area of **double type**. The function **main()** gets a radius value from the user, calls **carea()**, and displays the result. The function **carea()** is local to **main()**.
9. Write a program in C that uses a function **smallo()** (that is passed two **int** argument by value) to receive reference of the smaller value. Then using this reference the smaller value is set to `0`. Write a *main()* function also to exercise this function.
10. Write a program in C that uses following instructions:
    1. **sqlarge()** that is passed two **int** arguments by reference and then sets the larger of the two numbers to its square.
    2. **sum()** that is passed an **int** argument by value and that returns the sum of the individual digits of the passed number.
    3. **main()** that exercises above two functions by getting two integers from the user and by printing the sum of the individual digits of the square of the larger number.