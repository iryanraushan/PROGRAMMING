#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int genratenum(int n, int e)
{
    srand(time(NULL));
    return (rand() % (e - n + 1)) + n;
}
main()
{
    int a, b, c, d = 0, sum = 0, f;
    int i = 3;
    int j;
    char user[35];
    printf("-----xxx  Game  xxx--------\n\n");
    printf("game instruction \n rock vs scissor----rocks win\n paper vs scissor----scissor win\n paper vs rocks----paper win\n\n");
    printf("entre a user name:\n");
    gets(user);
    printf("\n   ------ user name is %s-------    \n", user);
    printf(" press 1 for scisser\n");
    printf(" press 2 for rocks\n");
    printf(" press 3 for paper\n");
    printf(" press 4 for exist");

    while (i)
    {
        printf("\n------%s press key according to instruction------- \n", user);
        scanf("%d", &j);
        switch (j)
        {
        case 1:
            a = genratenum(1, 3);
            printf("computer choosen %d\n\n", a);
            if (a == 3)
            {
                printf("you get 1 point and computer get 0 point\n");
                sum = sum + 1;
            }
            else
            {
                printf("you get 0 point and computer get 1 point\n");
                d = d + 1;
            }

            break;
        case 2:
            a = genratenum(1, 3);
            printf("computer choosen %d\n\n", a);
            if (a == 1)
            {
                printf("you get 1 point  and computer get 0 point\n");
                sum = sum + 1;
            }
            else
            {
                printf("you get 0 point and computer get 1 point\n");
                d = d + 1;
            }
            break;
        case 3:
            a = genratenum(1, 3);
            printf("computer choosen %d\n\n", a);
            if (a == 2)
            {
                printf("you get 1 point  and computer get 0 point\n");
                sum = sum + 1;
            }
            else
            {
                printf("you get 0 point and computer get 1 point\n");
                d = d + 1;
            }
            break;
        case 4:
            printf("\n------exit------\n");
            break;
        default:
            printf("plese entre a valid no");
            break;
        }
        i--;
    }

    if (sum > d)
    {
        printf("\n*** %s you are overall winner ****\n", user);
    }
    else if (d > sum)
    {
        printf("\n>>>>>>> %s you are overall losser <<<<<<<<\n", user);
    }
    else
    {
        printf("\n##### match draw ######\n");
    }
}