#include <stdio.h>
#include <conio.h>
#include "stdlib.h"
#include "time.h"
int main()
{
   int number;
   srand(time(0));
   number = rand() % 50;
   printf("%d", number);
   return 0;
}