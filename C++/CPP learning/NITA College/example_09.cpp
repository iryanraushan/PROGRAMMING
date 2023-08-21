#include "iostream"
int main()
{
   const int LENGTH = 21;
   char message[LENGTH];
   std::cout << "Enter a sentence on the line below." << std::endl;
   int i = 0;
   do
   {
     // std::cin >> message[i];
     std::cin.get(message[i]);
      ++i;
   } while (i < LENGTH - 1 && message[i] != '\n');
   message[i] = '\0';
   std::cout << message << std::endl;
}