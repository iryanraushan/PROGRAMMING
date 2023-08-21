#include <iostream>

int main()
{
     int matrix1[3][3], matrix2[3][3];
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               std::cin >> matrix1[i][j];
          }
     }
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               std::cin >> matrix2[i][j];
          }
     }

     int matrix3[3][3];
     int multiply = 0;
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               matrix3[i][j] = 0;
               for (int k = 0; k < 3; k++)
               {
                    matrix3[i][j] = matrix3[i][j] + matrix1[i][k] * matrix2[k][j];
               }
          }
     }
     for (int i = 0; i < 3; i++)
     {
          for (int j = 0; j < 3; j++)
          {
               std::cout << matrix3[i][j] << " ";
          }
          std::cout << std::endl;
     }

     return 0;
}