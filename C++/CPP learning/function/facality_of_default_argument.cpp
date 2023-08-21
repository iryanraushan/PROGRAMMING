#include <iostream>
using namespace std;
int add(int, int,int=0);// meaning of int=0  is when call 8 no. line then in z autometically will go 0.
int main()
{
   int a, b;
   cin >> a>>b;
   cout << "sum is "<< add(a,b);
   int c;
   cin >> a>>b>>c;
   cout <<"sum is "<< add(a,b,c);
return 0;
}
int add(int x, int y, int z)
{
   return(x+y+z);
}