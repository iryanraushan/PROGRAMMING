/*
* only difference between structure and class is that - 
    ~ the member of structure are by default public.
    ~ but member of class are by default private.
*/
#include <iostream>
using namespace std;
class complex
{
private:
   int a, b;
public:
   void set_data(int x, int y)
   {
      a = x;
      b = y;
   }
   void show_data()
   {
      cout << "\n a=" << a << "b=" << b;
   }
}c1;
int main()
{
  // complex c1;  here c1 is a object.  class will not consume memory.
   c1.set_data(3, 4);
   c1.show_data();
   return 0;
}
