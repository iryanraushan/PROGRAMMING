// take input from user in string.
#include <stdio.h>
#include <conio.h>
int main()
{
    char R[20];
    printf("give a name ");
    scanf("%s", R); // R == &R[0]  // scanf space ke bad wale word ko cpnsider nhi karta h.
    // but in the place of scanf we can use gets().
    // and gets() take full sentense.
    // see "string_ss_04.c"
    printf("%s\n\n", R);

    puts(R);

    // we also use loop.
    return 0;
}