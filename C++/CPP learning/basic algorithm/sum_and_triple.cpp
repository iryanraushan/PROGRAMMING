#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"give two number:"<<endl;
    cin >> num1 >> num2;
    if(num1 == num2 )
    {
        cout << "triple of sum is:"<< 3*(num1 +num2)<<endl;
    }
    else
    {
        cout << "sum is:"<< num1+num2<<endl;
    }
return 0;
}