#include <stdio.h>
#include <conio.h>
int main()
{
    int l, n, w, h;
    printf("give dimesnsion");
    scanf("%d %d ", &l, &l);
    printf("give no. of photos");
    scanf("%d", &n);
    while (w != h)
    {
        scanf(" %d %d ", &w, &h);
        if (w < l && h < l)
        {
            printf("upload another one");
        }
        else if (w > l && h > l)
        {
            printf("crop it ");
        }
    }
    printf("accepted");
    return 0;
}