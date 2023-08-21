#include <stdio.h>
#include <conio.h>
int main()
{
    char c;
    int VOWEL, vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    VOWEL = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (vowel || VOWEL)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}