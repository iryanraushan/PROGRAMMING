#include <stdio.h>
#include <conio.h>
int main()
{
    int num, sum = 0;
    printf("give a number:");
    scanf("%d", &num);
    for (int i = num; i >= 0; --i)
    {
        sum = sum + i;
    }
    printf("sum of natural no. %d", sum);
    return 0;
}