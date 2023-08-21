//Write a program in C to make such a pattern like right angle triangle with number increased by 1
#include <stdio.h>
int main()
{
    int row, a = 1;
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("  %d  ", a++);
        }
        printf("\n");
    }
    return 0;
}