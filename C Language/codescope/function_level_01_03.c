#include <stdio.h>
void display(void);
int i = 6;
void display(void)
{
    i = 5;
}
int main()
{
    display();
    printf("%d\n", i);
    return 0;
}