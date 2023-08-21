#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int l1, l2, l3;
    float S, Area, x;

    cout << "give the lenghts ";
    cin >> l1 >> l2 >> l3;

    S = (l1 + l2 + l3) / 2;
    x = (S * (S - l1) * (S - l2) * (S - l3));
    Area = sqrt(x);

    cout << "Area " << Area;
    return 0;
}