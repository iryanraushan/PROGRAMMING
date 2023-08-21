//string by saurav sukla sir.1 lecture;
#include <stdio.h>
#include <conio.h>
int main()
{
    char s[10] = {'r', 'a', 'u', 's', 'h', 'a', 'n', '\0'};
    /* here i can also use "raushan" like this. ise v string ke tarah hi mana jayega*/
    // go to "string_ss_02.c" file.
    // 1st method by using for loop.
    for (int i = 0; i < 8; i++) // here in place of cond. i also write s[i]!='\0' .
    {
        printf("%c", s[i]);
    }

    // 2nd method without using loop.
    printf("\n%s\n", s); // here s and &s[0] both are same thing.

    //3rd method using puts.
    puts(s); //puts is only use for printing strings.
    return 0;
}