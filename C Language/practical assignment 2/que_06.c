//6. Write a program to find out the largest number among three numbers.
#include <stdio.h>
#include <conio.h>
int large_num(int, int, int);
void display(int);
int main()
{
    int num1, num2, num3;
    printf("enter three numbers : ");
    scanf("%d%d%d", &num1, &num2, &num3);
    display(large_num(num1, num2, num3));
    return 0;
}
int large_num(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
     return num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
      return num2;
    }
    else
    {
    return num3;
    }
}
void display(int num)
{
    printf("largest number is %d.", num);
}
  // done...