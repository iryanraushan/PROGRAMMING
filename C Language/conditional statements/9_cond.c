//Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>
#include <conio.h>
int main()
{
    int cp, sp;
    printf("give your cost. \n  ");
    scanf("%d", &cp);
    printf("your selling price ");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("congratulatios ! \n you r in profit by %d  rupees", sp - cp);
    }
    else if (cp > sp)
    {
        printf("oops! you got loss by %d rupees.", sp - cp);
    }
    else
        printf("nice! you r a good man.");

    return 0;
}