# Worksheet 20

1. Write a function in C which accepts an integer array and its size as parameters and rearranges the array in reverse.

2. Write a function in C which accepts an integer array and its size as arguments and replaces elements having even values with its half and elements having odd values with twice its value.

3. Write a function in C to print the product of each row of a two dimensional array (int) passed as the argument of the function.

4. Write a function in C **change()** which accepts an array of integers and its size as arguments and divide all those array elements by 7 which are divisible by 7 and multiply other array elements by 3.

5. Write a function in C which accepts an integer array and its size as arguments / parameters and exchanges the values of first half side elements with the second half side elements of the array.

6. Write a function in C which accepts an integer array and its size as arguments  and assign the elements into a two dimensional array of integers in the following format

   ```
   if the array is 1, 2, 3, 4, 5, 6
   1 2 3 4 5 6
   1 2 3 4 5 0
   1 2 3 4 0 0
   1 2 3 0 0 0
   1 2 0 0 0 0
   1 0 0 0 0 0
   ```

     

7. Given two arrays A and B, copy last 5 elements of B after first 5 elements of A. Assume length of A and B is greater than 5. Write a program in C for the problem stated.

8. Write a function in C **col_sum()** to find the sum of each column of a *n x m* matrix.

9. Write a function in C that would accept a 1-D array `numbers[]` and its size `n`. The function should rearrange the array in such a way that the values of alternate locations of the array are exchanged. (assume that n is even).

   For example, if the array is `2, 5, 9, 14, 17, 8, 19, 16`, then after the rearranging, the array should be `5, 2, 14, 9, 8, 17, 16, 19`

10. Write a function in C **reverse_n()** 

    `void reverse_n(int a[], int n);`

    The function should reverse the first `n` elements of the array. For example, the call 

    `reverse(a, 5);` should transform the array `[2, 3, 4, 5, 6, 7, 8, 9] ` into `[6, 5, 4, 3, 2, 7, 8, 9]`.