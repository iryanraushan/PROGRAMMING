// c++ Program to Convert Days Into Years, Weeks and Days.

#include <iostream>

using namespace std;

int main(){
    
    int numberOfDays;
    cout << "Enter number of days : ";
    cin >> numberOfDays;
    
    int numberOfYears = numberOfDays / 365;
    int numberOfMonths = (numberOfDays % 365) / 30;
    numberOfDays = (numberOfDays % 365) % 30;
    
    cout << "\tTotal years is : " << numberOfYears << endl;
    cout << "\tTotal months is : " << numberOfMonths << endl;
    cout << "\tTotal days is : " << numberOfDays << endl;
    
    return 0;
    
}