#include <stdio.h>
int main()
{
    char c;
    printf("Enter an alphabet:\n ");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
        printf("vowel");
        break;
    case 'e':
        printf("vowel");
        break;
    case 'i':
        printf("vowel");
        break;
    case 'o':
        printf("vowel");
        break;
    case 'u':
        printf("vowel");
        break;
    case 'A':
        printf("vowel");
        break;
    case 'E':
        printf("vowel");
        break;
    case 'I':
        printf("vowel");
        break;
    case 'O':
        printf("vowel");
        break;
    case 'U':
        printf("vowel");
        break;
    default:
        printf("consonant");
        break;
    }
    return 0;
}