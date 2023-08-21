#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<< "give a numberL:"<< endl;
    cin >> x;
    if (51 - x < 0)
    {
        cout << "triple of difference is:"<< 3*(x-51)<<endl;
    }
    else
    {
        cout<< "difference is:"<< 51 - x;
    }
return 0;
}