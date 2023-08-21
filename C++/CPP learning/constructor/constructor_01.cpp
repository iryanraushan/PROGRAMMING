/*
* constructor is a member function of class.
* the name of the constructor is same as the name of class.
* it has no return type, so it can't use return keyword.
* it must be an instance member function, that is, it can never be static.
*/
#include <iostream>
using namespace std;
class complex
{
private:
   int a, b;

public:
   complex()
   {
      cout << "hello raznis  ";
   }
};
int main()
{
   complex c1, c2, c3;
   return 0;
}
/*
* constructor is implicity invoked when an object is created.
* constructor is used to solve problem of initialization.
*/
