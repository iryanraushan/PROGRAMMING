//7. Write a program to find factorial of a number
#include <stdio.h>
#include <conio.h>
int display(int);
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
    display(num);
    printf("factorial is %d.", display(num));
    return 0;
}
int display(int a)
{
    int b;
    if (a >= 1)
    {
        b = (a * display(a - 1));
        return b;
    }
    else
    {
        return 1;
    }
}
  // done.....