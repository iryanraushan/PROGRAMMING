//14. Write a program to reverse given number.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, reminder, reverse = 0;
    printf("give a number:");
    scanf("%d", &num);
    while (num != 0)
    {
        reminder = num % 10;
        reverse = reverse * 10 + reminder;
        num = num / 10;
    }
    printf("your reversed number is :%d", reverse);
    return 0;
}