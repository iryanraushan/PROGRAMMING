#include <iostream>
#include <string>

using namespace std;

int main()
{
     int num;
     float num2;
     string name;

     cout << "Enter your name : ";
     //cin >> name;   // cin take input before the space. so we use getline.
     getline(cin, name);

     cout<< "Enter a integer number : ";
     cin>>num;

     cout << "Enter a decimal number : ";
     cin>>num2;

     cout << "Your name is : " << name << endl;
     cout << "Your integer is : " << num << endl;
     cout << "Your deciml value is : " << num2 << endl;
     return 0;
}