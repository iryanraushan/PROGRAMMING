#include <stdio.h>
#include <conio.h>
int main()
{
    int choise, a, b, c;
    do
    {
        printf("\n1. addition ");
        printf("\n2. multiplication");
        printf("\n3. odd even ");

        printf("\n\nenter your choise :");
        scanf("%d", &choise);
        switch (choise)
        {
        case 1:
            printf("give two numbers\n");
            scanf("%d %d", &a, &b);
            printf("sum of a and b is %d.", a + b);
            break;
        case 2:
            printf("give two numbers\n");
            scanf("%d %d", &a, &b);
            printf("multiple of a and b is %d.", a * b);
            break;
        case 3:
            printf("give a number \n");
            scanf("%d", &a);
            if ((a % 2) == 0)
            {
                printf("your no. is even.\n");
            }
            else
                printf("your no is odd.\n");
            break;
        }
    } while (1);

    return 0;
}