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
    printf("\nABSOLUTE ERROR= %lf", absErr);
    printf("\nRELATIVE ERROR= %lf", relErr);
    printf("\nPERCENTAGE RELATIVE ERROR= %lf", perRelErr);
    getch();
}
