#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c, D;
    cout << "give the value of a, b and c" << endl;
    cin >> a >> b >> c;
    D = b * b - 4 * a * c;
    if (D < 0)
    {
        cout << "your root is imaginary" << endl;
    }
    else
    {
        cout << "1st root of equation is =" << (-b + sqrt(D)) / 2 * a << endl;
        cout << "2nd root of equation is =" << (-b - sqrt(D)) / 2 * a << endl;
    }
    return 0;
}