#include <stdio.h>


int main()
{
    char s[100];
    int i;
    printf("\nEnter a string : ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else if (s[i]== ' ')
        {
            s[i]= s[i];
        }
        else
        {
            s[i] = s[i] + 32;
        }
    }
    printf("\n %s\n", s);
   //strrev(s);
    printf("%s",s);
    return 0;
}