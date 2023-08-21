#include <stdio.h>
#include <conio.h>
int main()
{
    int a, count = 0;
    char arr[3][3] = {{'A', 'B', 'C'}, {'D', 'a', 'E'}, {'F', 'G', 'H'}};
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf(" %c ", arr[i][j]);
        }
        printf("\n");
    }
    do
    {
        printf("entre a right value of a\n");
        scanf("%c", &arr[1][1]);
        
        if (arr[1][1] != '5')
        {
            printf("----- losser----\n");
            printf("----try again----\n");
        }
        else if (arr[1][1] == '5')
        {
            printf("---- winner----\n");
           
        }
        count++;
    } while ('a' != 5);

    printf("you gt success in %d time\n", count);
    return 0;
}