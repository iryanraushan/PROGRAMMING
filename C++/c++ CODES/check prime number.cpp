/* C++ Program to Check given number is Prime number or not */

#include <iostream>

using namespace std;

int main () {
    
    int number;
    cout << "Enter a number : ";
    cin >> number;
    
    int i = 2;
    int flag;
    while (i < number) {
        if (number % i == 0){
            flag = 1;
            break;
        }
        else {
           flag = 0;
        }
        i++;
    }
    
    if (flag == 0){
        cout << "Enter number is a prime number.";
    }
    
    else if (flag == 1){
        cout << "Enter number is not a prime number";
    }
    return 0;
}