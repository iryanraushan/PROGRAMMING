#include <iostream>
#include <string>

using namespace std;

class student {
   public:
   int roll_no;
   string name;
};

int main (){
   student s1;
   s1.roll_no = 1;
   s1.name = "raushan kumar";

   cout << s1.roll_no << endl << s1.name;
   return 0;
}