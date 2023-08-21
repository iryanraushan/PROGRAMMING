#include <stdio.h>
int max_of_four(int, int, int, int);

int main()
{
    int a, b, c, d, x;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    x = max_of_four(a, b, c, d);
    printf("%d", x);
    return 0;
}
int max_of_four(int A, int B, int C, int D)
{

    if (A > B && A > C && A > D)
    {
        return A;
    }
    else if (B > A && B > C && C > D)
    {
        return B;
    }
    else if (C > A && C > B && C > D)
    {
        return C;
    }
    else
    {
        return D;
    }
}