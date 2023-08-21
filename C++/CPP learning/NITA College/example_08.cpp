#include "iostream"
int main ()
{
   const int LENGTH = 21;
char message[LENGTH];
 std::cout << "Enter a sentence on the line below." << std::endl;
 std::cin >> message;
 std::cout << message << std::endl;
}