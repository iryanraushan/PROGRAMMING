#include <stdio.h>
#include <conio.h>
int main()
{
    int k, a = 1;
    for (int i = 1; i <= 4; i++)
    {
        k = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i && k)
            {
                printf("%d", a);
                k = 0;
                a++;
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