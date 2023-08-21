#include "stdio.h"
void fun(int * );
int main ()
{
   int i= 5;
   fun(&i);
   printf("1.%d",i);
   return 0;
}
void fun(int *i)
{
  *i= *i*10;
   printf("2. %d\n", *i);
}