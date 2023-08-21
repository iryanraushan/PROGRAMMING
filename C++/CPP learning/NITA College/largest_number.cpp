#include <iostream>
using namespace std;
int main()
{
    int arr[100], n;
    cout << "how many no. u want to take in array:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        if (arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    cout << "largest no. is " << arr[0];
    return 0;
}