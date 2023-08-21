#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int a, c, p;
    float q;
    cin >> a >> c >> p;
    q = sqrt((a * a) - ((p * p) / 4)) + sqrt((c * c) - ((p * p) / 4));
    printf("%f", q);
    return 0;
}