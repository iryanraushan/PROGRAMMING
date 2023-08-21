// 1st game
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int genratenum(int n, int e)
{
    srand(time(NULL));
    return (rand() % (e - n + 1)) + n;
}
int main()
{
    int a, b, count = 0;
    b = genratenum(1, 50);
    printf("      ***GAME***\n\n");
    printf("#####choose a number same as a computer for win#####\n\n");
    printf("choose a number between 1 to 50.\n");
    do
    {

        scanf("%d", &a);
        if (a == b)
        {
            printf("mission complete\n");
        }
        else if (b > a)
        {
            printf("give upper please\n");
        }
        else if (b < a)
        {
            printf("give lower please\n");
        }
        count++;
    } while (a != b);
    printf("----you got success in %d times-----", count);
    getch();
    return 0;
}