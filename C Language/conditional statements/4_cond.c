/*Write a C program to read the value of an integer m and display the value of
 n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int m, n;
    printf("give an integer ");
    scanf("%d", &m);
    if (m > 0)
        printf("value of is 1 ");
    else if (m == 0)
        printf("value is 0 ");
    else
        printf("the value is -1 ");
    return 0;
}