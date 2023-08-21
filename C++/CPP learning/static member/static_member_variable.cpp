/*
* Declared inside the class of body.
* Also known as class member variable.
* They must be defined out side the class.
* Static member variable does not belong to any object, but to the whole class.
* There will be only one copy of static member variable for the whole class.
* Any object can use the same copy of class variable.
* they can also be used with class name.
*/
#include <iostream>
using namespace std;
class account
{
private:
   int balance;      // instance member variable.
   static float roi; // static member variable. // class variable.
public:
   void set_balance(int b)
   {
      balance = b;
   }
};
float account::roi = 1.5f; // definition of class variable.// nessecary.
int main()
{
   account a1;
   return 0;
}