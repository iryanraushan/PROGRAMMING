#include <stdio.h>
#include <conio.h>
int main()
{
    char raaz[3][100];
    printf("enter three strings:");

    for (int i = 0; i <= 2; i++)
    {
        gets(&raaz[i][0]); // also  gets(raaz[i]).
    }
    for (int i=0;i<=2;i++)
    {
        puts(raaz[i]);   //  also  printf("%s\n",raaz[i]);
    }
    return 0;
}
// some string related functions.

/* 1. strlen()      * for calculating length of string. */

/* 2. strrev()      * for reverse to string // mtlb string ko reverse karne ke kam aata h. */

/* 3. strlwr()      * for convert lowercase string. */

/* 4. strupr()      * for convert uppercase string. */

/* 5. strcpy()      * for copying  like strcpy(s,"raushan"), here raushan will come in s. */

/* 7. strcat()      * for if in any string s is given bt i want to change we use this. ex.-
s[23]="raushan"   given.
strcat(s,"raznis")   in string raushan will be change into raznis. */

/* 6. strcmp()      * for compare string he wil return integer ascii code differnce between 
1st missmatch character. if return 0 then string will same otherwise string
different.*/

//   handling with multiple strings.
/*   char s[3][20]={"raushan","mohan","sohan"};  */
