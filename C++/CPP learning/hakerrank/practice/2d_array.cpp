#include <iostream>
using namespace std;
int main()
{
   int arr[2][2], i, j;
   for (int i = 0; i <= 2; i++)
   {
      for (int j = 0; j <= 2; j++)
      {
         scanf("%d", &arr[i][j]);
      }
   }
   for (int i = 0; i <= 2; i++)
   {
      for (int j = 0; j <= 2; j++)
      {
         printf("  %d  ", arr[i][j]);
      }
      printf("\n");
   }

   return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//    int arr[250][250],  n1 , n2, n;
//    printf("give no. stores");
//    scanf("%d",&n2);
//    scanf("%d",&n);
//    scanf("%d",&n1);
//   for ( int i =0;i<n2;i++)
//    {
//       for (int i= 0; i <n;i++)
//    {
//       for (int j=0; j<n1;j++)
//       {
//          scanf("%d",&arr[i][j]);
//       }
//    }
// }

//    for (int i= 0; i <n;i++)
//    {
//       for (int j=0; j<n1;j++)
//       {
//          printf(" %d ",arr[i][j]);
//       }
//       cout <<"\n";
//    }
// return 0;
// }