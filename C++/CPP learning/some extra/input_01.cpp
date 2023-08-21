#include <iostream>
using namespace std;
int main()
{
   string s1, s2;
   getline(cin, s1);
   getline(cin >> ws, s2);
   cout << s1 << "\n";
   cout << s2;
   return 0;
}