// C++ program to find cube of number using macros.

#include <iostream>

using namespace std;

#define cube(side) (side * side * side)

int main() {
    
    int side;
    cout << "Enter a side of cube : ";
    cin >> side;
    
    cout << "Cube of side is : " << cube(side) << endl;
    return 0;
}