#include <iostream>

using namespace std;

class Employee
{
public:
     int id;
     string FirstName;
     string LastName;
     int age;
     // Tag : 01.
     string FullName;
     string nameAdd()
     { // Method / Function definition.
          FullName = FirstName + " " + LastName;
          return FullName;
     }
     // Tag : 02.
     void displayName(); // Method / Function declaration.
};

// Tag : 02.
void Employee::displayName()
{
     cout << "ID : " << id << endl
          << "name : " << nameAdd() << endl
          << "Age : " << age << "\n\n";
}

int main()
{
     Employee emp1;

     emp1.id = 01;
     emp1.FirstName = "Raushan";
     emp1.LastName = "Kumar";
     emp1.age = 19;

     cout << "ID : " << emp1.id << endl
          << "Name : " << emp1.FirstName << " " << emp1.LastName << endl
          << "Age : " << emp1.age << "\n\n";

     // Tag : 01.
     cout << "ID : " << emp1.id << endl
          << "Name : " << emp1.nameAdd() << endl
          << "Age : " << emp1.age << "\n\n";

     // Tag : 02.
     emp1.displayName();

     return 0;
}