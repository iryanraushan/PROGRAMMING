#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "give a character:" << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << ch << " is a uppercase character.";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << ch << " is a lowercase character.";
    }

    return 0;
}