//11. Write a program to check palindrome number.
#include <stdio.h>
#include <conio.h>
int check_palindrome(int);
void display(int, int);
int main()
{
    int num;
    printf("enter a number to check a palindrome: ");
    scanf("%d", &num);
    display(num, check_palindrome(num));
    return 0;
}
int check_palindrome(int a)
{
    int reminder, reverse=0;
    for(int i = 0; a!=0;i++)
    {
        reminder = a % 10;
        reverse = reverse * 10 + reminder;
        a /= 10;
    }
    return reverse;
}
void display(int num, int reverse)
{
    if(num==reverse)
    {
        printf("%d is palindrome number.", num);
    }
    else
    {
        printf("%d isn't a palindrome number.", num);
    }
}
// done.....