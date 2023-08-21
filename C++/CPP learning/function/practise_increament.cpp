#include <iostream>
int main()
{
     int i = 6;
     int j = ++i + i++ - i-- + i;
     std::cout << j << std::endl;

     int k = 9;
     std::cout << k++ - --k + k++ + ++k << std::endl;
     int l = k++ - --k + k++ + ++k;
     std::cout << l << std::endl;

     int x = 23;
     int y = 13;
     
return 0;
}