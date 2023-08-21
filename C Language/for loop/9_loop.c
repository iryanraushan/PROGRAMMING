//Write a program in C to display the pattern like right angle triangle using an asterisk.
#include <stdio.h>
#include<conio.h>
void main()
{
    
    for (int i = 1; i <= 5; i++)
    {
        for ( int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}