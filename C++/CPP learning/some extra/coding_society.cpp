#include "iostream"
using namespace std;
int main()
{
   int a = 3, b = 5;
   b = a++ + b--;
   a = a-- + ++b;
   b = ++a + --b;
   cout << a << endl;
   cout << b << endl;
   int x = 10;
   x = x++ + ++x;
   cout << x;
   return 0;
}