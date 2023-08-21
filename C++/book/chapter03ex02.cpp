// A program containing errors!
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
     string message("Learn from your mistakes");
     cout << message << endl;
     int len = message.length();
     cout << "Length of the string: " << len << endl;
     // And a random number in addition:
     int a, b;
     srand(100);
     a = rand();
     b = rand();
     cout << "\nRandom number: " << b << endl;
     cout << "\nRandom number: " << a << endl;
     return 0;
}
