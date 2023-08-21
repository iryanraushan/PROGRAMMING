#include <stdio.h>
#include <conio.h>
int main()
{
    int mat1[3][3], mat2[3][3], sum[3][3];
    printf("give element for 1st matrix:\n ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &mat1[i][j]);
        }
    }
    printf("give elements for 2nd array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &mat2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j]=mat1[i][j] + mat2[i][j];
            printf(" %d  ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}