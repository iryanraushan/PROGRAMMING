// C++ Program to Swap Two Numbers Without Using third variable.

#include <iostream>

using namespace std;


int main(){
    int a, b;
    cout << "Enter 1st number : ";
    cin >> a;
    cout << "Enter 2nd number : ";
    cin >> b;
    
    cout << "Your two numbers before swap : " << endl;
    cout << "\t a = " << a << "\n\t b = " << b << endl;
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    cout << "Your two numbers after swap : " << endl;
    cout << "\t a = " << a << "\n\t b = " << b << endl;
    
    return 0;
}
#i