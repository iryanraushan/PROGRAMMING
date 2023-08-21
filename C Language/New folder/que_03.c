//3.Write a program to find ASCII value of a character.
#include <stdio.h>
#include <conio.h>
void display(char);
int main()
{
    char a;
    printf("give any character : ");
    scanf("%c", &a);
    display(a);
    return 0;
}
void display(char ch)
{
    printf("ascii value of %c is %d.", ch, ch);
}
    //  DONE //