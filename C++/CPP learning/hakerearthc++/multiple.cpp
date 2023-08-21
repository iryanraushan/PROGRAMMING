// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //    int n, ans = 1;
// //    cin >> n;
// //    int arr[n];
// //    for (int i = 0; i < n; i++)
// //    {
// //       cin >> arr[i];
// //    }
// //    for (int i = 0; i < n; i++)
// //    {
// //       ans = ans * arr[i];
// //    }
// //    cout << ans;
// //    return 0;
// // }
// #include <stdio.h>

// #include <math.h>

// int main()

// {

//    unsigned long long int answer = 1, value = pow(10, 9) + 7;

//    int size;

//    scanf("%d", &size);

//    int numbers[size];

//    for (int i = 1; i <= size; i++)

//       scanf("%d", &numbers[i]);

//    for (int i = 1; i <= size; i++)

//       answer = (answer * numbers[i]) % value;

//    //answer = answer%value;

//    printf("%llu", answer);

//    return 0;
// }
#include <iostream>
using namespace std;
int main()
{
   int a=1,b=70,c;
   c = a % b;
   printf("%d",c);
return 0;
}