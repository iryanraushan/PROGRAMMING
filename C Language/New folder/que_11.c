//11. Write a program to check palindrome number.
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, a, reminder, reverse = 0;
    printf("give a number:");
    scanf("%d", &num);
    a = num;
    while (a != 0)
    {
        reminder = a % 10;
        reverse = reverse * 10 + reminder;
        a = a / 10;
    }
    //printf("\nyour reverse number is %d \n \n", reverse);
    if (num == reverse)
    {
        printf("\n %d is a palindrome number.", num);
    }
    else
    {
        printf("%d is not a palindrom number", num);
    }
    
    return 0;
    getch();
}