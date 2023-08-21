//1. Write a program to print “Hello World!” using function and pointer.
#include <iostream>
using namespace std;
void raushan(char);
int main()
{
    char string[100], *str;
    cout << "give a string: ";
    gets(string);
    str = string;
    while (*str != 0)
    {
        cout << *str;
        str++;
    }
    return 0;
}
