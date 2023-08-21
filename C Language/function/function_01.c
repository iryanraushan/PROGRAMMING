#include <stdio.h>
#include <conio.h>
int add(void);
void try(void);
int main()
{
    int k;
    k = add();
    printf("no. is %d ", k);
    try();
    return 0;
}
int add()
{
    int r, c, p;
    printf("give a integer:");
    scanf("%d%d", &r, &p);
    c = p + r;
    return (c);
}
void try()
{
    char arr[10] = "raushan";
    printf("\n%s", arr);
}