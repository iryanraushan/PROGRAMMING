// #include "stdio.h"
// int main()
// {
//    int num, rem, arr[100], i = 0, count=0;
//    printf("enter a number : ");
//    scanf("%d", &num);

//    while(num)
//    {
//       rem = num % 2;
//       arr[i] = rem;
//       i++;
//       num = num / 2;  // 7 /2  = 3.
//       count++;
//    }
//    for(i =count ; i>=0; i-- )
//    {
//       printf("%d", arr[i]);
//    }
//    return 0;
// }
#include <bits/stdc++.h>
// #include <iostream>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    switch (n)
    {
       case 1:
       cout << "one";
       case 2:
       cout << "two";
       case 3:
       cout << "three";
    //    case 4:
    //    cout << four;
    //    case 5:
    //    cout << five;
    //    case 6:
    //    cout << six;
    //    case 7:
    //    cout << seven;
    //    case 8:
    //    cout << eight;
    //    case 9:
    //    cout << nine;
       default :
       cout << "Greater that nine";
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
