#include "stdio.h"
#include "math.h"
int count_digit(int);
int check_armstrong(int, int);
void display(int, int);
int main()
{
   int num;
   printf("enter a number to check armstrong number : ");
   scanf("%d", &num);
   display(num, check_armstrong(num, count_digit(num)));
}
int count_digit(int num)
{
   int count = 0;
   while (num != 0){
      num = num / 10; count++;
   }
   return count;
}
int check_armstrong(int num, int count)
{
   int remainder, arm_num=0;
   while (num != 0){
      remainder = num % 10;
      arm_num = arm_num + pow(remainder, count);
      num = num / 10;
   }
   return arm_num;
}
void display(int num, int arm_num){
   if (num == arm_num)
      printf("%d is a armstrong number.", num);
   else
      printf("%d isn't a armstrong number.", num);
}
// done........