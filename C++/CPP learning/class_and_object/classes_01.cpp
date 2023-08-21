#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class student
{
public:
  int age;
  char first_name[50], last_name[50];
  int std;
public:
  void display()
  {
      cout << age <<"\n"<<last_name<<", "<<first_name<<"\n"<<std;
  }
};
int main() {
    student s1;
    cin >> s1.age >> s1.first_name >> s1.last_name >> s1.std ;
     s1.display();
    cout <<"\n\n" <<s1.age <<","<<s1.first_name<<","<<s1.last_name<<","<<s1.std;
    return 0;
}