//Write a program in C to display the multipliaction table vertically from 1 to n.
#include<stdio.h>
int main()
{
    for ( int i = 1; i<=8;++i)
    {
        for ( int j = 1 ; j <= 10 ; ++j)
        {
            printf("%d * %d = %d  ",i,j,i*j);
        }
        printf("\n\n");
    }
    return 0;
}