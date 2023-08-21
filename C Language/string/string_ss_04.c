// using of gets() and puts().
#include <stdio.h>
#include <conio.h>
#include "string.h"
int main()
{
    char roy[500];
    printf("give a sentense:");
    gets(roy);
    printf("%s", roy);
    puts(roy);
    strrev(roy);
    puts(roy);
    return 0;
}