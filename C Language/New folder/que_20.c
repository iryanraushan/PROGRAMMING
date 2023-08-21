#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("entre a range =\n");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        a = 1;
        for (int j = 1; j <= (b * 2) - 1; j++)
        {
            if (j >= (b + 1) - i && j <= (b - 1) + i)
            {
                printf(" %d ", a);
                j <= (b - 1) ? a++ : a--;
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}