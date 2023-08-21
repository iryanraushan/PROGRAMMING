/* C++ Program to Check Character is Uppercase, Lowercase, Digit or Special Character */

#include <iostream>

using namespace std;

int main () {
    
    char ch;
    cout << "Enter a character : ";
    cin >> ch;
    
    if (ch >= 'a' && ch <= 'z'){
        cout << "Enter character is in lowercase.";
    }
    
    else if (ch >= 'A' && ch <= 'Z'){
        cout << "Enter character is in uppercase.";
    }
    
    else if (ch >= '0' && ch <= '9'){
        cout << "Enter character is a digit.";
    }
    
    else {
        cout << "Enter character is a special symbol.";
    }
    return 0;
}