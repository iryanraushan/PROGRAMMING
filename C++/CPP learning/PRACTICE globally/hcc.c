#include "stdio.h"
int main ()
{
   int age = 11;
   printf("%d\n", ++age + age++);
   printf("%d", age);
   return 0;
}