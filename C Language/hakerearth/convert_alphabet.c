#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("give a string:");
    gets(a);
    for (int i = 0; a[i] < '\0'; i++)
    {
        if (a[i] >= 'a' ||a[i] <= 'z')
            a[i] = a[i] - 32;
       
    }
    printf("your string is :%s", a);
    return 0;
}