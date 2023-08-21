#include <stdio.h>
int main()
{
    int l, r, k, count = 0, b;
    printf("give numbers: ");
    scanf("%d %d %d", &l, &r, &k);
    for (int i = l; i <= r; i++)
    {
        b = i % k;
        if (b == 0)
        count++;
    }
    printf("%d", count);
}