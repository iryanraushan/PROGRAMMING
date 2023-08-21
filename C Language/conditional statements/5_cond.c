//Write a C program to find the largest of three numbers.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf(" give three number \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("1st number = %d, ", a);
    printf("2nd number is = %d,", b);
    printf("3rd number is = %d,", c);

    if (a > b && a > c)
        printf("greatest number is %d \n", a);
    else if (b > a && b > c)
        printf("greatest number is %d \n", b);
    else
        printf("greatest value is %d \n", c);

    return 0;
}