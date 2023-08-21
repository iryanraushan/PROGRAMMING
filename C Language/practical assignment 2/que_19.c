//. Write a program to print alphabet triangle.
#include <stdio.h>
#include <conio.h>
int main()
{
    char a;
    int b;
    printf("entre a range =\n");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        a = 'A';
        for (int j = 1; j <= (b * 2) - 1; j++)
        {
            if (j >= (b + 1) - i && j <= (b - 1) + i)
            {
                printf("%c", a);
                j <= (b - 1) ? a++ : a--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}