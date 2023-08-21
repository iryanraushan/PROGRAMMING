#include <iostream>
using namespace std;
int main()
{
   int a, b, c, d, e, f;
   float x, y;
   cin >> a>>b>>c>>d>>e>>f;
   y = ((a * f) - (d * c)) / ((d * b) - (a * e));
   x = ((b * f) - (c * e)) / ((a * e) - (b * d));
   cout <<  x <<"   " << y;
   return 0;
}