/* 
* They are qualified with the keyword static.
* they are also called class member function.
* they can be invoked with or without object.
* they can only access static members of the class.
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
   static void setroi(float r) //  static member function.
   {
      roi = r;
   }
};
float account::roi; // definition of class variable.// nessecary.
int main()
{
   account a1;
   // a1.setroi(4.5f); also this method.
   account::setroi(4.5f);
   return 0;
}