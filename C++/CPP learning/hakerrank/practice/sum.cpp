#include <iostream>
using namespace std;
int main()
{
    int s[3], n=0;
    for ( int i = 0; i < 3; i++)
    {
        cin >> s[i]  ;
    }
    for ( int i = 0; i < 3; i++)
    {
        n = n + s[i];
    }
    cout << n;
    return 0;
}
