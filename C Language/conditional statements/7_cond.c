/*Write a C program to find the eligibility of admission for a professional 
course based on the following criteria.*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int a, b, c, D;
    float m, n;
    printf("give the value of a,b,c.");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D == 0)
    {
        printf("euation have two equal solution ");
        m = -b / (2 * a);
        n = m;
        printf("your both root is %f %f", m, n);
    }
    else if (D > 0)
    {
        printf("equation have two unequal root ");
        m = (-b + sqrt(D)) / 2 * a;
        n = (-b - sqrt(D)) / 2 * a;
        printf("your both root is %f, %f", m, n);
    }
    else
        printf("your root is imaginary.\nNo solution ");
    return 0;
}