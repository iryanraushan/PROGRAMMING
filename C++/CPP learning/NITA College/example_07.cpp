#include "iostream"
int main()
{
   char ch;
   char title[] = "Titanic";
   ch = title[1];
   title[3] = ch;
   std::cout << title << std::endl;
   std::cout << ch << std::endl;
}