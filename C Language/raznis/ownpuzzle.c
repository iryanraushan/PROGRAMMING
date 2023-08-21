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
    char arr[3][3] = {{'A', 'B', 'C'}, {'D', 'a', 'E'}, {'F', 'G', 'H'}};
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf(" %c ", arr[i][j]);
        }
        printf("\n");
    }
    b = genratenum(1, 30);
    printf("value of b is %d \n ", b);
    do
    {
        for (int i = 0; i <= 2; i++)
        {
            for (int j = 0; j <= 2; j++)
            {
                printf("give value for array \n");
                scanf("%d", arr[1][1]);
            }
            printf("\n");
        }
    }while (arr[1][1]!=5);
    return 0;
}