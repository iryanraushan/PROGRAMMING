#include <iostream>
using namespace std;
int main()
{
    char character;
    cout << "give a charatcter value: ";
    cin >> character;
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u')
    {
        cout << character << "is a vowel character.";
    }
    else if (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U')
    {
        cout << character << " is a vowel character.";
    }
    else
    {
        cout << character << " is a consonant character.";
    }
    return 0;
}