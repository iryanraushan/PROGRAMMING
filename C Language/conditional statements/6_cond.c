/*Write a C program to accept a coordinate point in a XY
 coordinate system and determine in which quadrant the 
 coordinate point lies.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("give two value ");
    scanf("%d %d", &a, &b);
    if (a > 0 && b > 0)
        printf("coordinate is (%d , %d) is in 1st quad.", a, b);
    else if (a < 0 && b > 0)
        printf("coordinate is (%d , %d) is in 2nd quad.", a, b);
    else if (a < 0 && b < 0)
        printf("coordinate is (%d , %d) is in 3rd quad.", a, b);
    else if (a > 0 && b < 0)
        printf("coordinate is (%d , %d) is in 4th quad.", a, b);

    return 0;
}