#include <stdio.h>
#include <conio.h>
int main()
{
    int k;
    for (int i = 0; i < 5; i++)
    {
        k = 1;
        for (int j = 0; j < 9; j++)
        {
            if (j >= 6 - i && j<=4 + i && k)
            {

                printf("*");
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
    return 0;
}