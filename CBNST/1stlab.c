#include <stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
    double absErr, relErr, perRelErr, trueValue, approxValue;
    printf("\n INPUT TRUE VALUE:");
    scanf("%lf", &trueValue);
    printf("\n INPUT APPROXIMATE VALUE:");
    scanf("%lf", &approxValue);
    absErr = fabs(trueValue - approxValue);
    relErr = absErr / trueValue;
    perRelErr = relErr * 100;
    printf("\n ABSOLUTE ERROR= %lf", absErr);
    printf("\n RELATIVE ERROR= %lf", relErr);
    printf("\n PERCENTAGE RELATIVE ERROR= %lf", perRelErr);
    getch();
}
