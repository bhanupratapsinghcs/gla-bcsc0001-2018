# Worksheet 19

1. Write a program in C to swap the values of two numbers using pointers and a function.

2. Write a program in C to encode a string that is passed to it. The string should get  converted into an unrecognizable form. **Hint**: You may change the ASCII code of the constituent characters by adding or subtracting a constant number from the original ASCII values of the constituent characters.

3. Write a program in C to decode the string obtained from the program stated in above problem.

4. Write a function in C having the prototype

   `int replace(char *s, char c1, char c2)`

   have the function replace every occurrence of `c1` in the string `s` with `c2`, and have the function return the number of replacements it makes.

5. Suppose `A, B and C` are arrays of integers of sizes `m, n and m + n` respectively. The numbers in array `A` appear in ascending order. In the array  `B`, the numbers appear in descending order. Write a program in C to produce a third array `C`, containing all the data elements of arrays `A` and `B` in ascending order.

6.  Write a program in C to find the number of prim numbers < = N where accept N from the user. Use the method of **Sieve of Eratosthenes** to find prime numbers.

   **Sieve of Eratosthenes**

   To get the prime numbers in the range 2 .. N, you can use a simple and interesting method known as **Sieve of Eratosthenes**. It works as follows :

   You can view a nice preview [here](https://upload.wikimedia.org/wikipedia/commons/b/b9/Sieve_of_Eratosthenes_animation.gif)

   Sequentially write down the integers from 2 to the highest number `n` you wish to include in the table. Cross out all the numbers > 2 which are divisible by 2 (every second number). Find the smallest remaining number > 2. It is 3. So cross out all numbers > 3 which are divisible by 3 (every third number). Find the smallest remaining number > 3, it is 5. So cross out all the numbers > 5 which are divisible by 5 (every fifth number).

   Continue until you have crossed out all the numbers divisible by ![](https://latex.codecogs.com/gif.latex?$$\left\lfloor{\sqrt{n}}\right\rfloor$$) (i.e. the floor value of sqrt(n)).The numbers remaining are prime. This procedure is illustrated in the GIF link above.

7. Write a program in C that obtains the rotation factor and rotates the array as per it. For example, if the array is `1, 2, 3, 4, 5, 6, 7` and the rotation factor is `2`, then array's elements will shift right by 2 elements and the last two elements will rotate and come to positions 1 and 2 i.e., array will be `6, 7, 1, 2, 3, 4, 5`.

8. Write a program in C that sorts an array of integers in the basis of digits at one's place e.g., if the array was `23, 45, 62, 19` then after sorting, it becomes `62, 23, 45, 19`.

9. Write a program in C that reads a string/line of text and displays the string with each pair of adjacent letters reversed in individual words. For example, if the line of text entered is "hello there", then it should print "ehllo htree".

10. Write a function in C **get2from1()** to transfer the contents of an array `all[]` to two different arrays `even[]` and `odd[]`. The `odd[]` array should contain the values from odd positions (1, 3, 5, ...) of `all[]` and `even[]` array should contain the values from `even[]` positions (0, 2, 4, ...) of `all[]`.