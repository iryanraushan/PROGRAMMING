//Write a program in C to display the multiplication table of a given integer.
#include <stdio.h>
int main()
{
    int num;
    printf("give a number ");
    scanf("%d", &num);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d * %d  = %d \n", num, i, num * i);
    }
    return 0;
}