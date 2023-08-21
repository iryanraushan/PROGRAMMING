//7. Write a program to find factorial of a number
#include <stdio.h>
#include <conio.h>
int factorial(int);
void display(int, int);
int main()
{
    long int num, multiple = 1, mul;
    printf("give a number :");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        multiple = multiple * i;
    }
    printf("%d", multiple);
    display(num, factorial(num));
    return 0;
}
int factorial(int a)
{
    int b;
    if (a >= 1)
    {
        b = a *factorial(a - 1);
        return b;
    }
    else
    {
        return 1;
    }
}
void display(int num, int fact)
{
    printf("factorial of %d is = %d.", num, fact);
}
  // done.....