/* que :-
Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
*/
#include <iostream> 
#include <string>
 
using namespace std;

class students{
   public:
      string name;
      int roll_number;
      long long int phone_number;
      string address;
      void display();
};

void students::display(){
   cout << "name : "<< name << "\n" << "roll_number : " << roll_number << "\n" <<"contact no.:   "<< phone_number << "\n" <<"ad. : "<< address<< endl<<endl;
}

int main (){
   students s1;
      s1.name = "raushan kumar";
      s1.roll_number = 01;
      s1.phone_number = 2345678912;
      s1.address = "UP";
   s1.display();

   students s2;
      s2.name = "raznis_tech";
      s2.roll_number = 02;
      s2.phone_number = 8654326543;
      s2.address = "prayag_raj";
   s2.display();

   return 0;
}