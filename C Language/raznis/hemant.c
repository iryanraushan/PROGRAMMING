#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, a, x, y = 0, c = 0;
    printf("enter a number");
    scanf("%d", &n);
    a = n;
    while (a != 0)
    {
        a = a / 10;
        c++;
    }
    a = n;
    while (a != 0)
    {
        x = n % 10;
        y = y + pow(x, c);
        a = a / 10;
    }
    printf("%d", y);
    return 0;
}