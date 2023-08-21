// C++ program to generate random numbers.

#include <iostream>

using namespace std;

int main() {
    int num;
    
    cout << "Generating Random Numbers Below :: \n\n";
    for(int i = 1; i <= 10; i++)
    {
        num = rand() % 100; 
        cout << " " << num << " ";
    }
    return 0;
}