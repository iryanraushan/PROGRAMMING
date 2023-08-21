#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";

  int a;
  double b;
  string s1;
  cin >> a >> b;
  getline(cin >> ws, s1);
  cout << a + i << "\n";
  cout << d + b << endl;
  cout << s + s1;

  return 0;
}