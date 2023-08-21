//10. Write a program to check prime number.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, i;
    printf("entre a number:\n");
    scanf("%d", &num);
    for (i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            break;
        }
    }
    if (num == i)
    {
        printf("%d is prime number.\n", num);
    }
    else
    {
        printf("%d is not prime number\n", num);
    }
    return 0;
}