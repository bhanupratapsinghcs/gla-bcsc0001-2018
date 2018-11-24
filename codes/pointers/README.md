# Important points about pointers

* *The data type of a pointer is different from the type of the variable it points to.* If the latter is of type `char`, then the type of a correctly defined pointer is `char *`, i.e., pointer to char. Also, the data type of a variable or constant an be transformed into the data type of the pointer using a cast. For instance, the expression `(int *) 32567` transforms an `int` to a pointer to int.

  * ```C
    #include <stdio.h>
    int main()
    {
        char *pointer;
        //	This is a pointer to char.
        return 0;
    }
    ```

* *The size of a pointer is generally fixed and doesn't depend on the size of the object it points to*. A pointer, being an address, represents an integer value that is wide enough to address every byte of memory on a machine. Exceptions notwithstanding, a pointer has the same size as the native word length, which often has the size of an `int`. But the pointer itself is not an `int`.

  * ```C
    #include <stdio.h>
    int main()
    {
        int a = 10;
        int *p = &a;
        printf("Size of a = %d, size of *p = %d\n", sizeof a, sizeof *p);
        return 0;
    }
    ```

* *A pointer can be assigned the value 0*. The address 0 is also represented by the symbolic constant `NULL`, and a pointer that has this value is known as a **null pointer**. C guarantees that the address `NULL` can never point to an object used by the program.

  * 

    ```C
    #include <stdio.h>
    int main()
    {
        int a = 10;
        printf("Address of a is %x\n", &a);
        int *p = NULL;
        int *q = &a;
        printf("The address pointer p points to is %p\n", p);
        printf("The address pointer q points to is %p\n", q);
        return 0;
    }
    ```

* *An uninitialized or null pointer must not be dereferenced*. An uninitialized pointer contains a garbage value which may point to a memory location that is not accessible by your program. Your program may either behave unpredictably or terminate abnormally is such a pointer is dereferenced.

  * ```C
    #include <stdio.h>
    int main()
    {
        int *p;
        int *q = NULL;
        printf("Value of p = %d\n", *p);
        printf("value of q = %d\n", *q);
        //	This is just shown for demonstration
        //	This should NEVER be done in practice!
        return 0;
    }
    ```

* *Adding 1 to a pointer variable doesn't necessarily add 1 to the value stored by the pointer.* The result depends on the data type of the pointer. If a pointer stores the address 1000, then adding 1 to it results in 1001 for a pointer of type char *, 1004 for int * and 1008 for float *. This addition belongs to the realm of pointer arithmetic, which forms the basis of the relationship between pointers and arrays.

  * ```C
    #include <stdio.h>
    int main()
    {
        int a = 10;
        int *p = &a;
        printf("Address : %d\n", p);
        printf("Value : %d\n", *p);
        p++;
        (*p)++;
        printf("New Address : %d\n", p);
        printf("New Value : %d\n", *p);
        return 0;
    }
    ```

* *A pointer can snap its current link and point to another variable*. For instance, if a pointer `p` points to the variable `x`, and you are done with `x`, then you can use the same pointer to point to another variable `y`.

  * ```C
    #include <stdio.h>
    int main()
    {
        int a = 10, b = 20;
        printf("Address of a = %x, b = %x\n", &a, &b);
        int *p = &a;
        printf("P points to %p\n", p);
        p = &b;
        printf("Now p points to %p\n", p);
        return 0;
    }
    ```

* *A pointer variable can be assigned to another pointer variable provided they are of the same type*. In the following example, 

  ```C
  #include <stdio.h>
  int main()
  {
      int x = 10;
  	int *p = &x;
  	int *q = p;
      printf("Address of x = %x\n", &x);
      printf("P points to %p\n", p);
      printf("Q points to %p\n", q);
      return 0;
  }
  ```



* *A pointer can point to another pointer*. This property is implicitly exploited in a multi-dimensional array or an array of pointers to strings. The pointer pointed to can, in turn, point to another pointer, and so on.

