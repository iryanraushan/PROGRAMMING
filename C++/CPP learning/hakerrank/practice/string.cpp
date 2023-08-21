#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1.size() << " " << str2.size()<<endl;

    cout << str1.replace(0,1,("r"));
    cout << str1.find(1);
    return 0;
}