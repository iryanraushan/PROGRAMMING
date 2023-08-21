//13. Write a program to print sum of digits.
#include <stdio.h>
#include <conio.h>
int digit_sum(int);
void display(int, int);
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    display(num, digit_sum(num));
    return 0;
}
int digit_sum(int num)
{
    int sum = 0, x;
    for ( ; num != 0; )
    {
        x = num % 10;
        sum += x;
        num = num / 10;
    }
    return sum;
}
void display(int num, int digit_sum)
{
    printf("sum of all digit of %d is = %d.", num, digit_sum);
}
// done ..............