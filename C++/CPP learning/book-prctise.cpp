// To use strings.
#include <iostream> // Declaration of cin, cout
#include <string>   // Declaration of class string
using namespace std;
int main()
{
     // // Defines four strings:
     // string prompt("What is your name:  "),
     //     name,             // An empty
     //     line(40, ’-’),    // string with 40 ’-’
     //     total = "Hello "; // is possible!
     // cout << prompt;       // Request for input.
     // getline(cin, name);   // Inputs a name in one line
     // total = total + name; // Concatenates and
     // // assigns strings.
     // cout << line << endl // Outputs line and name
     //      << total << endl;
     // cout << " Your name is " // Outputs length
     //      << name.length() << " characters long!" << endl;
     // cout << line << endl;
     // float x= 1. / 2. + 2. /4.;
     // cout << x;
     // int i ;
     // cin >> i;
     // cout << i << hex << i+1 << oct << i;
     enum days
     {
          mon, tues, wed, thurs, fri, sat, sun
     };
     for(int num = mon; num <= sun;num++)
          cout << num++ + (days(num));
     return 0;
}