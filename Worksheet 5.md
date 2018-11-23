# Worksheet 5

**What will be the output of the following programs?**

1. ```c
   #include <stdio.h>
   int main()
   {
       two:
       goto one;
   	printf("one");
       goto two;
   	one:
   	printf("two");
       return 0;
   }
   ```

2. ```c
   #include <stdio.h>
   int main()
   {
   	int i = 2;
   	for ( ; ; i++ )
   	{
   		if ( i % 2 == 0 ) 
   		{
   			continue;
   		}
   		else
   		{
   			printf("helloworld", i);
   			break;
   		}
   	}
       return 0;
   }
   ```

3. ```c
   #include <stdio.h>
   int main()
   {
   	int i = 2;
   	for ( ; ; ) 
       {
   		if ( i % 2 == 0 )
   		{
   			continue;
   		}
   		else
           {
   			break;
   		}
   		printf("helloworld",i);
   	}
       return 0;
   }
   ```

4. ```c
   #include <stdio.h>
   int main()
   {
       int i = 2;
   	one:
   	two:
   	for ( ; ; i++ )
       {
   		if ( i % 2 == 0 ) 
           {
   			goto one;
   			printf("%d", i);
   		}
   		else
           {
   			break;
               goto two;
   			printf("%d", i);
   		}
   	}
   	return 0;    
   }
   ```

5. ```c
   #include <stdio.h>
   int main()
   {
   	three:
   	goto one;
   	printf("1");
   	one:
   	goto two;
   	printf("2");
       goto one;
   	two:
   	printf("3");
   	goto three;
   	return 0;    
   }
   ```

6. ```c
   #include <stdio.h>
   int main()
   {
       goto one;
       printf("1");
   	one:
   	goto two;
   	printf("2");	
       goto one;
       two:
   	printf("3");
   	return 0;    
   }
   ```

7. ```c
   #include <stdio.h>
   int main()
   {
   	int i = 5;
       for ( ; --i ; )
       {
           printf("%d", i);
       }
       return 0;
   }
   ```

8. 

   ```c
   #include <stdio.h>
   int main()
   {
       int i = 5;
       for ( ;  i-- ; )
       {
           printf("%d", i);
       }
       return 0;
   }
   ```

9. ```c
   #include <stdio.h>
   int main()
   {
       int i = 5;
       for ( ; i++ ; )
       {
           printf("%d", i);
           if ( i % 5 == 0 )
           {
               break;
           }
       }   
       return 0;
   }
   ```

10. ```c
    #include <stdio.h>
    int main()
    {
    	int i = 5;
        for ( ; i ; ++i )
        {
            printf("%d", i);
            if ( i % 5 != 0 ) 
            {
                continue;
                break;
            }
            else
            {
                break;
                continue;
            }
        }   
        return 0;
    }
    ```

11. ```c
    #include <stdio.h>
    int main()
    {
        int i = 5;
        do
        {
            printf("%d ", i);
        } while (--i);
        return 0;
    }
    ```

12. ```c
    #include <stdio.h>
    int main()
    {
        int i = 5;
        do
        {
            printf("%d", i);
        } while (--i);
        return 0;
    }
    ```

13. ```c
    #include <stdio.h>
    int main()
    {
        int i = 5;
        do
        {
            printf("%d", i);
        } while (i--);
        return 0;
    }
    ```

14. ```c
    #include <stdio.h>
    int main()
    {
        int i = 5;
     	do;
     	while (i--);
     	printf("%d", i); 
        return 0;
    }
    ```

15. ```c
    #include <stdio.h>
    int main()
    {
        int i = 5;
     	do
     	while (i--);
     	printf("%d", i); 
        return 0;
    }
    ```

16. ```c
    #include <stdio.h>
    int main()
    {
    	int count = 5;
    	while (count >= 5)
    	{
    		for ( int i = 1 ; i < count ; i++ , count-- )
    		{
    			printf("%d", count);
    		}
    	}
    	return 0;
    }
    ```

17. ```c
    #include <stdio.h>
    int main()
    {
    	int count = 9;
    	while (count >= 9)
        {
    		for ( int i = 1 ; i < count ; i++ , count-- )
            {
    			printf("%d",count);
    		}
    	}
        return 0;
    }
    ```

18. ```c
    #include <stdio.h>
    int main()
    {
    	int i = 5;
    	while (--i);
    		printf("one");
    	printf("%d", i);
        return 0;
    }
    ```

19. ```c
    #include <stdio.h>
    int main()
    {
    	int i = 5;
    	while (--i)
    		printf("one");
    	printf("%d",i);
        return 0;
    }
    ```

20. ```c
    #include <stdio.h>
    int main()
    {
    	int i = 5;
    	goto one;
    	while (i--)
    	one:
    	printf("one");
    	printf("%d", i);
        return 0;
    }
    ```

21. ```c
    #include <stdio.h>
    int main()
    {
    	int i = 5;
    	goto one;
    	break;
    	one:
    	printf("%d",i);
    	--i;
        return 0;
    }
    ```
