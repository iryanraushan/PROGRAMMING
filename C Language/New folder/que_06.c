//6. Write a program to find out the largest number among three numbers.
#include <stdio.h>
#include <conio.h>
void display(int, int, int);
int main()
{
    int num1, num2, num3;
    printf("enter three numbers : ");
    scanf("%d%d%d", &num1, &num2, &num3);
    display(num1, num2, num3);
    return 0;
}
void display(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        printf("%d is greatest number.", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is greatest number.", num2);
    }
    else
    {
        printf("%d is greatest number.", num3);
    }
}
  // done...