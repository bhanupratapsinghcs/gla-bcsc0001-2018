#include <stdio.h>
#include <time.h>

int main()
{
   time_t t;
   time(&t);
      printf("System date and time is: %s",ctime(&t));
   //getch();
   return 0;
}
