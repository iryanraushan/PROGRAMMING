#include <stdio.h>
#include <conio.h>
int check(int);
int main()
{
    int num, b, x;
    printf("enter a number:");
    scanf("%d", &num);

    x = check(num);
    if (x == num)
        printf("%d is a palindrome number.",num);
    else
        printf("%d is not a palindrome",num);

    return 0;
}
int check(int num)
{
    int reminder, x, a, reverse;
    a = num;
    while (a != 0)
    {
        reminder = a % 10;
        reverse = reverse * 10 + reminder;
        a = a / 10;
    }
    x = reverse;
    return(x);
}