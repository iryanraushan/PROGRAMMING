//12. Write a program to check armstrong number.
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int num1, num2,  remainder, n = 0;
    float total;
    printf("Enter an integer: ");
    scanf("%d", &num1);
    num2 = num1;
    while (num2 != 0)
    {
        num2 = num2 / 10;
        n++;
    }
   num2=num1;
    while (num2 != 0)
    {
        remainder = num2 % 10;
        total = total + pow(remainder, n);
        num2 = num2 / 10;
    }
    if (total == num1)
        printf("%d is an Armstrong number.", num1);
    else
        printf("%d is not an Armstrong number.", num1);
    return 0;
}