//10. Write a program to check prime number.
#include <stdio.h>
#include <conio.h>
int check_prime(int);
void display(int ,int);
int main()
{
    int num, i;
    printf("entre a number:\n");
    scanf("%d", &num);
    display(num, check_prime(num));
    return 0;
}
int check_prime(int num)
{
    for (int i = 2; i < num ; i++)
    {
        if (num % i == 0)
        {
           return 1;
        }
        else
        return 0;
    }
}
void display(int a, int x)
{
    if (x == 1)
    {
        printf("%d is not prime number\n", a);
    }
    else
    {
        printf("%d is prime number.\n", a);
    }
}
// done .....