# Worksheet 2

**What will be the output of the following code?**

1. ```C
   int main()
   {  
   	float a;
   	a = 2 * 3 + 4 % 5 - 3 / 2 / 6;
   	printf("%f ", a);
      	return 0;
   }
   ```

2. ```C
   int main()
   {
       float a;
   	a = 14 % 5 / 3;
   	printf("%f ", a);
       return 0;
   }
   ```

3. ```C
   int main()
   {
       printf("%f  %f  %f  %f", 6 / 5, -6 / 5, 6 / -5, -6 / -5);
       return 0;
   }
   ```

4. ```c
   int main()
   {
       printf("%f  %f  %f  %f", 6.0 % 5, -6.0 % 5, 6.0 % -5, -6.0 % -5);
       return 0;
   }
   ```

5. ```c
   int main()
   {
   	int a = 23, b = 12, c = 10, d = 15;
   	c = a = b;
   	printf("%d %d %d %d", a = b, b = c, c = d, d);
       return 0;
   }
   ```

6. ```c
   int main()
   {
       int a = 10, b = 3, c = 5, d = 10;
   	d = a < b < c;
   	printf("%d", d);
       return 0;
   }
   ```

7. ```c
   int main()
   {
       int a = 10, b = 10, c = 30;
       c = a == b;
   	printf("%d %d %d", a, b, c);
       return 0;
   }
   ```

8. ```c
   int main()
   {
       int a = 10, b = 20, c = 30;
   	c == a == b;
   	printf("%d %d %d", a, b, c);
       return 0;
   }
   ```

9. ```c
   int main()
   {
       int a = 012, b = 034;
   	int x = 0x12, y = 0x34;
   	int c, d, u, v;
   	c = a && b;
   	d = a || b;
   	u = x && y;
   	v = x || y;
   	printf("%o %o %x %x", c, d, u, v);
   	return 0;
   }
   ```

10. ```c
    int main()
    {
        int a = 012, b = 034;
    	int x = 0x12, y = 0x34;
    		int c,d,u,v;
    		c=a&b;
    		d=a|b;
    		u=x&y;
    		v=x|y;
    		printf("%o %o %x %x",c,d,u,v);
    		return 0;
    }
    ```

11. ```c
    int main()
    {
        int c = 10, d = 20, e = 30;
        d = !e;
    	e = ~d;
    	printf("%d %d", d, e);
    }
    ```

12. ```c
    int main()
    {
        int c = 10, d = 20, e = 30;
        d = !d;
    	e = ~e;
    	printf("%d %d", d, e);
    }
    ```

13. ```c
    int main()
    {
        int i = 0;
    	printf("%d" ,++i * ++i);
    	return 0;
    }
    ```

14. ```c
    int main()
    {
        int i=0;
        printf("%d", i++ * ++i);
    	return 0;
    }
    ```

15. ```c
    int main()
    {
        int i = 1, j = 1, k = 1, l;
        l = ++i && j++ && ++k;
    	printf("%d %d %d %d", i, j, k, l);
    	return 0;
    }
    ```

16. ```c
    int main()
    {
        int i = 1, j = 2, k = 3, l = 1;
    	l = i && j++ && ++k;
        printf("%d %d %d %d", i, j, k, l);
        return 0;
    }
    ```

17. ```c
    int main()
    {
        int i = 20, j = 20, k, l;
    	k = i++ + j;
    	l = i++ + ++j;
    	printf("%d %d", l, k);
    	return 0;
    }
    ```

18. ```c 
    int main()
    {
        int i = 0;
        int j = i++ * ++i;
    	printf("%d", i);
    	return 0;
    }
    ```

19. ```c
    int main()
    {
        int a = 10;
    	int b = 30;
    	float c;
    	c = a % b++ + b / a--;
    	printf("%f", c--);
        return 0;
    }
    ```

20. ```c
    int a = 10;
    int b = 10;
    int main()
    {
        int c = (a == b);
        printf("%d", c++);
        return 0;
    }
    ```
