#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y, z;
    FILE *ptr;
    ptr = fopen("input.txt", "r");
    fscanf(ptr, "%d%d", &x, &y);
    z = x + y;
    printf("%d", z);
    return 0;
}