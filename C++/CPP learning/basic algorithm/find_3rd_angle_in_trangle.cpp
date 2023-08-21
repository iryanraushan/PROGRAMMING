#include <iostream>
using namespace std;
int main()
{
    int angle1, angle2;
    cout << "give 1st angle: ";
    cin >> angle1;
    cout << "give 2nd angle: ";
    cin >> angle2;
    int angle3 = 180 - (angle1 + angle2);
    if (angle3 < 0)
    {
        cout << "pls give right measurement";
    }
    else
    {
        cout << "your 3rd angle: " << angle3;
    }
    return 0;
}